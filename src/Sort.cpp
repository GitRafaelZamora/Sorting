#include <stdio.h>
#include <iostream>

using namespace std;


class Sort {
    public: 
        void recursiveInsertionSort(int* arr, int n);
        void printArray(int* arr, int n);
};
    
void Sort::recursiveInsertionSort(int* arr, int n) {
    // Base case: 
    //  Looking for the first index of the array to break out of recursion.
    if (n <= 1) { 
        return;
    }
    
    // Calling sort Recursively till n == 1;
    recursiveInsertionSort(arr, n - 1);
    
    // Storing the current index of the array to 
    // insert into its correct position.
    int last = arr[n - 1];
    // Storing the previous index to compare against last.
    int j = n - 2;
    
    // Checking both j exists and the element to the 
    // left is bigger than the element we are sorting.
    while (j >= 0 && arr[j] > last) {
        arr[j+1] = arr[j]; // Shifting values to the right if theres an issue.
        j--; // Moving left through array.
    }
    arr[j + 1] = last; // finally inserting element into correct position. 
}

// Just a simply print array method to make sort easier to easy.
void Sort::printArray(int* arr, int n) {
    cout << "[ ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}