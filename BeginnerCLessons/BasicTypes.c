/*
 * BasicTypes.c
 *
 *  Created on: Nov 7, 2013
 *      Author: Tristan
 *
 *  Just a demo of the basic data types in the C language.
 */

#include <stdio.h>
#include <string.h>

int j = 5, k = 4;
float pi = 3.14f;
double d = 8.5;
char name[] = "Username";

int main(){
	printf("Here are some of the basic types and functions that are used in C.\n");
	printf("Integer addition: %d\n Integer subtraction: %d\n Integer division: %d\n Integer multiplication: %d\n",
			j+k, j-k, j/k, j*k);
	printf("A float is slightly less precise than a double variable and should be declared as 'float name = (value)f\n");
	printf("Our variable pi is a float. %f\n", pi);
	/*The format string %g represents a double value*/
	printf("A double variable is more precise than a float. Our variable d is a double. %g\n", d);
	printf("In C, a string is just an array of characters, which means we can access each character individually.\n");
	printf("This is our string: %s\n", name);
	printf("We can also print the same string by using a for loop.\n");
	int i;
	for(i = 0; i < strlen(name); i++){
		printf("%c",name[i]);
	}
	printf("\n");

	return 0;
}
