#include<stdio.h>
#include<math.h>

/*水仙花数是指一个N位正整数（N≥3），它的每个位上的数字的N次幂之和等于它本身。例如：153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3。 本题要求编写程序, 计算所有N位水仙花数。

输入格式 :
输入在一行中给出一个正整数N（3≤N≤7）。

输出格式 :
按递增顺序输出所有N位水仙花数，每个数字占一行。*/

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