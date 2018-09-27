#include <iostream>

int main() {
	std::cout << "think of a number, tell me what range that number falls in\n";
	std::cout << "whats the lower range?\n";
	int min = 0;
	std::cin >> min;
	std::cout << "whats the upper range?\n";
	int max = 0;
	std::cin >> max;	

	if (min > max) {
		min = min ^ max;
		max = min ^ max;
		min = min ^ max;
	}
	char foo = '\0';
	do {
		std::cout << "is the number " << (min + max) / 2 << "? (y = yes, > = greater than, < = less than)\n";
		std::cin >> foo;
		if (foo == '<') {//bring max down
			max = (min + max) / 2;
		} else if (foo == '>') {//bring min up
			min = (min + max) / 2;
		}
	} while (foo != 'y');
	return 0;
}