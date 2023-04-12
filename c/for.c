#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += 2 * i - 1;
    }
    printf("The sum of first %d odd numbers is %d\n", n, sum);
    if (sum == n * n) {
        printf("The formula n^2 is verified for n=%d\n", n);
    } else {
        printf("The formula n^2 is not verified for n=%d\n", n);
    }
    return 0;
}
