#include <iostream>
#include "heap.h"

int main() {
	int arr[] = {5, 2, 4, 8, 10};
	int n = sizeof(arr) / sizeof(arr[0]);
	std::cout << "Unsorted Array: ";
	toString(arr, n);
	
	heapsort(arr, n);
	std::cout << "Sorted Array: ";
	toString(arr, n);
	
	return 0;
}
