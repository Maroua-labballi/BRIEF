#include <stdio.h>
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
 
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
 
    printf("Factorial of %d is %d", n, result);
}
