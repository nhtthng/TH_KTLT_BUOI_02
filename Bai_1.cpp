#include <iostream>
using namespace std;

void Cau_1(int a[], int& n) {
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 100;
	}
}

void Cau_2(int a[], int& n) {
	for (int i = 0; i < n;i++) {
		a[i] = (rand() % 50) * 2;
	}
}

void Cau_3(int a[], int& n, int x) {
	int find = -1;
	for (int i = 0; i < n;i++) {
		if (a[i] == x) {
			find = i;
		}
	}
	if (find != -1) {
		cout << "x o vi tri: " << find;
	}
	else {
		cout << "x khong co trong mang";
	}
}

void Cau_4(int a[], int& n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n;j++) {
			if (a[i] < a[j]) {
				swap(a[j], a[i]);
			}
		}
	}
}

void Xuatmang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "Cac phan tu trong mang la: " << a[i] << endl;
	}
}

int main() {
	int n;
	int a[100];
	cout << "Nhap so luong: ";
	cin >> n;
	Cau_2(a, n);
	Xuatmang(a, n);
	Cau_4(a, n);
	cout << "Mang sau khi sap xep la" << endl;
	Xuatmang(a, n);
	return 0;
}