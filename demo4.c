#include <stdio.h>

/* Linux Ctrl + D
 *
 * Windows Ctrl + Z
 *
 */
int main() {
    int c;
    c = getchar();

    while(c != EOF) {

        printf("%d\n", getchar() != EOF);
        printf("%d\n", EOF);
        putchar(c);
        c = getchar();
    }

}
