#include<stdio.h>
#include<math.h>

int main() {
	int N;
	printf("请输入一个正整数N，3<=N<=7：");
	scanf_s("%d", &N);

	long long start = pow(10, N - 1);
	long long end = pow(10, N ) - 1;
	long long i, temp, sqSum = 0;
	int units;

	printf("%d位的水仙花数有：\n", N);
	for (i = start; i <= end;i++) {
		temp = i;
		sqSum = 0;
		while (temp != 0) {
			units = temp % 10;
			sqSum += pow(units, N);
			temp /= 10;
		}
		if (sqSum == i) {
			printf("%lld \n", i);
		}
	}
	return 0;
}