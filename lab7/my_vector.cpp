#include "my_vector.h"
#include <iostream>
using namespace std;
//template <typename T>

my_vector::my_vector()
{
	cout << "Введите количество элементов вектора: ";
	cin >> N;
	vect = new int[N];
	for (int i = 0; i < N; i++) {
		vect[i]=rand() % 11;
	}
}


my_vector::~my_vector()
{
	delete[] vect;
	vect = NULL;
}


void my_vector::show()
{
	for (int i = 0; i < N; i++) {
		cout << vect[i] << '\t';
	}
	cout << endl;
}


int my_vector::sum()
{
	int sum = 0;
	for (int i = 0; i < N; i++) {
		sum += vect[i];
	}
}


void my_vector::line()
{
	for (int i = 0; i < N; i++) {
		cout << 2 * vect[i] + 5 << '\t';
	}
	cout << endl;
}


void my_vector::replace()
{
	for (int i = 0; i < N; i++) {
		if (vect[i] > 5) {
			vect[i] = 20;
		}
	}
}