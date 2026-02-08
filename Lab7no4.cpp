#include <stdio.h>

void printHead(int w);
void printBody(int w, int h);

int main() {
	int width,height;
	scanf("%d %d", &width, &height);
	printHead(width);
	printBody(width,height);
	printHead(width);
}

void printHead(int w) {
	for (int i=0; i<w; i=i+1) {
		printf("*");
		(i==w-1)? printf("\n"):printf(" ");
	}
}

void printBody(int w, int h) {
	for (int j=0; j<h-2; j=j+1) {
		printf("* ");
		for (int i=0; i<w-2; i=i+1) printf("  ");
		printf("*\n");
	}
}



