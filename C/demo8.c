#include <stdio.h>

#define IN  1
#define OUT 0

/* 1-11
int main() {
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
        
    while ((c = getchar()) != EOF) {
        ++nc;

        if (c == '\n')
            ++nl;

        if (c == '\t' || c == ' ' || c == '\n')
            state = OUT;

        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }

    printf("%d\t%d\t%d\n", nl, nw, nc);
}
*/

int main() {
    
    int c, state;
    state = OUT;

    while((c = getchar()) != EOF) {
        if (c == '\t' || c == ' ' || c == '\n') {
            if (state == IN) {
                putchar('\n');
                state = OUT;
            }
        }

        else if (state == OUT) {
            state = IN;
            putchar(c);
        } 

        else {
            putchar(c);
        }
    }
}
