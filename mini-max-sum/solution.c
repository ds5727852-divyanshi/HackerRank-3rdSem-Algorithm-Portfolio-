#include <stdio.h>

int main() {
    long long arr[5];
    long long sum = 0;
    long long min = 0, max = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%lld", &arr[i]);
        sum += arr[i];
    }

    min = max = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] < min)
            min = arr[i];

        if (arr[i] > max)
            max = arr[i];
    }

    printf("%lld %lld\n", sum - max, sum - min);

    return 0;
}
