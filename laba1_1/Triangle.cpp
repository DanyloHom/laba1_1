#include "Triangle.h"
#include <iostream>
using namespace std;

bool Triangle::Init(double l, double r)
{
	if (l > 0 && r > 0) {
		setFirst(l);
		setSecond(r);
		return true;
	}
	else
		return false;
}

void Triangle::Read()
{
	double l, r;
	do {
		cout << "first leg = " << endl;
		cin >> l;
		cout << "second leg = " << endl;
		cin >> r;
	} while (!Init(l, r));
}

void Triangle::Display()
{
	cout << "first leg = " << first << endl;
	cout << "second leg = " << second << endl;
}

double Triangle::hypotenuse()
{
	return sqrt(pow(first, 2) + pow(second, 2));
}
