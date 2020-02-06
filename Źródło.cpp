#include <iostream>
#include <conio.h>
using namespace std;



void zamiana(int* tab, int rozmiar)
{
	//int a = tab;
	int b = 0;
	int dl = rozmiar / 2;
	//int tabl[1024];

	for (int i = 0; i <= dl; i++)
	{
		b = tab[i];
		tab[i] = tab[rozmiar - i - 1];
		tab[rozmiar - i - 1] = b;

	}
	for (int i = 0; i < rozmiar; i++)
	{
		cout << tab[i];
	}
}



void suma(double(*f)(int n), int k)
{
	

	double suma{};
	for(int i=1; i<=k;i++)
	{
		suma += (*f)(i);
	}

	cout << suma << endl;
	
}

double funkcja(int n)
{
	double f;
	f = (2 * n) - 1;
	return f;
}

int main()
{
	int k = 5;
	suma(funkcja, k);
	cout << endl;

	int tab[5] = { 1,2,3,4,5};
	int* wsk = tab;
    zamiana(wsk, 5);

	_getch();
	return 0;
}