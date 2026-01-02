#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50], str3[50];
    printf("Enter first string: ");
    gets(str1);  
    printf("Enter second string: ");
    gets(str2);
    printf("Length of first string = %lu\n", strlen(str1));
    strcpy(str3, str1);
    printf("Copied string (str3) = %s\n", str3);
    strcat(str1, str2);
    printf("Concatenated string = %s\n", str1);
    int cmp = strcmp(str1, str2);
    if (cmp == 0)
        printf("Strings are equal\n");
    else if (cmp < 0)
        printf("str1 is less than str2\n");
    else
        printf("str1 is greater than str2\n");

    return 0;
}
