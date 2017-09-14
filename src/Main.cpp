#include <stdio.h>
#include <iostream>
#include "Sort.cpp"

using namespace std;



int main(void) {
    Sort sort;
    int arr[] = {2,13,42,1,10,16,24};
    int n = 7;
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    
    sort.recursiveInsertionSort(arr, n);
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}
