#pragma once
#include<iostream>
#include<ctime>
using namespace std;
class Array {
	long* arr;
	int size;
	bool CheckIndex(int index)const;
public:
	Array();
	Array(int size);
	Array(const Array& Arr);
	~Array();

	void SetSize(int size);
	int GetSize()const;
	long GetElemArr(int index)const;

	void FillRand();
	void FillKeyboard();
	void FillDefault();

	void AddElem(long elem);

	void DeleteElemIndex(int index);
	void DeleteElemValue(long value);

	long Maximum();
	long Minimum();
	double Average();

	void SortAscending();
	void SortDescending();

	void Print()const;

	Array& operator++();
	Array operator++(int);
	Array& operator--();
	Array operator--(int);
	Array& operator=(const Array&other);
	Array operator-();
	long &operator[](int index)const;
	void operator()(long num);
	operator long();
	operator char* ();

};

