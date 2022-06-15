// practical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	srand(time(NULL));
	std::string questions[4];
	questions[0] = "What is (115 - 35 + 15)?\n";
	questions[1] = "What country is Macchu Piccu in?\n";
	questions[2] = "How old is Queen Elizabeth?\n";
	questions[3] = "What century is it?\n";
	int random = rand() % 3;
	std::cout << questions[random];
	switch (random)
	{
	case 0: {
		std::cout << "1: 95\n2: 85\n3: 65\n 4: 99\n";
		int a = 0;
		std::cin >> a;
		if (a == 1) {
			std::cout << "Correct!";
		}
		else {
			std::cout << "Wrong";
		}
		break;
	}
	case 1: {
		std::cout << "1: Brazil\n2: Peru\n3: Iceland\n4: Greenland\n";
		int a = 0;
		std::cin >> a;
		if (a == 2) {
			std::cout << "Correct!";
		}
		else {
			std::cout << "Wrong";
		}
		break;
	}
	case 2: {
		std::cout << "1: 89\n2: 65\n3: 105\n4: 96\n";
		int a = 0;
		std::cin >> a;
		if (a == 4) {
			std::cout << "Correct!";
		}
		else {
			std::cout << "Wrong";
		}
		break;
	}
	case 3: {
		std::cout << "1: 19th century\n2: 20th century\n3: 21st century\n4: 22nd century\n";
		int a = 0;
		std::cin >> a;
		if (a == 3) {
			std::cout << "Correct!";
		}
		else {
			std::cout << "Wrong";
		}
		break;
	}
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
