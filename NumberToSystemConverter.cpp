#include <iostream>

void convert(unsigned number, unsigned base) {
	if (!number)
		return;

	convert(number / base, base);

	int mod = number % base;
	std::cout << (char) (mod < 10 ? '0' + mod : 'A' + mod - 10);
}

int main() {
	unsigned n, base;

	std::cout << "Enter number: ";
	std::cin >> n;

	std::cout << "Enter base: ";
	std::cin >> base;

	convert(n, base);
	std::cout << std::endl;
}