#include <iostream>
using namespace std;



void tonggiatriam(int b[], int n) {
	int tong = 0;
	for (int i = 0; i < n; i++) {
		if (b[i] < 0)
			tong += b[i];
	}
	cout << "tong am: " << tong << endl;
}
void input(int b[], int& n) {
	int n;
	cout << "nhap so luong phan tu " << endl;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "\t+ phan tu " << (i + 1) << ": ";
		cin >> b[i];
}