#include <stdio.h>
#include <string.h>

int main() {
    char supplier[100] = "ABC Office Supplies";
    char town[50] = "Windhoek";
    char sentence[200] = "";

    strcat(sentence, supplier);
    strcat(sentence, " operates in ");
    strcat(sentence, town);
    strcat(sentence, ".");

    printf("%s\n", sentence);

    return 0;
}