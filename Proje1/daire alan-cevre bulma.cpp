#include<iostream>
#define PI 13.14
using namespace std;

void main() {
	float r;
	float alan;
	float cevre;
	cout << "Yaricapi giriniz: ";
	cin >> r;
	alan = PI * r * r;
	cevre = 2 * PI * r;
	cout << "Dairenin cevresi: " << cevre << "\n";
	cout << "Dairenin alani: " << alan << "\n";
}
