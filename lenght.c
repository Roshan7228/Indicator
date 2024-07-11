#include<stdio.h>
#include<conio.h>

int main() {
    char *str = "Roshan";

    char *ptr = str;

    while (*ptr != '\0') {
        ptr++;
    }

    int length = ptr - str;

    printf("The length of the string \"%s\" is %d.\n", str, length);

    getch();
}

