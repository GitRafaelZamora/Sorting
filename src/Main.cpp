#include <stdio.h>
#include <iostream>
#include "Sort.cpp"

using namespace std;



int main(void) {
    Sort sort;
    int arr[] = { 1, 2, 3};
    int n = 3;
    
    sort.recursiveInsertionSort(arr, n);
    
    return 0;
}
