#include <stdio.h>
int main() {

        int n;
        scanf("%d",&n);
        int fibo;
        for (int i=2; i<=n; i++) {
                static int fibo_2=0;
                static int fibo_1=1;
                fibo = fibo_1+fibo_2;
                fibo_2 = fibo_1;
                fibo_1 = fibo;
        }

        if (n==0) fibo=0;
        else if (n==1) fibo=1;

        printf("%d", fibo);

        return 0;
}