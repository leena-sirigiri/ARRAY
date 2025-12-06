#include <stdio.h>

struct Item {
    char name[50];
    float price;
};

int main() {
    struct Item list[50];
    int n = 0, choice;
    float total = 0;

    while (1) {
        printf("\n===== SHOPPING LIST =====\n");
        printf("1. Add Item\n");
        printf("2. Display List\n");
        printf("3. Total Cost\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter item name: ");
            scanf("%s", list[n].name);

            printf("Enter price: ");
            scanf("%f", &list[n].price);

            total += list[n].price;
            n++;

            printf("Item added!\n");
        }

        else if (choice == 2) {
            printf("\n--- Shopping Items ---\n");
            for (int i = 0; i < n; i++) {
                printf("%d. %s - %.2f\n", i + 1, list[i].name, list[i].price);
            }
        }

        else if (choice == 3) {
            printf("Total Cost = %.2f\n", total);
        }

        else if (choice == 4) {
            printf("Exiting...\n");
            break;
        }

        else {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}