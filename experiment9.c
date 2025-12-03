#include <stdio.h>

void greet() {
 printf("Hello! Welcome to C Functions.\n");
}

void displaySum(int a, int b) {
 printf("Sum = %d\n", a + b);
}

int giveNumber() {
 return 10;
}

int multiply(int x, int y) {
 return x * y;
}
int main() {
 int result;

 greet();
 
 displaySum(5, 7);
 
 result = giveNumber();
 printf("Number returned = %d\n", result);
  
 result = multiply(4, 6);
 printf("Multiplication = %d\n", result);
 return 0;
}