#include<iostream>
class Franc
{
public:
	Franc(int n, int m);
	void FranSimp(Franc& f);
	void display();
	Franc operator+(Franc f);
	Franc operator++(int);
	bool operator==(Franc f);
	Franc operator-(Franc f);
	Franc operator--(int);
private:
	int molecular;  //·Ö×Ó
	int denominator;//·ÖÄ¸
};