#include <iostream>
#include "my_vector.h"
#include <ctime>


using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	srand(time(0));
	my_vector vect;
	vect.show();
	cout << "����� ���� ���������: ";
	vect.sum();
	cout << endl<<""<<endl;

	vect.line();
	/*vector<int> vect;
	int N = 0;
	cout << "������� ���������� ��������� �������: ";
	cin >> N;
	for (int i = 0; i <N; i++) {
		vect.push_back(rand() % 11);
	}
	int sum = 0;
	for (int a : vect) {
		sum += a;
		cout << a << '\t';
	}
	cout << endl;
	cout << "����� ���� ���������: "<<sum<<endl;
	for (int a : vect) {
		cout << 2*a+5 << '\t';
	}
	cout << endl;
	for (int a : vect) {
		if (a > 5) {
			a = 20;
		}
		cout << a << '\t';
	}
	cout << endl;*/
	system("pause");
	return 0;
}