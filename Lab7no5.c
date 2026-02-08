#include <stdio.h>

long convert(long h, long m, long s); 

void timePrint(char s[], long time) {
	printf(s,time); (time!=1)? printf("s"):0;
}

int main() {
	long hours, minutes, seconds;
	do {
		printf("Enter time HH:MM:SS\t;\n");
		scanf("%ld:%ld:%ld", &hours, &minutes, &seconds);
		while ( getchar()!='\n');
	} while(!(0 <= hours && 0<=minutes && minutes<60 && 0<=seconds && seconds<60));
	
	timePrint("\n%ld hour", hours);
	timePrint(", %ld minute", minutes);
	timePrint(", %ld second", seconds);
	printf(" is equal to:\n");
	timePrint("%ld second", convert(hours, minutes, seconds));
	return 0;
}

long convert(long h, long m, long s) {
	return ((h*60)+m)*60+s;
}


