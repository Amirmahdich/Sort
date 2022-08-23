#include <iostream>
#include <string>
using namespace std;



int getsize() {
    int n;
    cout << "Enter size of the Array: ";
    cin >> n;
    return n;
}


int* getvalues(int n) {

    int i = 0;
    int* A = new int[n];
    cout << "Enter array values:\n";
    for (i;i < n;i++)
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
    
    void Merge(int A[], int p = 0, int q = 0, int r = 0)
    {

        int i, j, k = 0;

        int  n1 = q - p + 1;
        int  n2 = r - q;
        int* L = new int[n1];
        int* R = new int[n2];


        // create left and right subarrays
        for (i = 0;i < n1;i++)
        {
            L[i] = A[p + i];
        }


        for (j = 0;j < n2;j++)
        {
            R[j] = A[q + j + 1];
        }
        i = 0, j = 0;

        // start compariosn

        for (k = p;i < n1 && j < n2;k++)
        {
            if (L[i] < R[j])
            {
                A[k] = L[i++];
            }
            else
            {
                A[k] = R[j++];
            }
        }

        // put the remaining elements in the main array
        while (i < n1)
        {
            A[k++] = L[i++];
        }

        while (j < n2)
        {
            A[k++] = R[j++];
        }
    }
    void MergeSort(int A[], int p, int r)
    {
        int q;
        if (p < r)
        {
            q = (p + r) / 2;
            MergeSort(A, p, q);
            MergeSort(A, q + 1, r);
            Merge(A, p, q, r);
        }
    }


    int main() {
        int n = getsize();
        int* B = getvalues(n);
        MergeSort(B, 0, n-1);
        printingarray(B, n);
    }
  
