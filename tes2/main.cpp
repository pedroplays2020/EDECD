#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	printf("Characters: %c %ç\n",'a', 65);
	printf("Decimals: %d \n", 1977, 650000L);
	printf("Preceding with blanks: %10d \n",1977);
	printf("Preceding with zeros: %010d \n",1977);
	printf("Some different radices: %d %0 %#x %#o \n", 100, 100, 100, 100, 100);
	printf("floats: %4.2f %+.0e %E \n",  3.1416, 3.1416, 3.1416 );
	printf("Width trick: &*d \n", 5, 10);
	printf("%s \n", "A string");
	return 0;
}
