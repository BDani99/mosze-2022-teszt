#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
	int *b = new int[NELEMENTS];
	std::cout << '1-100 ertekek duplazasa' //; hi�nyzik
		for (int i = 0;) // nincs inkrement�l�s, illetve, hogy meddig megy a ciklus
		{
			b[i] = i * 2; // i+1 kell, mert az indexn�l nagyobbnak kell lennie
		}
	for (int i = 0; i; i++)
	{
		std::cout << "Ertek:" // nincs  megadva, hogy mit �rjon ki
	}
	std::cout << "Atlag szamitasa: " << std::endl;
	int atlag; // nincs lenull�zva
	for (int i = 0; i < N_ELEMENTS, i++)
	{
		atlag += b[i]
	}
	atlag /= N_ELEMENTS;
	std::cout << "Atlag: " << atlag << std::endl;
	return 0;
}