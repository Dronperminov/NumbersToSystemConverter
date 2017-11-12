#include <stdio.h>

void convert(unsigned number, unsigned base) {
	if (!number)
		return;

	convert(number / base, base);

	int mod = number % base;
	printf("%c", mod < 10 ? '0' + mod : 'A' + mod - 10);
}

int main() {
	unsigned n, base;

	printf("Enter number: ");
	scanf("%d", &n);

	printf("Enter base: ");
	scanf("%d", &base);

	convert(n, base);
	printf("\n");

	/*for (unsigned base = 2; base <= 16; base++) {
		printf("%d in %d = ", n, base);
		convert(n, base);
		printf("\n");
	}*/

	return 0;
}