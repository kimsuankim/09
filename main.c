#include <stdio.h>
#include <stdlib.h>

#define N_STUDENT 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int grade[N_STUDENT];
	int i;
	
	printf(" input %d grades:",N_STUDENT);
	
	for(i=0;i<N_STUDENT;i++){
	 
	 scanf("%d", &grade[i]);
	 printf("grade[%i] = %d\n", i, grade[i]);
	}
	 
	 
	return 0;
}
