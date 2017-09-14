#include <stdio.h>
#include <iostream>

using namespace std;


class Sort {
    public: 
        void recursiveInsertionSort(int* arr, int n);
};
    
void Sort::recursiveInsertionSort(int* arr, int n) {
    if (n <= 1) {
        return;
    }
    
    recursiveInsertionSort(arr, n - 1);
    
    int last = arr[n - 1];
    int j = n - 2;
    
    while (j >= 0 && arr[j] > last) {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j + 1] = last;
}