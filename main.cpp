#include<iostream>
#include<ctime>
using namespace std;
template<typename T>
bool add_to_array(T*& array, int& size, T item, int index = 0)
{
    (index == 0) ? index = size : index = index;
    size++;
    T* buf = new T[size];
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size; j++)
        {

        }
        if ([i][j] < index) {
            buf[i][j] = array[i];
        }
        else if ([i][j] > index)
        {
            buf[i][j] = array[i - 1];
        }
        else {
            buf[i][j] = item;
        }
    }
    delete[] array;
    array = nullptr;
    array = new T[size];
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size; j++)
        {

        }
        array[i][j] = buf[i][j];
    }
    delete[] buf;
    return true;
}
int main()
{
    int *arr_i;
    cin >> *arr_i;
    int size;
    cin >> size;
    int item;
    cin >> item;
    int index;
    cin >> index;
    add_to_array<int>(arr_i, size, item, index);
	srand(time(0));
	int col = 5, row = 5;
	int** arr_2d = new int* [col];
	int* rows = new int[col];
	for (size_t i = 0; i < col; i++)
	{
		cout << "Enter size of row[" << i << "]:";
		cin >> row;
		arr_2d[i] = new int[row];
		rows[i] = row;
		for (size_t j = 0; j < row; j++)
		{
			arr_2d[i][j] = rand() % 10;
		}
	}
	for (size_t i = 0; i < col; i++)
	{
		for (size_t j = 0; j < rows[i]; j++)
		{
			cout << arr_2d[i][j] << '\t';
		}
		cout << endl;
	}
	return 0;
}