#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello World";
    int len = strlen(str);
    int i = len - 1;

    printf("Reversed using while loop: ");
    while (i >= 0) {
        printf("%c", str[i]);
        i--;
    }
    printf("\n");

    return 0;
}
