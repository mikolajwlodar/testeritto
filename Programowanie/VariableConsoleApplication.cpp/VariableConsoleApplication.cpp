// VariableConsoleApplication.cpp 

#include <iostream>

/*
* Wykładzina do pokoju
Wczytaj długość i szerokość prostokątnego pokoju w metrach oraz cenę metra kwadratowego wykładziny. Oblicz powierzchnię podłogi oraz koszt wykładziny potrzebnej do jej pokrycia. Pomiń zapas i odpady przy docinaniu.

* Podlewanie trawnika
Zraszacz podlewa obszar w kształcie koła. Wczytaj jego zasięg w metrach, czyli odległość od zraszacza do najdalszego podlewanego punktu. Oblicz powierzchnię podlewanego trawnika.

* Koszt podróży samochodem
Wczytaj długość trasy w kilometrach, średnie spalanie samochodu w litrach na 100 km oraz cenę litra paliwa. Oblicz ilość paliwa potrzebną do przejechania trasy oraz koszt tego paliwa.

* Zakup z rabatem
Wczytaj cenę towaru przed obniżką oraz wysokość rabatu w procentach. Oblicz cenę po obniżce oraz zaoszczędzoną kwotę.

* Koszt zużycia energii
Wczytaj moc urządzenia w watach, czas jego pracy w godzinach oraz cenę jednej kilowatogodziny energii elektrycznej. Oblicz zużycie energii w kilowatogodzinach oraz koszt pracy urządzenia. Przyjmij, że urządzenie przez cały ten czas pracuje z podaną mocą.

* Rachunek za zakupy
Klient kupuje trzy rodzaje produktów. Dla każdego rodzaju wczytaj cenę jednej sztuki oraz liczbę kupowanych sztuk. Oblicz koszt zakupu każdego rodzaju produktu oraz łączną kwotę do zapłaty.

* Średnia ważona ocen
Wczytaj trzy oceny ucznia oraz wagę każdej z nich. Przyjmij, że wszystkie wagi są dodatnie. Oblicz średnią ważoną ocen.

* Wymiary do dokumentacji
Wczytaj długość elementu w metrach. Do dokumentacji warsztatowej potrzebny jest ten sam wymiar w centymetrach i milimetrach. Oblicz i wyświetl obie wartości.

* Wymiana waluty przed wyjazdem
Wczytaj kwotę w złotych przeznaczoną na wymianę oraz kurs euro wyrażony jako cena jednego euro w złotych. Oblicz, ile euro można otrzymać za podaną kwotę. Pomiń prowizję kantoru.

* Podział kosztów wyjazdu
Grupa znajomych dzieli po równo koszty wspólnego wyjazdu. Wczytaj łączny koszt transportu, cenę jednego noclegu dla jednej osoby, liczbę noclegów oraz liczbę uczestników. Oblicz całkowity koszt wyjazdu i kwotę przypadającą na jedną osobę.
*/


//Napisz program który wczyta liczbę od użytkownika 
// i ją wyświetli na konsoli
void task1()
{
	//wczytanie liczby od użytkownika
	//	informacja co chcemy
	std::cout << "Podaj liczbę:\n";
	//  pobieramy daną
	//     deklaracja zmiennej
	int numberFromUser;
	//     zapamiętanie danej
	std::cin >> numberFromUser;
	//wyświetlenie na konsoli
	std::cout << "Użytkownik podał: " << numberFromUser << "\n";
}

//Program obliczający średnią arytmetyczną dwóch liczb.
void task2()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj pierwszą liczbę:\n";
	std::cin >> firstNumber;

	std::cout << "Podaj drugą liczbę:\n";
	std::cin >> secondNumber;

	float average;
	average = (firstNumber + secondNumber) / 2.0;

	std::cout << "Średnia to: " << average << "\n";
}

//Program pokazujący współpracę zmiannych
void task3()
{
	int firstNumber = 10;
	int secondNumber = firstNumber;

	firstNumber = 20;

	std::cout << firstNumber << ' ' << secondNumber << '\n';
}

//Zamiana wartości dwóch zmiennych
void task4()
{
	// Wczytanie dwóch liczb
	int firstNumber, secondNumber;

	std::cout << "Podaj pierwsza liczbe:\n";
	std::cin >> firstNumber;

	std::cout << "Podaj druga liczbe:\n";
	std::cin >> secondNumber;

	// Wyświetlenie wartości przed zamianą
	std::cout << "Przed zamiana: " << firstNumber << ' '
		<< secondNumber << '\n';

	// Zamiana wartości
	//   Zachowanie pierwszej wartości w zmiennej pomocniczej
	int temporaryNumber = firstNumber;
	//   Zastąpienie pierwszej wartości drugą
	firstNumber = secondNumber;
	//   Zapisanie zachowanej wartości w drugiej zmiennej
	secondNumber = temporaryNumber;

	// Wyświetlenie wartości po zamianie
	std::cout << "Po zamianie: " << firstNumber << ' ' << secondNumber << '\n';
}

//* Wykładzina do pokoju
//Wczytaj długość i szerokość prostokątnego pokoju w metrach oraz cenę metra kwadratowego wykładziny.
//Oblicz powierzchnię podłogi oraz koszt wykładziny potrzebnej do jej pokrycia.Pomiń zapas i odpady przy docinaniu.
void task5()
{
	int width, height;
	std::cout << "Podaj długość:\n";
	std::cin >> width;
	std::cout << "Podaj wysokość:\n";
	std::cin >> height;

	float pricePerSquareMeter;
	std::cout << "Podaj cene za m2:\n";
	std::cin >> pricePerSquareMeter;

	int area;
	area = width * height;

	float cost;
	cost = area * pricePerSquareMeter;

	std::cout << "Powierzchnia: " << area << "m2\n";
	std::cout << "Koszt wykladziny: " << cost << " zl\n";
}

//* Podlewanie trawnika
//Zraszacz podlewa obszar w kształcie koła.Wczytaj jego zasięg w metrach, czyli odległość od zraszacza do najdalszego podlewanego punktu.
// Oblicz powierzchnię podlewanego trawnika.
void task6()
{
	int radius;
	std::cout << "Podaj zasięg zraszacza:\n";
	std::cin >> radius;

	int area;
	area = radius * radius * 3.14;

	std::cout << "Powierzchnia: " << area << "m2\n";
}

//* Koszt podróży samochodem
//Wczytaj długość trasy w kilometrach, średnie spalanie samochodu w litrach na 100 km oraz cenę litra paliwa.
// Oblicz ilość paliwa potrzebną do przejechania trasy oraz koszt tego paliwa.
void task7()
{
	int distance, averageFuelUsed, pricePerLiter;
	std::cout << "Podaj dystans:\n";
	std::cin >> distance;
	std::cout << "Podaj średnie spalanie paliwa:\n";
	std::cin >> averageFuelUsed;
	std::cout << "Podaj cene za litr paliwa:\n";
	std::cin >> pricePerLiter;

	float fuelNeeded;
	fuelNeeded = distance * averageFuelUsed / 100.0;

	float costOfAdventure;
	costOfAdventure = fuelNeeded * pricePerLiter;

	std::cout << "Ilość potrzebnego paliwa wynosi: " << fuelNeeded << "L\n";
	std::cout << "Cena za podróż: " << costOfAdventure << "zl\n";
}

//* Zakup z rabatem
//Wczytaj cenę towaru przed obniżką oraz wysokość rabatu w procentach.
// Oblicz cenę po obniżce oraz zaoszczędzoną kwotę.
void task8()
{
	int priceBeforeDiscount, discountAmmountInPrecents;
	std::cout << "Podaj cene przed obniżką:\n";
	std::cin >> priceBeforeDiscount;
	std::cout << "Podaj cene obniżki przed:\n";
	std::cin >> discountAmmountInPrecents;


}

int main()
{
	setlocale(LC_CTYPE, "polish");

	task7();
}

/*
Algorytm - skończony zbiór instrukcji,
który rozwiązuje zadany problem.
Określa też kolejność wynonywanych instrukcji.

Zapis algorytmu:
* opis słowny
* w punktach
* rysunki
* schemat blokowy
* kod źródłowy danego języka programowania
* pseudokod

Zmienna - pewien obszar w pamięci operacyjnej, w której można
w danej chwili przechować tylko jedną daną.

Instrukcja daklaracji zmiennej:
typ_zmiennej nazwa_zmiennej;

Typ zmiennej - wielkość obszaru pamięci, interpretacja ciągu bitów

short - 2 bajtowa liczba całkowita ze znakiem <-32 768, 32 767>
long - 4 bajtowa liczba całkowita ze znakiem <-2 147 483 648, 2 147 483 647>
int - 2 lub 4 bajtowa liczba ze znakiem (zalezy od kompilatora)
long long - 8 bajtowa liczba ze znakiem <-9 223 372 036 854 775 808, 9 223 372 036 854 775 807>

unsigned - zmienna bez znaku <0, 2*max + 1>

float - 4 bajtowa liczba rzeczywista, dokładność 6-7 cyfr po przecinku
double - 8 bajtowa liczba rzeczywista, dokładność 15-16 cyfr po przecinku
long double - 12 bajtowa liczba rzeczywista, dokładność 19-20 cyfr po przecinku

Nazwa zmiennej - nazwa obszaru w pamięci, identyfikator

Warunki niezbędne:
* dozwolone znaki:
	- alfabet angielski aA-zZ
	- cyfry arabskie 0-9
	- podkreślenie (podłoga) _
* pierwszym znakiem nie może być cyfra
* unikalny w swoim zakresie widoczności
* nie może to być słowo kluczowe (zarezerwowane) danego języka

Warunki programistów:
* nazwa zmiennej powinna oddawać charakter przechowywanych danych
* jeśli identyfikator składa się z wielu słów to w miejscu spacji wstawiamy podkreślenie
  lub piszemy bez spacji i zaczynając od drugiego słowa piszemy je z dużej litery
* piszemy po angielsku

*/