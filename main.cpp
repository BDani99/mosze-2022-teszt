#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
	int* b = new int[N_ELEMENTS];
	std::cout << "1-100 ertekek duplazasa\n";
	for (int i = 0; i < N_ELEMENTS; i++)
	{
		b[i] = (i + 1) * 2;
		std::cout << "Ertek: " << b[i] << std::endl;
	}
	std::cout << "Atlag szamitasa: " << std::endl;
	int atlag = 0;
	for (int i = 0; i < N_ELEMENTS; i++)
	{
		atlag += b[i];
	}
	atlag /= N_ELEMENTS;
	std::cout << "Atlag: " << atlag << std::endl;

	std::cout << "blablabla";

	return 0;
}