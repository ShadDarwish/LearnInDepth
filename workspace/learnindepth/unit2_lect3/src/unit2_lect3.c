/*
 ============================================================================
 Name        : unit2_lect3.c
 Author      : Shady
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("C Programming\n"); /* prints !!!Hello World!!! */

	int value, value1, value2;
	float value3, value4, a, b;
	float temp=0.0;
	char chr;

	printf("Enter an Integer: ");
	fflush(stdin), fflush(stdout);
	scanf("%d", &value);
	printf ("You entered: %d", value);
	printf("\n");
	printf("Enter 2 Integers: ");
	fflush(stdin), fflush(stdout);
	scanf("%d", &value1);
	scanf("%d", &value2);
	printf ("Sum: %d", value1+value2);
	printf("\n");
	printf("Enter 2 real numbers: ");
	fflush(stdin), fflush(stdout);
	scanf("%f", &value3);
	scanf("%f", &value4);
	printf ("Product: %f", value3*value4);
	printf("\n");

	printf("Enter a character: ");
	fflush(stdin), fflush(stdout);
	scanf("%c", &chr);
	printf ("ASCII value of %c = %d", chr, chr);
	printf("\n");

	printf("Enter a value: ");
	fflush(stdin), fflush(stdout);
	scanf("%f", &a);
	printf("Enter b value: ");
	fflush(stdin), fflush(stdout);
	scanf("%f", &b);
	temp =a;
	a=b;
	b = temp;
	printf ("After Swaping value of a : %f", a);
	printf("\n");
	printf ("After Swaping value of b : %f", b);
	printf("\n");
	return EXIT_SUCCESS;
}
