#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	printf("1- Caracteres: %c %c \n", 'a', 65);
	printf("2- Decimais: %d %ld\n", 1997, 650000L);
	printf("3- Preecher com espaços: %10d \n", 1977);
	printf("4- Preecher com zeros: %010d \n ", 1977);
	printf("5- Bases numericas diferentes: %d %x %o %#x %#o\n", 100, 100, 100, 100, 100);
	printf("6- Floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
	printf("7- Com um truque: %*d (comapare com a linha 3)\n", 10 ,1977);
	printf("7- %s \n", "Uma string");
	return 0;
}
