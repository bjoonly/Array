#include<iostream>
#include"Array.h"
using namespace std;

int main() {
	srand(unsigned(time(0)));
	Array arr1(15),arr2;
	cout << "Array: ";
	arr1.FillRand();
	arr1.Print();
	/*cout << "-Array: ";
	arr2 = -arr1;
	arr2.Print();
	cout << "Array++:";
	arr2 = arr1++;
	arr2.Print();
	cout << "++Array:";
	++arr1;
	arr1.Print();
	cout << "Array--: ";
	arr2 = arr1--;
	arr2.Print();
	cout << "--Array: ";
	--arr1;
	arr1.Print();
	cout << "To long: " << (long)arr1 << endl;
	cout << "To char*: " << (char*)arr1 << endl;*/
	cout << arr1[25] << endl;
	cout << arr1[0] << endl;
	arr1(10);
	arr1.Print();
	return 0;
}