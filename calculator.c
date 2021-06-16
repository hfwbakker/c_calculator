#include <stdio.h>


int multiply(int num1, int num2);
int sum(int num1, int num2);
int subtract(int num1, int num2);
int divide(int num1, int num2);

int main() {
	printf("Hello this is the calculator.\n");

	int a, b;
	char choice;
	char sentence[100];

	printf("Input sentence\n");
	scanf("%[^\n]s", sentence);
	printf("%s\n", sentence);

	printf("Enter two numbers:\n");
	scanf("%d %d", &a, &b);
	
	printf("Make a choice:\n");
	scanf(" %c", &choice);
	
	switch(choice) {
	case '*':
		printf("Multiplication: %d\n", multiply(a, b));	
		break;
	case '+':
		printf("Sum: %d\n", sum(a, b));
		break;
	case '-':	
		printf("Subtraction: %d\n", subtract(a, b));
		break;
	case '/':
		printf("Division: %d\n", divide(a, b));
		break;
	default:
		printf("Not an existing choice dumb shit");
		break;
	}	

	/*printf("Sum: %d\n", a+b);*/

	return 0;
}

int multiply(int num1, int num2) {
	int y;
	y = num1 * num2;
	return(y);
}

int sum(int num1, int num2) {
	int y;
	y = num1 + num2;
	return(y);
}

int subtract(int num1, int num2) {
	int y;
	y = num1 - num2;
	return(y);
}

int divide(int num1, int num2) {
	int y;
	y = num1 + num2;
	return(y);
}




