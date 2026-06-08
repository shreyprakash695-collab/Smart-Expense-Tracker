#include <stdio.h>
#include <string.h>
struct Expense {
    char category[50];
    float amount;
};
int main() {
    struct Expense expenses[100];
    int count = 0;
    int choice;
    float total = 0;

    while (1) {
        printf("\n===== SMART EXPENSE TRACKER =====\n");
        printf("1. Add Expense\n");
        printf("2. View Expenses\n");
        printf("3. Show Total Expense\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Expense Category: ");
                scanf("%s", expenses[count].category);

                printf("Enter Amount: ");
                scanf("%f", &expenses[count].amount);

                total += expenses[count].amount;
                count++;

                printf("Expense Added Successfully!\n");
                break;

            case 2:
                if (count == 0) {
                    printf("No expenses recorded.\n");
                } else {
                    printf("\n--- Expense List ---\n");
                    for (int i = 0; i < count; i++) {
                        printf("%d. Category: %s | Amount: ₹%.2f\n",
                               i + 1,
                               expenses[i].category,
                               expenses[i].amount);
                    }
                }
                break;

            case 3:
                printf("\nTotal Expense: ₹%.2f\n", total);
                break;

            case 4:
                printf("Thank you for using Smart Expense Tracker!\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}