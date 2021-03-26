//#include<stdio.h>
//int main() {
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* p[] = { arr1,arr2 ,arr3 };//存放的是首元素的地址
//	int i;
//	int j;
//		for (i = 0; i < 3; i++) {
//			for (j = 0; j < 5; j++) {
//				printf("%d",*(p[i]+j));				//(p[i] + j)是一个地址需要*来解引用，才能找到每个元素
//
//			}
//			printf("\n");
//		}
//	
//	return 0;
//}