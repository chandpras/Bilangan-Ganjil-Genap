#include <iostream>
using namespace std;

int main()
{
	int angka;
	
	cin >> angka;
	
	if(angka % 2 == 0)
	{
		cout << "==================================" << endl;
		cout << angka << " adalah bilangan genap" << endl;
	}else if(angka % 2 != 0)
	{
		cout << "==================================" << endl;
		cout << angka << " adalah bilangan ganjil" << endl;
	}
	
	return 0;
}
