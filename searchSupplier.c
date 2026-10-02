#include <stdio.h>
#include <string.h>

int main() {
    char supplier[100];

    printf("Enter supplier name to search: ");
    fgets(supplier, sizeof(supplier), stdin);

    supplier[strcspn(supplier, "\n")] = '\0';

    if (strcmp(supplier, "ABC Office Supplies") == 0 ||
        strcmp(supplier, "Namibia Stationery") == 0) {
        printf("Supplier found.\n");
    } else {
        printf("Supplier not found.\n");
    }

    return 0;
}