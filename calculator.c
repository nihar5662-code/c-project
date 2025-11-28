#include <stdio.h>

int main() {
    double a, b;
    char op;

    while (1) {
        printf("\nEnter expression (e.g. 4 + 5) or x to exit: ");
        if (scanf(" %c", &op) == 1 && op == 'x') break;
        scanf("%lf %c %lf", &a, &op, &b);

        switch (op) {
            case '+': printf("= %.2lf\n", a + b); break;
            case '-': printf("= %.2lf\n", a - b); break;
            case '*': printf("= %.2lf\n", a * b); break;
            case '/': 
                if (b == 0) printf("Error! Division by zero.\n");
                else printf("= %.2lf\n", a / b);
                break;
            default:
                printf("Invalid operator!\n");
        }
    }

    return 0;
}
