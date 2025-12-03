#include <stdio.h>
int main() {
 int a = 10, b = 3;
 
  printf("Arithmetic Operators:\n");
  printf("a + b = %d\n", a + b);
  printf("a - b = %d\n", a - b);
  printf("a * b = %d\n", a * b);
  printf("a / b = %d\n", a / b);
  printf("a %% b = %d\n\n", a % b);
 
  printf("Relational Operators:\n");
  printf("a == b : %d\n", a == b);
  printf("a != b : %d\n", a != b);
  printf("a > b : %d\n", a > b);
  printf("a < b : %d\n\n", a < b);
 
  printf("Logical Operators:\n");
  printf("(a > b && b > 0) : %d\n", (a > b && b > 0));
  printf("(a > b || b == 0) : %d\n", (a > b || b == 0));
  printf("!(a == b) : %d\n\n", !(a == b));
 
  printf("Assignment Operators:\n");
  int x = a;
  x += b;
  printf("x += b : %d\n", x);
   x -= b;
  printf("x -= b : %d\n", x);
 
  printf("\nIncrement / Decrement:\n");
  printf("a++ = %d\n", a++);
  printf("Now a = %d\n", a);
  printf("--b = %d\n", --b);
  
  return 0;
}