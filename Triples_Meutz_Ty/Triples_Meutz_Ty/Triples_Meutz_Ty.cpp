/*
Ty Meutz
Triples_Meutz_Ty
CIT - 145
10 - 1 - 2018
Calculate the pythagorean triple.
*/


#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>




int main()
{
	int number1;
	int number2;
	int number3;

	int m;
	int n;


	printf("Enter the First Number: ");
	scanf_s("%d", &m);

	printf("Enter the Second Number: ");
	scanf_s("%d", &n);

	m = pow(m, 2);
	n = pow(n, 2);

	number1 = m - n;

	number2 = 2 * (m, n);



	number3 = sqrt(number1 + number2);


	printf("The Answer is %.d", number3);



}



