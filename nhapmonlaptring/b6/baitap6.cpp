#include <iostream>
using namespace std;
void cau11() {
	int sotien;
	cout << "nhap so tien :";
	cin >> sotien;
	for (int i = 0; i <= 100; i++) {
		for (int j = 0;j <= 100; j++) {
			for (int k = 0; k <= 100; k++) {
				if (i * 100000 + j * 200000 + k * 500000 == sotien) {
					cout << i << "x100000 " << j << "x200000 " << k << "x500000" << endl;
				}
			}
		}
	}


}
void cau12() {
	for (int ga = 0; ga <= 36; ga++) {
		int cho = 36 - ga;
		if (ga * 2 + cho * 4 == 100)
			cout<< ga << "xga" << cho << "xcho" << endl;
	}
}