#pragma once
class Triangle
{
private:
	double first;
	double second;
public:
	double getFirst() const { return first; }
	double getSecond() const { return second; }
	void setFirst(double value) { first = value; }
	void setSecond(double value) { second = value; }
	bool Init(double l, double r);
	void Read();
	void Display();
	double hypotenuse();
};

