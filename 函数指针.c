//#include<stdio.h>
//int add(int a, int b) {
//	int c = 0;
//	c = a + b;
//	return c;
//}
//int main() {
//	//数组指针--是指向数组的指针
//	//函数指针--是指向函数的指针
//	int a = 10;
//	int b = 20;
//	//printf("%d\n",add(a, b));
//	int arr[10] = { 0 };
//	//&函数名  和  函数名 都是函数的地址   注意是函数！！！！不是数组！！
//	/*printf("%p", arr);
//	printf("%p", &arr);*/
//	int (*pa)(int x, int y) = add;
//	printf("%d", (*pa)(3, 4));
//
//	return 0;
//
//}