#include<stdio.h>
#include<string.h>

int sum(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main() {
	int a;
	int b;
	char c;
	printf("What do you wanna calculate? \n");
	scanf("%i %s %i", &a, &c, &b);
	// printf("%i %c %i, a, c, b");
	// printf("%i %c %i \n", a, c, b);
	// printf("int a = %i \n", a);
	// printf("int b = %i \n", b);
	// printf("char c = '%c' \n", c);

	switch(c) {
	case '+':
		printf("Sum: %d \n", sum(a, b));
		main();
		break;
	case '-':
		printf("Subtraction: %d \n", subtract(a, b));
		main();
		break;
	case '*':
		printf("Multiplication: %d \n", multiply(a, b));
		main();
		break;
	case '/':
		printf("Division: %d \n", divide(a, b));
		main();
		break;
	default:
		printf("DEFAULTTTTT");
		break;
	}
	
	return 0;

}
int sum(int a, int b) {
	int y;
	y = a + b;
	return(y);
}

int subtract(int a, int b) {
	int y;
	y = a - b;
	return(y);
}

int multiply(int a, int b) {
	int y;
	y = a * b;
	return(y);
}

int divide(int a, int b) {
	int y;
	y = a / b;
	return(y);
}
