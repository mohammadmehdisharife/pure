#include <stdio.h>

int main() {
    int c;
    int state = 0;
    
    while((c = getchar()) != EOF) {
        if(state == 0) {
            if(c == '\033') {
                state = 1;
            } else {
                putchar(c);
            }
        } else if(state == 1) {
            if(c == '[') {
                state = 2;
            } else {
                putchar('\033');
                putchar(c);
                state = 0;
            }
        } else if(state == 2) {
            if(c == 'm') {
                state = 0;
            }
        }
    }
    
    return 0;
}
