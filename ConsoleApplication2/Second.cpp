# include <iostream>
# include <cmath>
int pain() {
	int num;
	std::cout << "Input your number: ";
	std::cin >> num;
	num /= 10;
	std::cout << num;
	return 0;
}