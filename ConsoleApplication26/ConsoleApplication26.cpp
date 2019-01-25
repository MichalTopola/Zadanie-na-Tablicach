// ConsoleApplication26.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
#include<ctime>
using namespace std;

	void wypisz(int tablica[], int rozmiar)
	{
		std::cout << "Liczby w tablicy: " << std::endl;
		for (int i = 0; i < rozmiar; ++i)
			std::cout << tablica[i] << ", ";

		std::cout << std::endl;
	}

	void wykonajZadanie(int tablica[], int rozmiar)
	{
		std::cout << "Wykonaj zadanie: " << std::endl;
		int iSumaWszystkich = 0;
		int iSumaWypisanych = 0;
		for (int y = 0; y < rozmiar; ++y)
		iSumaWszystkich += tablica[y];
		
		for (int i = 0; i < rozmiar; ++i)
		{
			if (tablica[i] % 2 == 0){
				std::cout << tablica[i] << ", ";
				iSumaWypisanych += tablica[i];
			}
				
		
		}
		std::cout << std::endl;
		std::cout << "Suma wszystkich: " << iSumaWszystkich << std::endl;
		std::cout << "Suma wypisanych: " << iSumaWypisanych << std::endl;
	}

	int main()
	{
		srand(time(0));
		int tab[10];
		for (int i = 0; i < 10; ++i)
			tab[i] = rand() % 100;

		wypisz(tab, 10);
		wykonajZadanie(tab, 10);
		return 0;
	}



// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
