#include <iostream>
#include <string>

int main() {
	std::string name;
	std::cout << "Enter your name: ";
	std::cin >> name; // ввод имени
	std::cout << "Hello world from " << name << std::endl;
	return 0;
}
