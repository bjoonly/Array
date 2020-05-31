#include "Array.h"


bool Array::CheckIndex(int index) const {
	return (index >= 0 && index < size);
}

Array::Array() :arr(nullptr), size(0) {}
Array::Array(int size) {
	if (size < 1)
		size = 1;
	this->size = size;
	arr = new long[size] {};
}

Array::Array(const Array& Arr) {
	size = Arr.size;
	arr = new long[size];
	for (int i = 0; i < size; i++)
		arr[i] = Arr.arr[i];
}

Array::~Array() {
	delete[]arr;
}

void Array::SetSize(int size) {
	if (size > 0)
		this->size = size;
}
int Array::GetSize()const {
	return size;
}
long Array::GetElemArr(int index) const {
	if (CheckIndex(index))
		return arr[index];
	else
		return 0;
}
void Array::FillRand() {
	for (int i = 0; i < size; i++) {
		arr[i] = -1000 + rand() % (1000 + 1000 + 1);
	}
}
void Array::FillKeyboard() {
	if (size == 0)
		cout << "Size = 0";

	for (int i = 0; i < size; i++) {
		cout << "Enter " << i + 1 << " elem: ";
		cin >> arr[i];
	}
}
void Array::FillDefault() {
	for (int i = 0; i < size; i++)
		arr[i] = i + 1;
}

void Array::AddElem(long elem) {
	long* newArr = new long[++size];
	for (int i = 0; i < size - 1; i++)
		newArr[i] = arr[i];
	newArr[size - 1] = elem;
	delete[]arr;
	arr = newArr;
}

void Array::DeleteElemIndex(int index) {
	if (CheckIndex(index)) {
		long* newArr = new long[--size];
		for (int i = 0; i < size; i++) {
			if (i < index)
				newArr[i] = arr[i];
			else
				newArr[i] = arr[i + 1];
		}
		delete[]arr;
		arr = newArr;
	}
}

void Array::DeleteElemValue(long value) {
	for (int i = size - 1; i >= 0; i--) {
		if (arr[i] == value)
			DeleteElemIndex(i);
	}

}

long Array::Maximum() {
	if (size > 0) {
		long max = arr[0];
		for (int i = 0; i < size; i++) {
			if (max < arr[i])
				max = arr[i];
		}
		return max;
	}
	return 0;
}

long Array::Minimum() {
	if (size > 0) {
		long min = arr[0];
		for (int i = 0; i < size; i++) {
			if (min > arr[i])
				min = arr[i];
		}
		return min;
	}
	return 0;
}

double Array::Average() {
	if (size > 0) {
		long sum = 0;
		for (int i = 0; i < size; i++)
			sum += arr[i];
		return (double)sum / size;
	}
	return 0;
}

void Array::SortAscending() {
	int imin = 0;
	for (int i = 0; i < size - 1; i++) {
		imin = i;
		for (int j = i + 1; j < size; j++)
			if (arr[j] < arr[imin])
				imin = j;
		if (imin > i)
			swap(arr[i], arr[imin]);

	}
}

void Array::SortDescending() {
	int imax = 0;
	for (int i = 0; i < size - 1; i++) {
		imax = i;
		for (int j = i + 1; j < size; j++)
			if (arr[j] > arr[imax])
				imax = j;
		if (imax > i)
			swap(arr[i], arr[imax]);

	}
}

void Array::Print() const {
	cout << "[ ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << "]\n";
}

