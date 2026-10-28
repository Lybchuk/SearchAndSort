

#include <iostream>
using namespace std;


void FillArr(int arr[], int size) {
    for (int i = 0; i < size;i++) {
        arr[i] = rand() % 20;
    }
}
void ShowArr(int arr[], int size) {
    
    for (int i = 0;i < size;i++) {
        cout << arr[i] << " ";
    }
}
void SortArr(int arr[], int size, int choice) {
    int temp = 0;
        for (int i = 0; i < size - 1;i++) {
            if (choice == 0) {
                for (int j = 0; j < size - 1; j++) {
                    if (arr[j] > arr[j + 1]) {
                        temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }
            else if(choice == 1){
                for (int j = 0; j < size - 1; j++) {
                    if (arr[j] < arr[j + 1]) {
                        temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }
        }
    
    cout << "\nSorted arr: " << endl;
    ShowArr(arr, size);
}

int main()
{
    srand(time(0));
    const int size = 10;
    int arr[size]{};
    int choice;
    cout << "Previous arr: " << endl;
    FillArr(arr, size);
    cout << "0 - Increase, 1 - Decrease: "; cin >> choice; cout << endl;
    ShowArr(arr, size);
    SortArr(arr, size, choice);
}


