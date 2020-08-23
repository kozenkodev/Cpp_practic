#include <iostream>
using namespace std;
 
void sortix(int *arr,int size)
{

    int temp; // временная переменная для обмена элементов местами
 
    // Сортировка массива пузырьком
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // меняем элементы местами
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
   
    const int size = 10;
    int arr[size];     
       // заполнение массива
    for (int i = 0; i < size; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
 sortix(arr,size);
 
    // Вывод отсортированного массива на экран
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
