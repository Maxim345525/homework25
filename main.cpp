#include <iostream>
using namespace std;
const int MAX_ROWS = 100;
const int MAX = 100;
void addRow(int arr[][MAX], int& numRows, int numCols, int newRow[]) {
    if (numRows < MAX) {
        for (int j = 0; j < numCols; j++) {
            arr[numRows][j] = newRow[j];
        }
        numRows++;
    }
    else {
        cout  << endl;
    }
}
int main() {
    int arr[MAX_ROWS][MAX];
    int numRows = 0;
    int numCols = 3;
    int row1[] = { 7, 8, 9 };
    addRow(arr, numRows, numCols, row1);
    int row2[] = { 1, 2, 3 };
    addRow(arr, numRows, numCols, row2);
    int row3[] = { 4, 5, 6 };
    addRow(arr, numRows, numCols, row3);
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}


