#include <iostream> // musi być na górze, żeby działało wpisywanie i wypisywanie

int main() {
	// Puste klamry {} = zmienna startuje od zera. 
	// Robię tak zawsze, żeby w RAM-ie nie zostały jakieś losowe śmieci z innych programów.
	int rokUrodzenia{};

	// A tu od razu wrzucam 2026 do środka na start.
	int obecnyRok{ 2026 };

	// cout << wyrzuca tekst na ekran. Strzałki w lewo, bo dane "lecą" do konsoli.
	// '\n' na końcu to znak nowej linii (używam zamiast endl, bo jest optymalniejsze).
	std::cout << "Podaj rok urodzenia: \n";

	// cin >> pobiera to, co wpiszę z klawiatury. Strzałki w prawo, bo ładuję to prosto do zmiennej.
	std::cin >> rokUrodzenia;

	// Matma w locie - odejmuję od razu przy wypisywaniu, nie muszę tworzyć nowej zmiennej na wynik.
	std::cout << "masz okolo " << obecnyRok - rokUrodzenia << " lat" << '\n';

	int magicznaLiczba{};
	std::cout << "podaj dowolna magiczna liczbe: " << '\n';
	std::cin >> magicznaLiczba;

	// Inicjalizacja z wyliczeniem - zmienna od razu przy tworzeniu dostaje wynik z mnożenia.
	int lepszaMagicznaLiczba = { magicznaLiczba * 2 };
	std::cout << "twoja liczba to " << lepszaMagicznaLiczba << '\n';

	int punkty{};

	// [[maybe_unused]] dodaję, żeby Visual nie wkurzał mnie zielonymi wężykami i warningami, 
	// że stworzyłem zmienną i jej nie używam. To takie info: "wiem co robię, zostaw to".
	[[maybe_unused]] int tajnePunkty{ 999 };

	std::cout << "podaj twoje punkty";
	std::cin >> punkty;
	std::cout << "Zanotowano punktow: " << punkty << '\n';
}