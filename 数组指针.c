//#include<stdio.h>
//int main() {
//	int* p = NULL; //整形指针，赋空值以免成为野指针  可以存放整形的地址，注意是地址！！！
//	char* pc = NULL;//字符指针
//	//int arr[10] = { 0 }   数组名arr是首元素的地址
//	//&arr[0]               这也是首元素地址
//	//&arr                   这是数组的地址
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9, };
//	int(*p)[10] = &arr;//数组的地址要存起来
//	//这个p就是数组指针
//	return 0;
//}