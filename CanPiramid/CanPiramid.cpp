#include <iostream>
#include "Can.h"

int main()
{
	int n;
	std::cin >> n;
	int* inputs = new int[n];
	
	for (int i = 0; i < n; i++) {
		std::cin >> inputs[i];
	}

	for (int i = 0; i < n; i++) {
		Can* cans = new Can[*(inputs+i)];

		for (long j = 0; j < *(inputs + i); j++) {

			(cans + j)->RowNumber(j + 1);
		}
		std::cout << (cans + (*(inputs + i) - 1))->CanResults();
		std::cout << std::endl;
		cans = nullptr;
	}
	
	return 0;
}
