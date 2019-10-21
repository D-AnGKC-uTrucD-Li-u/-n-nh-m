#include "VECTOR_CACULATOR.h"

VECTOR_CACULATOR::VECTOR_CACULATOR()
{
	for (int i = 1; i <= n; i++)
	{
		v[i] = 0;
	}
}
void  VECTOR_CACULATOR::nhapsl()
{
	cout << "Nhap so phan tu cua vector a: "; 
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "v[" << i << "]: ";
		cin >> v[i];
	}
}

void  VECTOR_CACULATOR::caculator()
{

	VECTOR_CACULATOR a,b,c;
	cout << "Nhap vector a : \n";
	a.nhapsl();
	cout << "\nNhap vector b : \n";
	b.nhapsl();
	cout << "\nVector a: ";
	a.insl();
	cout << "Vector b: ";
	b.insl();
	c = c.cong(a, b);
	cout << "Tong 2 vector: ";
	c.insl();
	c = c.hieu(a, b);
	cout << "Hieu 2 vector: ";
	c.insl();
	c = c.nhan(a, b);
	cout << "Nhan 2 vector: ";
	c.insl();
}