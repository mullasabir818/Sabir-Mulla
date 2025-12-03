#include <stdio.h>  

int main() {
    int num;
    printf("Enter a number");
    scanf("%d",&num);

    if (num >0) {
        printf("The number is positive.\n");
    }
    else if (num<0) {
        printf("The Number is neagative.\n");
    }
    else {
        printf("The Number is Zero.\n");
    }  

    return 0;
}