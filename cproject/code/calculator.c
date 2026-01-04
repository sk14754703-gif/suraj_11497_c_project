#include <stdio.h>
#include <math.h>

void menu() {
    printf("\n------ Scientific Calculator ------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power\n");
    printf("6. Square Root\n");
    printf("7. Sine\n");
    printf("8. Cosine\n");
    printf("9. Tangent\n");
    printf("10. Logarithm (base 10)\n");
    printf("0. Exit\n");
}

int main() {
    int choice;
    double a, b;

    do {
        menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                printf("Result = %.2lf\n", a + b);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                printf("Result = %.2lf\n", a - b);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                printf("Result = %.2lf\n", a * b);
                break;

            case 4:
                printf("Enter numerator and denominator: ");
                scanf("%lf %lf", &a, &b);
                if (b != 0)
                    printf("Result = %.2lf\n", a / b);
                else
                    printf("Error: Division by zero\n");
                break;

            case 5:
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &a, &b);
                printf("Result = %.2lf\n", pow(a, b));
                break;

            case 6:
                printf("Enter a number: ");
                scanf("%lf", &a);
                if (a >= 0)
                    printf("Result = %.2lf\n", sqrt(a));
                else
                    printf("Error: Invalid input\n");
                break;

            case 7:
                printf("Enter angle in degrees: ");
                scanf("%lf", &a);
                printf("Result = %.2lf\n", sin(a * 3.14159 / 180));
                break;

            case 8:
                printf("Enter angle in degrees: ");
                scanf("%lf", &a);
                printf("Result = %.2lf\n", cos(a * 3.14159 / 180));
                break;

            case 9:
                printf("Enter angle in degrees: ");
                scanf("%lf", &a);
                printf("Result = %.2lf\n", tan(a * 3.14159 / 180));
                break;

            case 10:
                printf("Enter a number: ");
                scanf("%lf", &a);
                if (a > 0)
                    printf("Result = %.2lf\n", log10(a));
                else
                    printf("Error: Invalid input\n");
                break;

            case 0:
                printf("Exiting Calculator...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 0);

    return 0;
}
