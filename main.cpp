#include <iostream>
using namespace std;
const int ROWS = 100;
const int COLS = 100;
void deleteRow(int arr[][COLS], int& Rows, int Cols, int position) {
    if (position >= 0 && position < Rows) {
        for (int i = position; i < Rows - 1; i++) {
            for (int j = 0; j < Cols; j++) {
                arr[i][j] = arr[i + 1][j];
            }
        }
        for (int j = 0; j < Cols; j++) {
            arr[Rows - 1][j] = 0;
        }
        Rows--;
    }
    else {
        cout << endl;
    }
}
int main() {
    int arr[ROWS][COLS];
    int Rows = 3;
    int Cols = 3;
    arr[0][0] = 1;
    arr[0][1] = 2;
    arr[0][2] = 3;
    arr[1][0] = 4;
    arr[1][1] = 5;
    arr[1][2] = 6;
    arr[2][0] = 7;
    arr[2][1] = 8;
    arr[2][2] = 9;
    deleteRow(arr, Rows, Cols, 1);
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}