#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int vulfunc(char *str)
{
	char buffer[25];
	strcpy(buffer, str);
	return 1;
}



int main(){
	char str[500];
	FILE *badfile;

	badfile = fopen("badfile","r");
	fread(str, sizeof(char), 400, badfile);
	vulfunc(str);
	printf("Returned properly\n");
	fclose(badfile);
	return 0;

}
