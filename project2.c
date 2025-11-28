#include <stdio.h>

void lengthConverter();
void temperatureConverter();
void weightConverter();

int main() {
    int choice;

    while (1) {
        printf("\n==============================\n");
        printf("        UNIT CONVERTER\n");
        printf("==============================\n");
        printf("1. Length Converter\n");
        printf("2. Temperature Converter\n");
        printf("3. Weight Converter\n");
        printf("4. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                lengthConverter();
                break;
            case 2:
                temperatureConverter();
                break;
            case 3:
                weightConverter();
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}

void lengthConverter() {
    int opt;
    float value, result;

    printf("\n--- LENGTH CONVERTER ---\n");
    printf("1. Meters to Kilometers\n");
    printf("2. Kilometers to Meters\n");
    printf("3. Meters to Centimeters\n");
    printf("4. Centimeters to Meters\n");

    printf("\nEnter option: ");
    scanf("%d", &opt);

    printf("Enter value: ");
    scanf("%f", &value);

    switch (opt) {
        case 1:
            result = value / 1000;
            printf("%.2f meters = %.2f kilometers\n", value, result);
            break;
        case 2:
            result = value * 1000;
            printf("%.2f kilometers = %.2f meters\n", value, result);
            break;
        case 3:
            result = value * 100;
            printf("%.2f meters = %.2f centimeters\n", value, result);
            break;
        case 4:
            result = value / 100;
            printf("%.2f centimeters = %.2f meters\n", value, result);
            break;
        default:
            printf("Invalid option!\n");
    }
}

void temperatureConverter() {
    int opt;
    float value, result;

    printf("\n--- TEMPERATURE CONVERTER ---\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");

    printf("\nEnter option: ");
    scanf("%d", &opt);

    printf("Enter value: ");
    scanf("%f", &value);

    switch (opt) {
        case 1:
            result = (value * 9/5) + 32;
            printf("%.2f°C = %.2f°F\n", value, result);
            break;
        case 2:
            result = (value - 32) * 5/9;
            printf("%.2f°F = %.2f°C\n", value, result);
            break;
        default:
            printf("Invalid option!\n");
    }
}

void weightConverter() {
    int opt;
    float value, result;

    printf("\n--- WEIGHT CONVERTER ---\n");
    printf("1. Kilograms to Grams\n");
    printf("2. Grams to Kilograms\n");
    printf("3. Kilograms to Pounds\n");
    printf("4. Pounds to Kilograms\n");

    printf("\nEnter option: ");
    scanf("%d", &opt);

    printf("Enter value: ");
    scanf("%f", &value);

    switch (opt) {
        case 1:
            result = value * 1000;
            printf("%.2f kg = %.2f g\n", value, result);
            break;
        case 2:
            result = value / 1000;
            printf("%.2f g = %.2f kg\n", value, result);
            break;
        case 3:
            result = value * 2.20462;
            printf("%.2f kg = %.2f pounds\n", value, result);
            break;
        case 4:
            result = value / 2.20462;
            printf("%.2f pounds = %.2f kg\n", value, result);
            break;
        default:
            printf("Invalid option!\n");
    }
}
