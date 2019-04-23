#pragma once
using namespace std;

class my_vector
{
private:
	int* vect;
	int N;
public:
	my_vector();
	~my_vector();
	void show();
	int sum();
	void line();
	void replace();
};

