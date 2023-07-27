#include <stdio.h>

int main() {
    char a[] = "Hello, world!";
    char *p = a;
    printf("a[2] = %d\n", *(p+2));
    return 0;
}
