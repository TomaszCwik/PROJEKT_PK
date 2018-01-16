#include "stdafx.h"

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
		  SprawdzCzymJest(linia);
		  nr_lini++;
	  }
}

void SprawdzCzymJest(string linia)
{
	Utwor *wsk;
	if (linia[0] == 'K')
	{
//
	}
	else if (linia[0] == 'C')
	{
		cout << linia[0] << endl;
	}
	else if (linia[0] == 'I')
	{
		cout << linia[0] << endl;
	}
	else if (linia[0] =='R')
	{
		cout << linia[0] << endl;
	}
	else
	{
		cout << "nieznany rodzaj artykulu" << endl;
	}
}

