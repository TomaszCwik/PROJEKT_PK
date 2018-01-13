#include "stdafx.h"
#include <fstream> //import biblioteki fstream
#include <stdio.h> //import biblioteki stdio.h
#include <iostream>
using namespace std;
void ZapisDoPliku(int IloscWierszy,string ZawartoscPaczki[],string NazwaPliku)
{
	fstream plik;

	plik.open("raport.txt", ios::out | ios::app);
	if (plik.good() == true)
	{
		for (int i = 0; i < IloscWierszy; i++)
		{
			plik << i << endl;
		}
	}
	else
	{
		cout << "TEST" << endl;
	}
	plik.close();

}