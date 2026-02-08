#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MIN 100
#define MAX 200

int randomAtoB(int A, int B) {
	return A+rand()%(B-A+1);
}

void printAr(int *arr, int hor, int ver);
int searchNum(int *arr, int hor, int ver, int target);
//because array can't like, directly be passed, I just passed it as a pointer, since A[][] is a pointer anyways


int main() {
	srand(time(NULL));
	int M=0,N=0,t=1;
	do {
		printf("array (m,n) size:\t");
		scanf("%d %d", &M, &N);
		while( getchar() != '\n');
		if (2<M && N<20) {
			if (M*N < MAX-MIN+1) t=0;
			else printf("the product must be <=%d, try again\n", MAX-MIN+1);
		} else printf("2<M, N<20, both are numbers, try again\n");	
	} while(!(t==0));
	int A[M][N];
	
	for (int i=0; i<M; i=i+1) {
		for (int j=0; j<N; j=j+1) {
			do
				t = randomAtoB(MIN, MAX);
			while(!(searchNum(&A[0][0], M, N, t)==0));
			A[i][j] = t;
		}
	}
	printAr(&A[0][0], M, N);
}

void printAr(int *arr, int hor, int ver) {
    for (int i = 0; i<hor; i=i+1) {
        for (int j = 0; j<ver; j=j+1) {
            printf("%d\t", *(arr + (i*ver) + j));
        }
        printf("\n");
    }
}

int searchNum(int *arr, int hor, int ver, int target){
	for (int i=0; i<hor * ver; i=i+1) {
		if (*(arr+i)==target) return 1;
	}
	return 0;
}
