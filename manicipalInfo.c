#include <stdio.h>
#include <string.h>

int main() {
    char supplier[100] = "";
    int choice;

    do {
        printf("\n=======================\n");
        printf("MUNICIPAL FINANCIAL MANAGEMENT\n");
        printf("=========================\n");
        printf("1. Add Supplier\n");
        printf("2. Display Supplier\n");
        printf("3. Search Supplier\n");
        printf("4. Show Name Length\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {

        case 1:
            printf("Enter supplier name: ");
            fgets(supplier, sizeof(supplier), stdin);
            supplier[strcspn(supplier, "\n")] = '\0';
            break;

        case 2:
            printf("Supplier: %s\n", supplier);
            break;

        case 3:
            if (strcmp(supplier, "ABC Office Supplies") == 0 ||
                strcmp(supplier, "Namibia Stationery") == 0) {
                printf("Supplier found.\n");
            } else {
                printf("Supplier not found.\n");
            }
            break;

        case 4:
            printf("Name Length: %lu\n", strlen(supplier));
            break;

        case 5:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice.\n");
        }

    } while (choice != 5);

    return 0;
}