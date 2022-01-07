#include <stdio.h>

int main() {
    printf("What is your name? ");
    char name[100];
    scanf("%s", name);
    printf("Hello, %s\n", name);
    return 0;
}