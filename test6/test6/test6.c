#include <stdio.h>
int main()
{
	int i = 0;
	int arr[10] = { 1,87,3,4,9,6,98,8,9,10 };
	int sum;
	sum = 0;
	for (i = 0; i < 10; i++) 
	{
		sum = sum + arr[i];
	}
	printf("Sum of array is %d.", sum);
	return 0;
}
//#include <stdio.h>
//
//int main() {
//    int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//    int sum, loop;
//
//    sum = 0;
//
//    for (loop = 9; loop >= 0; loop--) {
//        sum = sum + array[loop];
//    }
//
//    printf("Sum of array is %d.", sum);
//
//    return 0;
//}
