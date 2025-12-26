// b8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "array.h"
#include <iostream>
#define MAX 100
using namespace std;

int main()
{
	int a[MAX], n = 0;
	input(a, n);
	//output(a, n);
	//giatrichan(a, n);
	//vitriam(a, n);
	//giatrilonnhat(a, n);
//itrinhonhat(a, n);
	//songuyentonhohon100(a, n);
	//void tonggiatriam( a, n);
	/*sapxep(a, n);
	output(a, n);*/
	int vt = vitrichandautien(a, n);
	if (vt < 0) {
		cout << "khong co gia tri chan trong mang" << endl;

	}
	else {
		cout << "vi tri chan dau tien: " << vt << endl;
	}
}

