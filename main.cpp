#include<iostream>
using namespace std;
void addToEnd(int** array, int numRows, int numCols, int* rowToAdd) {
    int** newArray = new int* [numRows + 1];  
    for (int i = 0; i < numRows; i++) {
        newArray[i] = array[i];  
    }
    newArray[numRows] = rowToAdd; 
    delete[] array;
    array = newArray;
    cout << newArray << endl;
}