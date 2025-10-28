#include <stdio.h>

int fibo_dp(int x) {

        int arr[100] = {0};
        arr[1]=1;

        for (int i=2; i<=x; i++) {
                arr[i]=arr[i-1]+arr[i-2];
        }
        return arr[x];
}

int main() {

        int n;

        scanf("%d", &n);

        printf("%d", fibo_dp(n));

        return 0;

}