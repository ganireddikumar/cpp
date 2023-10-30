#include <iostream>
using namespace std;

void rotateArray(int arr[], int N, int D) {
    // To handle the case where D is greater than N
    D = D % N;

    // Create a temporary array to store the rotated elements
    int temp[D];
    for (int i = 0; i < D; i++) {
        temp[i] = arr[i];
    }

    // Shift the remaining elements to the left
    for (int i = D; i < N; i++) {
        arr[i - D] = arr[i];
    }

    // Copy the rotated elements from the temporary array back to the original array
    for (int i = 0; i < D; i++) {
        arr[N - D + i] = temp[i];
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;

        int arr[N];
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        int D;
        cin >> D;

        rotateArray(arr, N, D);

        // Print the rotated array
        for (int i = 0; i < N; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
