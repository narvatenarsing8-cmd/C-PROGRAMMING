#include <stdio.h>

int multiply(int a, int b);

int main() {

    int result;

    result = multiply(5, 4);

    printf("Multiplication = %d", result);

    return 0;
}

int multiply(int a, int b) {

    return a * b;

}
