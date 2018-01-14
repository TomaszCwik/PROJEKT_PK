#include "stdafx.h"
#include <fstream> //import biblioteki fstream
#include <stdio.h> //import biblioteki stdio.h
#include <iostream>
#include <iostream>
#include <string>
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
void OdczytZPlikuPoLinii()
{
	ifstream odczyt("Wej.txt");

	if (odczyt.is_open())
	{
		char znak;
		while (odczyt >> znak) //dopóki jest co czytaæ
		{
			cout << znak; //wypisz to co wczyta³es z pliku
						  //lub wykonaj inn¹ operacjê
		}
	}
	else
		cout << "Nie uda³o siê otworzyæ pliku";
	} 
void  OdczytZPlikuPoWierszu()
{
	int nr_lini = 1;
	string linia;
	fstream plik;
	plik.open("Wej.txt", ios::in);
	  if (plik.good() == false)
		{
		  cout << "ERROR" << endl;
		  exit(0);
	  }
	  while (getline(plik, linia))
	  {
		  SprawdzCzymJest(linia[0],linia);
		  nr_lini++;
	  }
}

void SprawdzCzymJest(char litera,string linia)
{

	if (litera == 'K')
	{
		cout << "K" << endl;

	}
	else if (litera == 'C')
	{
		cout << "C" << endl;
	}
	else if (litera == 'I')
	{
		cout << "I" << endl;
	}
	else if (litera =='R')
	{
		cout << "R" << endl;
	}
	else
	{
		cout << "nieznany rodzaj artykulu" << endl;
	}
}

