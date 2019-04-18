#include <stdio.h>

/* 1-8
int main() {
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;


    char c;

    while ((c = getchar()) != EOF) {
        if (c == ' ')
            n1++;
        if (c == '\t')
            n2++;
        if (c == '\n')
            n3++;
    }

    printf("%d\n%d\n%d\n", n1, n2, n3);
    return 0;
}
*/

/* 1-9
int main() {
    char c;
    int flag = 0;

    while((c = getchar()) != EOF) {
        if (c == ' ') {
            if (flag == 0) {
                putchar(c);
            }
            flag = 1;
        }
       
        else {
            putchar(c);
            flag = 0; 
        }
    }
}
*/

int main() {
    char c;

    while((c = getchar()) != EOF) {
        if (c == '\t')
            printf("\\t");
        
        if (c == '\n')
            printf("\\n");
        
        if (c == '\\')
            printf("\\\\");   
    
        if (c != '\t' || c != '\n' || c != '\\')
           putchar(c); 
    }
}
