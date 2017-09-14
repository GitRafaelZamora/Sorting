#include <stdio.h>
#include <iostream>
#include "Sort.cpp"

using namespace std;



int main(void) {
    Sort sort; // Creating a sort object in order to use different sorting algorithms.
    int arr[] = {2,13,42,1,10,16,24}; // The array to be sorted.
    int n = sizeof(arr)/sizeof(arr[0]); // Size of the array.
    
    cout << "Unsorted: " << endl;
    sort.printArray(arr, n); // Printing the unsorted array.
     
    sort.recursiveInsertionSort(arr, n);
    
    cout << "Sorted: " << endl;
    sort.printArray(arr, n); // Printing the sorted array.
    
    return 0;
}
