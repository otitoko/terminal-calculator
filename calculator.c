#include <stdio.h>


int main(){
	float first_number;
	float second_number;
	float result;
	int operator;

	printf("Choose your operator: \n");
	printf("1. +\n");
	printf("2. -\n");
	printf("3. *\n");
	printf("4. /\n");

	scanf("%d",&operator);

	printf("Type in the first number:");
	scanf("%f", &first_number);
	printf("\nType in the second number:");
	scanf("%f", &second_number);


	if(operator == 1){
		result = first_number + second_number;
	}

	printf("%f",result);


}

