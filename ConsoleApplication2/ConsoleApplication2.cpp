// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void cal(int d, int m, int y) {

	int sum = 0;
	int days;

	for (int i = 0; i < m; i++)
	{
		switch (i)
		{
		case 0: days = 31;			break;
		case 1: days = 28;			break;
		case 2: days = 31;			break;
		case 3: days = 30;			break;
		case 4: days = 31;			break;
		case 5: days = 30;			break;
		case 6:
		case 7: days = 31;			break;
		case 8: days = 30;			break;
		case 9: days = 31;			break;
		case 10: days = 30;			break;
		case 11: days = 31;			break;
		}
		sum += days;
	}

	sum = sum - (days - d);

	for (int i = sum; i % 7 > 0; i -= 7)
	{
		switch (i)
		{
		case 1: cout << "P";			break;
		case 2: cout << "v";			break;
		case 3: cout << "s";			break;
		case 4: cout << "ch";			break;
		case 5: cout << "pt";			break;
		case 6: cout << "sb";			break;
		case 7: cout << "vs";			break;
		}
	}
	
}


int main() {
	int month, days;
	int day, year;
	int sum = 0;

	cout << "day = ";
	cin >> day;
	cout << "month = ";
	cin >> month;
	cout << "year";
	cin >> year;
	
	cal(day, month, year);
	cout << endl;
	
	return 0;
}




#pragma region MyRegion



//int areaR(int h, int w = 1)
//{
//	return h * w;
//}

//int arrayMAX(int a[], int size) {
//	int max = INT_MAX;
//
//	for (int i = 0; i < size; i++)
//	{
//		if (a[i] > max) max = a[i];
//	}
//	return max;
//}
//
//
//int arrayMAX(double a[], int size) {
//	int max = a[0];
//
//	for (int i = 0; i < size; i++)
//	{
//		if (a[i] > max) max = a[i];
//	}
//	return max;
//}

//37
//template<typename type>
//
//type xy(type x, int y) {
//
//	return pow(x, y);
//
//}


//36
//template<typename type1>
//void arrZ(type1 a[], int size, int &p=0) {
//
//	int z;
//
//	for (int i = 0; i < size; i++)
//	{
//		if (a[i] == 0) cout << i;
//	}
//
//}


//35
//template<typename type3>
//type arrX(type3 a[], int size, int &x) {
//
//	type max = a[0];
//	
//	for (int i = 0; i < size; i++)
//	{
//		int max_pos;
//		if (a[i] > max) {
//			max = a[i];
//			max_pos =i;
//		}
//
//	}
//	x = max_pos
//	return max;
//cout << max << "\t" << x << endl;
//}

//template<typename type4>

//type arrayMAX(type4 a[], int size) {
//
//	type4 max = a[0];
//
//	for (int i = 0; i < size; i++)
//	{
//		if (a[i] > max) max = a[i];
//	}
//	return max;
//}


//int main()
//{
	//int a, b;
	//int a[] = { 2,0,1,0,3 };

	//37

	/*cin >> a >> b;
	cout << xy(a, b) << endl;*/

	//36
//	arrZ(a, 5, x);
//	cout << endl;

	//	cout << arrZ(a, 5, x) << endl;

		//cout << x << endl;


		//cout << arrX(a, 5) << endl;



		//double b[] = { 1.2,2.6,2.8,3.3,3.6 };
		//cout << arrayMAX(a, 5) << endl;
		//cout << arrayMAX(b, 5) << endl;
		//cout << areaR(x) << endl;


	//system("pause");
	//return 0;
//}

#pragma endregion