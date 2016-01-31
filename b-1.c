//kwonseokdjfkddj
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <time.h>

#define item 32000
//sdfwdfasdfsad
int com(const void *a, const void *b){
	int *x = (int *)a;
	int *y = (int *)b;
	if (*x < *y) return -1;
	if (*x == *y) return 0;
	return 1;
}

void main(){
	int *s = (int *)malloc(sizeof(int) * item);
	long t1, t2;

	srand(time(NULL));

	for (int i = 0; i < item; i++)
		s[i] = rand() % 100 + 1;

	t1 = GetTickCount();
	qsort(s, item, sizeof(int), com);
	t2 = GetTickCount();

	printf("걸리는 시간 : %.3f 초 입니다.", (t2 - t1) / (double)CLK_TCK);
	system("pause");

}