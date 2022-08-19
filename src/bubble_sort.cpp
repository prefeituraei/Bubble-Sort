#include <iostream>

int main(int argc, char* argv[]) {
	
	int tmp;

	int a[5] = { 10, 2, 0, 43, 12 };

	std::cout << "Input list (Lista de entrada)...\n";
	for (int i = 0; i < 5; i++)
		std::cout << a[i] << '\t';

	std::cout << std::endl;
	
	for (int i = 0; i < 5; i++) 
		for (int j = i + 1; j < 5; j++) {
			if (a[j] < a[i]) {
				//swap
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}

	std::cout << "Sorted Element List (Lista de elementos ordenados)...\n";

	for (int i = 0; i < 5; i++)
		std::cout << a[i] << '\t';
	
}