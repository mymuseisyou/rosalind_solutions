#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int dp[n];
    dp[0] = 1;
    dp[1] = 1;
    
    for(int i=2;i<n;i++){
        dp[i] = dp[i-1] + dp[i-2]*k;
    }
    
    printf("%d", dp[n-1]);
}