#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <thread>


char alph[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l','m', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
void createPrefix() {
	for (int i = 0; i < 2; i++) {
		int l = rand() % 25;
		char let = alph[l];
		std::cout << let;
	}

}
void createSuffix() {
	int len = rand() % 4 + 1;
	for (int i = 0; i < len; i++) {
		int l = rand() % 25 + 0;
		char let = alph[l];
		std::cout << let;
	}
	
}



int main() {
	srand(time(NULL));
	while (1) {
		createPrefix();
		createSuffix();
		std::cout << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			

		
	}



	return 0;
}