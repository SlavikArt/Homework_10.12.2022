#include <iostream>
using namespace std;

void ArrayJoin(int* arr1, int* arr2, int SIZE1, int SIZE2);
void ArrayAdd(int* arr, int SIZE, int num);
void ArrayPop(int* arr, int SIZE, int index);

int main()
{
    int size1 = 0;
    int size2 = 0;

    cout << "Enter size of the first array: ";
    cin >> size1;

    cout << "Enter size of the second array: ";
    cin >> size2;

    int* one = new int[size1];

    for (int i = 0; i < size1; i++)
    {
        one[i] = rand() % 100;
        cout << one[i] << "\t";
    }
    cout << "\n";

    int* two = new int[size2];

    for (int i = 0; i < size2; i++) {
        two[i] = rand() % 100;
        cout << two[i] << "\t";
    }
    cout << endl;

    ArrayJoin(one, two, size1, size2);

    int size3;

    cout << "Enter size of the third array: ";
    cin >> size3;

    int* three = new int[size3];

    for (int i = 0; i < size3; i++) 
    {
        three[i] = rand() % 100;
        cout << three[i] << "\t";
    }
    cout << "\n";

    ArrayAdd(three, size3, rand() % 100);

    int size4;

    cout << "Enter size of the fourth array: ";
    cin >> size4;

    int* four = new int[size4];

    for (int i = 0; i < size4; i++) 
    {
        four[i] = rand() % 100;
        cout << four[i] << "\t";
    }
    cout << "\n";

    ArrayPop(four, size4, 3);
}

void ArrayJoin(int* arr1, int* arr2, int SIZE1, int SIZE2) 
{
    int* res = new int[SIZE1 + SIZE2];

    for (int i = 0; i < SIZE1; i++) 
    {
        *res++ = arr1[i];
    }

    for (int i = 0; i < SIZE2; i++) {
        *res++ = arr2[i];
    }
    res -= SIZE1 + SIZE2;

    for (int i = 0; i < SIZE1 + SIZE2; i++) 
    {
        cout << *res++ << "\t";
    }
    cout << "\n";
}

void ArrayAdd(int* arr, int SIZE, int num) 
{
    int* res = new int[SIZE + 1];

    for (int i = 0; i < SIZE; i++) 
    {
        *res++ = arr[i];
    }
    *res++ = num;
    res -= SIZE + 1;

    for (int i = 0; i < SIZE + 1; i++) 
    {
        cout << *res++ << "\t";
    }
    cout << "\n";
}

void ArrayPop(int* arr, int SIZE, int index) 
{
    for (int i = index - 1; i < SIZE; i++)
    {
        arr[i] = arr[i + 1];
    }
    SIZE--;

    for (int i = 0; i < SIZE; i++)
    {
        cout << *arr++ << "\t";
    }
    cout << "\n";
}