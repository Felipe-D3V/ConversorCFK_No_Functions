#include <stdio.h>
//O código foi escrito em inglês com a intenção de aumentar o alcance
int main() {
    int option = -1;
    float input, convert;

    while (option != 0) {
        printf("\n=====================================\n");
        printf("        Temperature Converter\n");
        printf("=====================================\n");
        printf("1: Celsius to Fahrenheit   2: Celsius to Kelvin\n");
        printf("3: Fahrenheit to Celsius   4: Fahrenheit to Kelvin\n");
        printf("5: Kelvin to Celsius       6: Kelvin to Fahrenheit\n");
        printf("0: Exit\n");
        printf("=====================================\n");

        //Função usada para limpar o buffer em caso do usuário digitar uma letra ou simbolo
        printf("Choose an option: ");
        if (scanf("%i", &option) != 1) {
            printf("Invalid input! Please enter a number.\n");
            // limpa o buffer
            while (getchar() != '\n' && getchar() != EOF);
            option = -1; // força continuar no loop
            continue;
        }

        switch (option) {
            case 1:
                printf("Enter temperature in Celsius: ");
                if (scanf("%f", &input) != 1) {
                    printf("Invalid input!\n");
                    while (getchar() != '\n' && getchar() != EOF);
                    break;
                }
                convert = input * 1.8 + 32;
                printf("Result: %.2f °F\n", convert);
                break;

            case 2:
                printf("Enter temperature in Celsius: ");
                if (scanf("%f", &input) != 1) {
                    printf("Invalid input!\n");
                    while (getchar() != '\n' && getchar() != EOF);
                    break;
                }
                convert = input + 273.15;
                printf("Result: %.2f K\n", convert);
                break;

            case 3:
                printf("Enter temperature in Fahrenheit: ");
                if (scanf("%f", &input) != 1) {
                    printf("Invalid input!\n");
                    while (getchar() != '\n' && getchar() != EOF);
                    break;
                }
                convert = (input - 32) / 1.8;
                printf("Result: %.2f °C\n", convert);
                break;

            case 4:
                printf("Enter temperature in Fahrenheit: ");
                if (scanf("%f", &input) != 1) {
                    printf("Invalid input!\n");
                    while (getchar() != '\n' && getchar() != EOF);
                    break;
                }
                convert = (input - 32) / 1.8 + 273.15;
                printf("Result: %.2f K\n", convert);
                break;

            case 5:
                printf("Enter temperature in Kelvin: ");
                if (scanf("%f", &input) != 1) {
                    printf("Invalid input!\n");
                    while (getchar() != '\n' && getchar() != EOF);
                    break;
                }
                convert = input - 273.15;
                printf("Result: %.2f °C\n", convert);
                break;

            case 6:
                printf("Enter temperature in Kelvin: ");
                if (scanf("%f", &input) != 1) {
                    printf("Invalid input!\n");
                    while (getchar() != '\n' && getchar() != EOF);
                    break;
                }
                convert = 1.8 * (input - 273.15) + 32;
                printf("Result: %.2f °F\n", convert);
                break;

            case 0:
                printf("Closing system...\n");
                break;

            default:
                printf("Invalid Option! Try again.\n");
        }
    }

    return 0;
}
