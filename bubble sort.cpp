
#include <iostream>
using namespace std;


void bubbleSort(int array[], int size) {


    for (int step = 0; step < size; ++step) {

        
        for (int i = 0; i < size - step; ++i) {

            
            if (array[i] > array[i + 1]) {

               
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}
void printArray(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << "  " << array[i];
    }
    cout << "\n";
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
    printArray(A, n);
    cout << "The Sorted List is\n";
    for (i = 0;i < n;i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}