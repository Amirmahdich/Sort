#include <iostream>
using namespace std;

void insertionSort(int array[], int size) {
    for 
        (int step = 1; step < size; step++) {
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



int getsize() {
    int n;
    cout << "Enter size of the Array: ";
    cin >> n;
    return n;
}


int* getvalues(int n){
    
    int i = 0;
    int* A = new int[n];
    cout << "Enter array values:\n";
    for (i ;i < n;i++)
        cin >> A[i];
    return A;
}

void printingarray(int array[], int size) {
    cout << "The Sorted List is\n";
    for (int i = 0;i < size;i++)
    {
        cout << array[i] << " ";
    }
    return;


}


int main() {
    int n = getsize();
    int* B = getvalues(n);
    insertionSort(B, n);
    printingarray(B,n);
  
    
    

   
  

}