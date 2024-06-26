#include <stdio.h>
int main() {
    int integer = 123;
    char character = 'c';
    char string[] = "hello, world";
    int* pointer = &integer;
    double pi = 3.141592;
    char buf[100];

    sprintf(buf, "integer : (decimal) %d (octal) %o \n", integer, integer);
    printf("%s \n", buf);

    sprintf(buf, "character : %c \n", character);
    printf("%s \n", buf);

    sprintf(buf, "string : %s \n", string);
    printf("%s \n", buf);

    sprintf(buf, "pointer addr : %p \n", pointer);
    printf("%s \n", buf);

    sprintf(buf, "floating point : %e // %f \n", pi, pi);
    printf("%s \n", buf);

    sprintf(buf, "percent symbol : %% \n");
    printf("%s \n", buf);

    return 0;
}