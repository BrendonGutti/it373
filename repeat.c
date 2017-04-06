#include <stdio.h>

int main() {
    int num = 123;
    int sum = 0;
    
    // sum = sum + num;
    // sum = sum + num;
    
    for (int i = 1; i <= 2; i++) {
        sum = sum + num;
    }
    
    printf("%d\n\r", sum);
    
    return 0;
}