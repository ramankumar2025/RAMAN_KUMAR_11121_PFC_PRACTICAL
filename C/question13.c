#include <stdio.h>

int main() {
    int i;

    printf("Demonstrating 'break':\n");
    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            break;  
        }
        printf("%d ", i);
    }

    printf("\n\nDemonstrating 'continue':\n");
    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;  
        }
        printf("%d ", i);
    }

    return 0;
}
