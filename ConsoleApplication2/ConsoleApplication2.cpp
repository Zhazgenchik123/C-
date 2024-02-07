# include <iostream>
# include <cmath>
# include <string>
int main() {
	int choice;
	std::cout << "choose from 1 to 3\n";
	std::cin >> choice;
	int sum = 0;
	std::string str_number;
	switch (choice) {
		case 1:
			while (true) {
				int num_1;
				std::cout << "input integer to plus or 0 to stop: " << std::endl;
				std::cin >> num_1;
				if (num_1 == 0) {
					std::cout << "sum is: " << sum;
					break;
				}
				else {
					sum += num_1;
				}
			}
			break;
		case 2:
			int num_2;
			std::cout << "Input your number" << std::endl;
			std::cin >> num_2;
			str_number = std::to_string(num_2);
			for (char digit : str_number) {
				int number = digit -'0';
				sum += number;
				
			}
			std::cout << sum;



			break;
		case 3:
			int num_3;
			std::cout << "Input integer:" << std::endl;
			std::cin >> num_3;
			for (int i = 1; i < 11; i++) {
				std::cout << num_3 << " x " << i << " = " << num_3 * i << std::endl;
			}
	}

	
}