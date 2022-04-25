#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char pal[11];
	int i=0;
	printf("Escreva uma palavra(max 10 caracteres)\n");
	scanf("%10s", &pal);
	printf(" escreveu :%10s\n", pal);
	while((i<11) && (pal[i]!='\0')){
		if(pal[i]>='a' && pal[i]<='z'){
			pal[i] -= 32;
	    }i++;

}
printf("Mausculas: %10s", pal);
	return 0;
}
