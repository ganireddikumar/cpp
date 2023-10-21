#include <iostream>
using namespace std;

void printLeaders(int arr[], int n) {
    int leaders[n]; // Create an array to store the leaders
    int count = 0; // Initialize count for leaders

    // Initialize the last element as the first leader
    int leader = arr[n - 1];

    // The last element is always a leader
    leaders[count++] = leader;

    // Iterate through the array in reverse order
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > leader) {
            leader = arr[i];
            leaders[count++] = leader; // Store the leader
        }
    }

    // Print the leaders in reverse order
    for (int i = count - 1; i >= 0; i--) {
        cout << leaders[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    printLeaders(arr, n);

    return 0;
}
