#include <stdio.h>

int fac_dp(int x) {
        int arr[100]={1};

        for (int i=1; i<=x; i++) {
                arr[i]=i*arr[i-1];
        }

        return arr[x];
}

int main() {
        int n;
        scanf("%d", &n);
        printf("%d", fac_dp(n));

        return 0;
}