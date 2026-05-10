//统计MOOC证书
//本题要求编写程序，输入N个学生的MOOC成绩，统计优秀、合格证书的数量，以及没有获得证书的数量。学生修读程序设计MOOC，85分及以上获得优秀证书，不到85分但是60分及以上获得合格证书，不到60分则没有证书。
//输入格式 :
//输入在第一行中给出非负整数N，即学生人数。第二行给出N个非负整数，即这N位学生的成绩，其间以空格分隔。
//输出格式 :
//在一行中依次输出优秀证书、合格证书、没有获得证书的数量，中间以空格分隔。请注意，最后一个数字后没有空格。

//#include<stdio.h>
//#include<time.h>

//int main() {
//	//主代码
//	int N, score;
//	printf("请输入学生人数：");
//	scanf_s("%d", &N);
//	printf("请输入学生分数：");
//	
//	int excellent = 0, pass = 0, none = 0;
//
//	if(N < 0) {
//		printf("学生人数不能为负数！");
//		return 0;
//	}else{
//		for (int i = 0; i < N; i++) {
//			scanf_s("%d", &score);
//			if(score >= 85) {
//				excellent++;
//			}
//			else if (score >= 60) {
//				pass++;
//			}
//			else {
//				none++;
//			}
//		}
//	}
//	printf("%d %d %d", excellent, pass, none);
//	return 0;
//}
