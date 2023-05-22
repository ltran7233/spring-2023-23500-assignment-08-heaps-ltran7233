#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "heap.h"

TEST_CASE("heap test 1"){
	int arr1[] = {1, 2, 3, 4, 5};
	heapsort(arr1, 5);
	CHECK(arr1[0]==5);
	CHECK(arr1[1]==4);
	CHECK(arr1[2]==3);
	CHECK(arr1[3]==2);
	CHECK(arr1[4]==1);
}

TEST_CASE("heap test 2"){
	int arr2[] = {10, 9, 8, 7, 6};
	heapsort(arr2, 5);
	CHECK(arr2[0]==10);
	CHECK(arr2[1]==9);
	CHECK(arr2[2]==8);
	CHECK(arr2[3]==7);
	CHECK(arr2[4]==6);
}

TEST_CASE("heap test 3"){
	int arr3[] = {9, 0, 2, 3, 4};
	heapsort(arr3, 5);
	CHECK(arr3[0]==9);
	CHECK(arr3[1]==4);
	CHECK(arr3[2]==3);
	CHECK(arr3[3]==2);
	CHECK(arr3[4]==0);
}
