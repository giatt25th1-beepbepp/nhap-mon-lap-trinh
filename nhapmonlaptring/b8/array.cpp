#include <iostream>
#include "songuyen.h"
using namespace std;
void input(int b[], int& n) {
	cout << "nhap so luong phan tu: ";
	cin>> n;
	for (int i = 0; i < n; i++) {
		cout << "\t+ phan tu " << (i + 1) << ": ";
		cin >> b[i];
	}
}
void output(int b[], int n) {
	cout << "danh sach phan tu mang: " << endl;
	int i = 0;
	while (i < n) {
		cout << b[i] << " ";
		i++;
	}
	cout << endl;
}
void giatrichan(int b[], int n) {
	cout << "danh sach phan tu chan cua mang: " << endl;
	int i = 0;
	while (i < n) {
		if (b[i]%2==0)
		cout << b[i] << " ";
		i++;
	}
	cout << endl;
}
void vitriam(int b[], int n) {
	cout << "danh sach phan tu chan cua mang: " << endl;
	int i = 0;
	while (i < n) {
		if (b[i] < 0)
			cout << i + 1 << " ";
		i++;
	}
	cout << endl;
}
void giatrilonnhat(int b[], int n) {
	int max = b[0];
	for (int i = 1; i < n; i++) {
		if (max < b[i]) {
			max = b[i];
		}
	}	cout << "gia tri lon nhat: " << max << endl;
}
void vitrinhonhat(int b[], int n) {
	int min = b[0], vt = 0;
	for (int i = 1; i < n; i++) {
		if (min > b[i]) {
			min = b[i];
			vt = i;
		}
	}	cout << "gia tri nho  : " << min << " vi tri: " << vt + 1 << endl;
	}
void songuyentonhohon100(int b[], int n) {
	cout << "so nho hon 100: " << endl;
	for (int i = 0; i < n; i++) {
		if (b[i] < 100 && nguyento(b[i]) == true) {
			cout << b[i] << "  ";
		}
	}
	cout << endl;
	 
}