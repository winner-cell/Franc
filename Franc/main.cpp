#include"Franc.h"
using namespace std;
int main()
{
	Franc f1(3, 6), f2(4, 9);
	f1.FranSimp(f1);
	f1.display();
	Franc f3 = f1 + f2;
	f3.display();
	f3++;
	f3.display();
	f3 == f1 ? cout<<"yes" : cout<<"false";
	f3 = f2 - f1;
	f3.display();
	f3--;
	f3.display();
}