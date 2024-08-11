#include<iostream>

using namespace std;

int main() {

	// allocate memory for a 1D array on the heap memory

	int* ptr = new int[5];

	// access elements of the 1D array

	// *ptr = 10;
	// *(ptr + 1) = 20;
	// *(ptr + 2) = 30;
	// *(ptr + 3) = 40;
	// *(ptr + 4) = 50;

	ptr[0] = 10;
	ptr[1] = 20;
	ptr[2] = 30;
	ptr[3] = 40;
	ptr[4] = 50;

	cout << *ptr << " " << ptr[0] << endl;
	cout << *(ptr + 1) << " " << ptr[1] << endl;
	cout << *(ptr + 2) << " " << ptr[2] << endl;
	cout << *(ptr + 3) << " " << ptr[3] << endl;
	cout << *(ptr + 4) << " " << ptr[4] << endl;

	// deallocate memory for 1D array

	delete [] ptr;

	return 0;
}