#include<stdio.h>
#include<stdlib.h>
FILE *fo;
int main()
{
	fo=fopen("output.txt","w");
	fprintf(fo,"Hello World!");
	return 0;
}
