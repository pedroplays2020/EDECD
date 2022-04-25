#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char letra;
	
	do{
		printf("\nCarrega numa tecla: ");
		scanf(" %c", letra);
		printf(" A tecla foi: %c\n", letra);
		if(letra>='a' & letra<='z') {
			letra=letra-32;
			printf("A letra maiuacala e: %c", letra);	
		} else{
			printf("essa tecla nao tem maiuscula");
			
		}
	} while(letra!='.');
	return 0;
}
