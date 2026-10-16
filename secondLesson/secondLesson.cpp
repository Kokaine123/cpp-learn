#include <iostream>
int main()
{
	int liczbaPc{};			  // Liczba komputerow ktora ma wpisac uzytkownik
	int cenaPc{};			  // cena komputera ktora wpisuje uzytkownik
	int cenaNaprawionegoPc{}; // cena naprawionego pc ktora wpisuje uzytkownik

	std::cout << "Ile Pc kupiles? Podaj liczbe: ";
	std::cin >> liczbaPc;

	std::cout << "Za ile kupiles jeden pc? Podaj cene: ";
	std::cin >> cenaPc;

	std::cout << "Za ile sprzedales jeden pc? Podaj wartosc sprzedania jednego pc: ";
	std::cin >> cenaNaprawionegoPc;

	int zainwestowanaKasa{ liczbaPc * cenaPc };				 // zainwestowane pieniadze w komputery
	int calkowityPrzychod{ liczbaPc * cenaNaprawionegoPc };	 // calkowity przychod bez kosztow
	int czystyZysk{ calkowityPrzychod - zainwestowanaKasa }; // czysty zysk odejmowanie


	std::cout << "--- PODSUMOWANIE BIZNESU ---" << "\n"
			  << "Twoj czysty zysk z tej operacji wynosi: " << czystyZysk << "\n"
			  << "zainwestowales: " << zainwestowanaKasa << " zl" << "\n"
			  << "Twoj calkowity przychod to: " << calkowityPrzychod << " zl" << "\n";


	return 0;
}
