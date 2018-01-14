#include "Parametry_Programu.h"
#include "stdafx.h"

using namespace std;

void Sprawdz_Wartosci(int argc, char *argv[])
{
	string NWej, NWyj, RSort;
	cout << "Liczba argumentow w wierszu polecen: " << argc << endl;
	for (int i = 0; i<argc; ++i)
		cout << i << " : " << argv[i] << endl;

	if (argc != 6)
	{
		cout << "podano bledna ilosc argumentow!!" << endl;
	}
	else
	{
		for (int i = 1; i < argc; i++)
		{	
			string Temp = argv[i];
			cout << i << " : " << Temp << endl;
			if (argv[i]=="-i")
			{
				cout << "NWEJ" << endl;
				 NWej = argv[i+1];
			}
			if (argv[i] == "-o")
			{
				 NWyj = argv[i+1];
			}			
			if (argv[i] == "-s")
			{
				 RSort ="s";
			}
			if (argv[i] == "-n")
			{
				 RSort = "n";
			}

		}
		cout << NWej << "," << NWyj << "," << RSort << endl;

	}

}