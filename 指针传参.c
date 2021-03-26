//#include<stdio.h>
//void test(int arr[3][5]) {
//}
//void test(int arr[][5]) {
//}
//void test(int (*arr)[5]) {
//}
//int main() {
//	//char* arr[5];
//	//char*(*pa)[5] = &arr; //数组的地址应该存放到数组里
//	///*pa   是指针变量的名字
//	//*pa   *说明pa 是一个指针
//	//[5]    说明pa指向的那个数组里的元素是5个
//	//char*   char*是元素类型！！说明pa指向的数组元素类型是char**/
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	//int* p = arr;
//	//int i;
//	//for (i = 0; i < 10; i++) {
//	//	printf("%d ",*(p+i));
//	//}
//	int arr[3][5] = {0};
//	test(arr);//二维数组传参  传递的是第一行的首地址
//	return 0;
//}