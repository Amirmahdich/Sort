#include <iostream>
using namespace std;


void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void insertionSort(int array[], int size) {
    for (int step = 1; step < size; step++) {
        int key = array[step];
        int j = step - 1;

        
        
        // compare the key with the elements on left

        while (key < array[j] && j >= 0) {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = key;
    }
}
    int main() {
        int n;
        cout << "Enter size of the Array: ";
        cin >> n;
        int i;
        int* A = new int[n];
        cout << "Enter array values:\n";
        for (i = 0;i < n;i++)
            cin >> A[i];
        insertionSort(A, n);
        cout << "The Sorted List is\n";
        for (i = 0;i < n;i++)
        {
            cout << A[i] << " ";
        }
        return 0;

    }