#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
	int *b = new int[NELEMENTS];
	std::cout << '1-100 ertekek duplazasa' //; hiányzik
		for (int i = 0;) // nincs inkrementálás, illetve, hogy meddig megy a ciklus
		{
			b[i] = i * 2; // i+1 kell, mert az indexnél nagyobbnak kell lennie
		}
	for (int i = 0; i; i++)
	{
		std::cout << "Ertek:" // nincs  megadva, hogy mit írjon ki
	}
	std::cout << "Atlag szamitasa: " << std::endl;
	int atlag; // nincs lenullázva
	for (int i = 0; i < N_ELEMENTS, i++)
	{
		atlag += b[i]
	}
	atlag /= N_ELEMENTS;
	std::cout << "Atlag: " << atlag << std::endl;
	return 0;
}