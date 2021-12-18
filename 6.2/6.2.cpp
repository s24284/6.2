// 6.2.cpp : 
//

#include <iostream>
#include <string>

struct uczen
{
    std::string imie, informatyka, matematyka, biologia, jezyk_polski;

};



int main()
{
    struct uczen osoby [6];
    int nrucznia, nrprzedmiotu;
    std::string ocena, nazwaprzedmiotu;

    for (int i = 1; i < 7; i++)
    {
        std::cout << "Podaj imie ucznia nr: " << i << "\n";
        std::cin >> osoby[i-1].imie;
        std::cout << "Podaj ocene z informatyki:\n";
        std::cin >> osoby[i-1].informatyka;
        std::cout << "Podaj ocene z biologii:\n";
        std::cin >> osoby[i-1].biologia;
        std::cout << "Podaj ocene z matematyki:\n";
        std::cin >> osoby[i-1].matematyka;
        std::cout << "Podaj ocene z jezyka polskiego:\n";
        std::cin >> osoby[i-1].jezyk_polski;
    }
       
    std::cout << "Dziekuje. Teraz mozesz zapytac mnie o ocene wybranego ucznia (od 1 do 6) z danego przedmiotu.\n Podaj numer ucznia:\n\n ";
    std::cin >> nrucznia;
        std::cout << "Podaj numer nr przedmiotu (od 1 do 4):\n\n";
        std::cin >> nrprzedmiotu;

        switch (nrprzedmiotu)
        {
        case 1: ocena = osoby[nrucznia-1].informatyka;
            nazwaprzedmiotu = "informatyka";
            break;
        case 2: ocena = osoby[nrucznia-1].biologia;
            nazwaprzedmiotu = "biologia";
            break;
        case 3: ocena = osoby[nrucznia-1].matematyka;
            nazwaprzedmiotu = "matematyka";
            break;
        case 4: ocena = osoby[nrucznia-1].jezyk_polski;
            nazwaprzedmiotu = "jezyk polski";
            break;
        default:
            std::cout << "Nie podales liczby od 1 do 4!\n\n";
 }

        std::cout << "Uczen, o ktorego pytasz, to: " << osoby[nrucznia-1].imie << " z przedmiotu " << nazwaprzedmiotu << " ma ocene " << ocena << "\n\n";

            return 0;
}

