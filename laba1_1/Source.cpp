#include"Triangle.h"
#include <iostream>
using namespace std;

Triangle makeTriangle(double l, double r)
{
	Triangle a;
	if (!a.Init(l, r))
		cout << "wrong arguments!" << endl;
	else
		return a;
}

int main()
{
	Triangle a;
	a.Read();
	a.Display();
	cout << "hypotenuse = " << a.hypotenuse() << endl;
	double l, r;
	cout << "first leg = " << endl;
	cin >> l;
	cout << "second leg = " << endl;
	cin >> r;
	a = makeTriangle(l, r);
	a.Display();
	cout << "hypotenuse = " << a.hypotenuse() << endl;
}