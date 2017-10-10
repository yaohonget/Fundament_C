#include <stdio.h>
#include "header/typedefine.h"

complex add(complex, complex);

int main() {
	complex c1, c2;
	complex resultOfAddC1C2;
	
	printf("please input first complex, split real and image with comma: ");
	scanf("%f,%f", &c1.real, &c1.imag);
	
	printf("please input second complex, split real and image with comma: ");
	scanf("%f,%f", &c2.real, &c2.imag);
	
	resultOfAddC1C2 = add(c1, c2);
	
	printf("the result to add two complexes is: %f,%f", resultOfAddC1C2.real, resultOfAddC1C2.imag);
	
}

complex add(complex c1, complex c2) {
	complex tempComplex;
	tempComplex.real = c1.real + c2.real;
	tempComplex.imag = c1.imag + c2.imag;
	return tempComplex;
}
