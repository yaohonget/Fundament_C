#include <stdio.h>
#include <stdlib.h>

#define FILE_NAME "faust.c1.txt"
#define FILE_PATH "tmp/" FILE_NAME

int main() 
{
	char c[1000];
	FILE* fp;
	
	if((fp = fopen(FILE_PATH, "r")) == NULL) {
		printf("ERROR! Can not read file!");
		exit(1);
	}
	
	fscanf(fp, "%[^\n]", c);
	printf("%s\n", c);
	
	fclose(fp);
	
	exit(0);
	
}
