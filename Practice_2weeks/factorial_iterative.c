#include <stdio.h>
int main() {

        int n;
        scanf("%d", &n);

        int factorial=1;
        for (int i = n; i > 0; i--) {
                factorial*=i;
        }
        printf("%d",factorial);

        return 0;
}