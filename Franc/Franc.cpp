#include"Franc.h"
using namespace std;
Franc::Franc(int n=0, int m=0)
{
	molecular=n;  //����
	denominator = m;//��ĸ
}
void Franc::FranSimp(Franc& f)
 {
		int c, a = f.molecular, b = f.denominator;
		while (b) {
			c = a % b;
			a = b;
			b = c;
		}
		f.molecular /= a;
		f.denominator/= a;
	}
	

void Franc::display()
{
	cout << "������" << molecular << "/" << denominator<<endl;
}
Franc Franc::operator+(Franc f)
{
	Franc temp;
	temp.denominator = denominator * f.denominator;
	temp.molecular = f.molecular *denominator+ molecular*f.denominator;
	temp.FranSimp(temp);
	return temp;
}
Franc Franc::operator++(int)
{
	molecular = molecular + denominator;
	return *this;
	
}
bool Franc::operator==(Franc f)
{
	if (f.denominator == denominator && f.molecular == molecular) return true;
	else return false;
}
Franc Franc::operator-(Franc f)
{
	Franc temp;
	temp.molecular = molecular * f.denominator - molecular * f.denominator;
	temp.denominator = f.denominator * denominator;
	return temp;
}
Franc Franc::operator--(int)
{
	molecular = molecular - denominator;
	return *this;
}