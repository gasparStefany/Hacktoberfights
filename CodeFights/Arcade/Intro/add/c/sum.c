#include <stdio.h>
int sum(int a,  int b){
	return a+b;
}//end sum

int main(){
	int a, b, c;
	printf("Digite os numeros: ");
	scanf(" %d", &a);
	scanf(" %d", &b);
	c = sum(a,b);
	printf("O resultado da soma de %i e %i : %i \n ", a,b,c);
	return 0;
}//end main


