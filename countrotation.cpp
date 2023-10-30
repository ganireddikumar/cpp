#include <iostream>
using namespace std;

int countRotations(int arr[], int n) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        if (arr[low] <= arr[high]) {
            return low; // No rotations, the array is not rotated
        }

        int mid = low + (high - low) / 2;
        int next = (mid + 1) % n;
        int prev = (mid - 1 + n) % n;

        if (arr[mid] <= arr[next] && arr[mid] <= arr[prev]) {
            return mid; // Mid is the minimum element, and it corresponds to the number of rotations.
        } else if (arr[low] <= arr[mid]) {
            low = mid + 1; // The minimum element is in the right half
        } else {
            high = mid - 1; // The minimum element is in the left half
        }
    }

    return -1; // Invalid input, or the array is not sorted.
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int rotations = countRotations(arr, n);

    if (rotations != -1) {
        cout << "Number of rotations: " << rotations << endl;
    } else {
        cout << "Invalid input or the array is not rotated." << endl;
    }

    return 0;
}
