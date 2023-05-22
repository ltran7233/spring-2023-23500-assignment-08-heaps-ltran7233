#include <iostream>
#include "heap.h"

void heapsort(int data[], int n){
	for (int i = n/2-1; i>=0; i--) {
		heapify(data, n, i);
	}
	for (int i = n-1; i>=0; i--) {
		std::swap(data[0], data[i]);
		heapify(data, i, 0);
	}
}

void heapify(int data[], int n, int r){
	int smallest = r;
	int left = 2*r + 1;
	int right = 2*r + 2;
	
	if (left < n && data[left] < data[smallest]) {
		smallest = left;
	}
	
	if (right < n && data[right] < data[smallest]) {
		smallest = right;
	}
	
	if (smallest != r) {
		std::swap(data[r], data[smallest]);
		heapify(data, n, smallest);
	}
}

void toString(int data[], int n){
	for (int i=0; i<n; i++) {
		std::cout << data[i] << " ";
	}
	std::cout << "\n";
}
