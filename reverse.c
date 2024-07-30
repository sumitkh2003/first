#include <stdio.h>
#include <string.h>

void stringReverse(char *str) {
    int len = strlen(str);
    char *start = str;
    char *end = str + len - 1;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[] = "Hello, World!";
    printf("Original string: %s\n", str);
    stringReverse(str);
    printf("Reversed string: %s\n", str);
    return 0;
}
