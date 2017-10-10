#include <stdio.h>
#include <stdlib.h>

#define FILE_NAME "test_write_file.txt"
#define FILE_PATH "tmp/" FILE_NAME

int main() 
{
	char c[1000];
	char ch;
	FILE* fp;
	
	if((fp = fopen(FILE_PATH, "a+")) == NULL) {
		printf("ERROR! Can not open file!");
		exit(1);
	}
	
	printf("please input text : ");
	fgets(c, (sizeof c / sizeof c[0]), stdin);	
	fprintf(fp,"%s", c);
	
	printf("Your input\n");
	fseek(fp, 0, SEEK_SET);
	do {
		ch = getc(fp);
		putchar(ch);
	}
	while(ch != EOF);
	
	fclose(fp);
	
	exit(0);
	
}