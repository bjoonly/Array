#include<iostream>
#include"Array.h"
using namespace std;

int main() {
	srand(unsigned(time(0)));
	Array arr1(10);
	cout << "First array: \n";
	arr1.Print();
	cout << "\nFill default values:\n";
	arr1.FillDefault();
	arr1.Print();
	cout << "\nDelete element by index:\n";
	arr1.DeleteElemIndex(0);
	arr1.Print();
	cout << "\nDelete element by value:\n";
	arr1.DeleteElemValue(7);
	arr1.Print();
	cout << "\nCreate second array and copy first array in it.\n";
	Array arr2(arr1);
	cout << "\nAdd new element:\n";
	arr1.AddElem(15);
	arr1.Print();
	cout << "\nSorting descending array:\n";
	arr1.SortDescending();
	arr1.Print();
	cout << "\nSecond array:\n";
	arr2.Print();
	cout << "\nFill rand values:\n";
	arr2.FillRand();
	arr2.Print();
	cout << "\nSorting ascending array:\n";
	arr2.SortAscending();
	arr2.Print();
	cout << "\nMax = " << arr2.Maximum() << endl;
	cout << "\nMin = " << arr2.Minimum() << endl;
	cout << "\nAverage = " << arr2.Average() << endl;

	return 0;
}