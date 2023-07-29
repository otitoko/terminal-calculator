#include <stdio.h>
#include <math.h>
#include <string.h>

void addition(float* number_one, float* number_two, float* result);
void subtraction(float* number_one, float* number_two, float* result);
void multiplication(float* number_one, float* number_two, float* result);
void division(float* number_one, float* number_two, float* result);
int decimalPointCheck(float* result_ptr);

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
	


	switch (operator){
		case 1:
			addition(&first_number,&second_number,&result);
			break;
		case 2:
			subtraction(&first_number, &second_number,&result);
			break;
		case 3:
			multiplication(&first_number, &second_number, &result);
			break;
		case 4:
			division(&first_number,&second_number,&result);
			break;
	}

	printf("%.2f\n",result);
	if(decimalPointCheck(&result)){
		char check;

		printf("The result contained numbers past the second decimal point. Would you like to view the full number? Y/n \n");
		scanf(" %c", &check);

		switch(check){
			case 'y':
				printf("%f",result);
				break;
			case 'n':
				break;
		}
		
	}

	return 0;


}


void addition(float* number_one,float* number_two,float* result){
	*result = *number_one + *number_two;
	

}

void subtraction(float* number_one, float* number_two, float* result){
	*result= *number_one - *number_two;
}

void multiplication(float* number_one,float* number_two, float* result){
	*result=*number_one * *number_two;
}

void division(float* number_one, float* number_two, float* result){
	*result= *number_one / *number_two;
}

int decimalPointCheck(float* result_ptr){
	float quotient = *result_ptr - (int)*result_ptr;

	if (quotient >= .01){
		return 1;
	}
	else{
		return 0;
	}
}

	


