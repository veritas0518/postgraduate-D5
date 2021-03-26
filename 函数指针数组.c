//#include<stdio.h>
//int add(int a, int b) {
//	return a + b;
//}
//int min(int a, int b) {
//	return a - b;
//}
//int mul(int a, int b) {
//	return a * b;
//}int div(int a, int b) {
//	return a / b;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	int* arr[4];
//	int (*p)(int, int) = add;
//	int (*prr[4])(int, int) = {add,min,mul,div};//这个是函数指针的数组
//	int i = 0;
//	for (i = 0; i < 4; i++) {
//		printf("%d\n", prr[i](3,4));
//	}
//	return 0;
//
//}