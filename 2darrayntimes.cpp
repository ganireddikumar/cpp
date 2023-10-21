#include <iostream>
using namespace std;

int main() {
    int row, col;
    cin >> row >> col;

    // Create a 2D array
    int arr[row][col];

    // Read input
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    // Print rows based on the pattern
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < row - i; j++) {
            for (int k = 0; k < col; k++) {
                cout << arr[i][k] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
