/*
 * 003calculator.c
 *
 *  Created on: 9 apr 2020
 *      Author: utente
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv){
	int a, b;
	char op;
	int check;
	float result;

	while (1){
		printf("Input (operazioni concesse: +-*/):\n");
		check = scanf("%c %d %d", &op, &a, &b);

		if (check == 3){
			if (op == '+') {result = (float)(a+b);}
			else if (op == '-') {result = (float)(a-b);}
			else if (op == '*') {result = (float)(a*b);}
			else if (op == '/'){result = (float)a/(float)b;}
			else {
				printf("Operazione non riconosciuta!\n");
				scanf("%*s");
				continue;
			}
		}
		else {
			printf("Qualcosa è andato storto!\n");
			scanf("%*s");
			continue;
		}
	printf("Il risultato è: %1.3f\n", result);
	break;
	}
	return 0;
}
