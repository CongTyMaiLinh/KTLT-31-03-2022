#include <bits/stdc++.h>

using namespace std;
// bai 8 trang 3
void Dao_Nguoc_So(int n) {
	if (n > 0) {
		cout << n%10 ;
		Dao_Nguoc_So(n/=10);
	} else {
		cout << endl;
	}
}
// bai 4 trang 3
void bang_cuu_chuong(int n) {
	int i;
	for (i = 1; i < 11; i++) {
		cout << n << "*" << i<< "=" << n*i << endl;
	}
}
// bai 5 trang 3
void so_nguyen_to(int n) {
	int i, sum = 0;
	for (i = 1; i <= n; i++) {
		if (n%i==0 && n%n==0) {
			sum++;
		} 
	}
	if (sum == 2) {
		cout << endl << n << " la so nguyen to" << endl;
	} else {
		cout << endl << n << " khong la so nguyen to" << endl;
	}
}
//bai 5 trang 4
void Fib() {
	unsigned long long st = 0, ls = 1, rd;
	cout << st << " " << ls << " ";
	int i;
	for (i = 3; i <= 100; i++) {
		rd = ls + st;
		cout << rd << " ";
		st = ls;
		ls = rd;
	}
 }
 // bai 4 ve nha trang 3 
 void so_hoan_hao(int n) {
	int i, sum = 0;
	for (i = 1; i < n; i++) {
		if (n%i==0) {
			sum+=i;
		} 
	}
	if(sum == n) {
		cout << n <<" so hoan hao" << endl;
	} else {
		cout << n <<" deo phai =))" << endl;
	}
 }
 // Luy thua, giao thua, EXp
int luy_thua(int m, int n) {
 	if (n < 0) {
 		return m * luy_thua(m, n-1);
	 }
 }
int main() { 
int a = 2, b= 3;
	cout << luy_thua(a, b);
//	int n, a;
//	cin >> n >> a;
//	int i = 1;
//	cout << " dao nguoc so " << endl;
//	Dao_Nguoc_So(n);
//	cout << "bang cuu chuong " << a << endl;
//	bang_cuu_chuong(a);
//	cout << " kiem tra " << n << " co phai la so nguyen to hay khong" ;
//	so_nguyen_to(n);
//	cout << " day fibonaci kich thuoc 100" << endl;
//	Fib();
//	cout << endl <<"kiem tra so hoan hao" << endl;
//	so_hoan_hao(6);
//	so_hoan_hao(5);
	return 0;
}
