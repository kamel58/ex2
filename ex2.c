#include <stdio.h>


/*******************
* name: kamel khatib
* ID :213518095
* assignment : ex2.c
 ******************/





int main() {
    int option;

    while (1) {
        // Main menu
        printf("Welcome to our games, please choose an option:\n");
        printf("1. Ducky's Unity Game\n");
        printf("2. The Memory Game\n");
        printf("3. Professor Pat's Power Calculation\n");
        printf("4. The Duck Parade\n");
        printf("5. The Mystery of the Repeated Digits\n");
        printf("6. Good Night Ducks\n");

        scanf("%d", &option);

        /* OPTION 1 - Ducky's Unity Game */
        if (option == 1) {
            int n;
            printf("please enter a positive number:\n");
            scanf("%d", &n);

            while (n <= 0) {
                printf("Invalid number, please try again\n");
                scanf("%d", &n);
            }

            int ones = 0;
            int temp = n;
            while (temp > 0) {
                if (temp % 2 == 1) ones++;
                temp /= 2;
            }

            printf("Ducky earns %d corns\n", ones);
        }

            /* OPTION 2 - The Memory Game */
        else if (option == 2) {
            int n;
            printf("please enter the number of ducks:\n");
            scanf("%d", &n);

            while (n <= 0) {
                printf("Invalid number, please try again\n");
                scanf("%d", &n);
            }

            printf("you entered %d ducks\n", n);

            int mask = 0;  // to store quak/sh
            int quak;
            for (int i = 1; i <= n; i++) {
                printf("duck %d do QUAK? 1 for yes, 0 for no\n", i);
                scanf("%d", &quak);
                while (quak != 0 && quak != 1) {
                    printf("Invalid number, please try again\n");
                    scanf("%d", &quak);
                }

                mask <<= 1;
                if (quak == 1) mask |= 1;
            }

            // Print summary from first to last duck
            for (int i = n - 1; i >= 0; i--) {
                if ((mask >> i) & 1)
                    printf("duck number %d do Quak\n", n - i);
                else
                    printf("duck number %d do Sh...\n", n - i);
            }
        }

            /* OPTION 3 - Professor Pat’s Power Calc */
        else if (option == 3) {
            int num, exp;
            printf("please enter the number\n");
            scanf("%d", &num);
            while (num < 0) {
                printf("Invalid number, please try again\n");
                scanf("%d", &num);
            }

            printf("please enter the exponent\n");
            scanf("%d", &exp);
            while (exp < 0) {
                printf("Invalid number, please try again\n");
                scanf("%d", &exp);
            }

            long long result = 1;
            for (int i = 0; i < exp; i++) {
                result *= num;
            }

            printf("your power is: %lld\n", result);
        }

            /* OPTION 4 - The Duck Parade */
        else if (option == 4) {
            int n;
            printf("please enter number of ducks:\n");
            scanf("%d", &n);
            while (n <= 0) {
                printf("Invalid number, please try again\n");
                scanf("%d", &n);
            }

            int count = 0;
            // Line 1
            for (int i = 0; i < n; i++) {
                if (count == 10) { printf("\n"); count = 0; }
                printf("   _\t\t");
                count++;
            }
            printf("\n");

            count = 0;
            // Line 2
            for (int i = 0; i < n; i++) {
                if (count == 10) { printf("\n"); count = 0; }
                printf("__(o)>\t\t");
                count++;
            }
            printf("\n");

            count = 0;
            // Line 3
            for (int i = 0; i < n; i++) {
                if (count == 10) { printf("\n"); count = 0; }
                printf("\\___)\t\t");
                count++;
            }
            printf("\n");
        }

            /* OPTION 5 - The Mystery of Repeated Digits */
        else if (option == 5) {
            long long num;
            printf("please enter number\n");
            scanf("%lld", &num);
            while (num <= 0) {
                printf("Invalid number, please try again\n");
                scanf("%lld", &num);
            }

            long long temp = num;
            while (temp > 0) {
                int digit = temp % 10;
                long long check = temp / 10;
                while (check > 0 && (check % 10) != digit) {
                    check /= 10;
                }
                if (check > 0) {
                    printf("%d appears more than once!\n", digit);
                }
                temp /= 10;
            }
        }

            /* OPTION 6 - Exit */
        else if (option == 6) {
            printf("Good night! See you at the pond tomorrow.\n");
            break;
        }

        else {
            printf("Invalid option, please try again\n");
        }
    }

    return 0;
}
