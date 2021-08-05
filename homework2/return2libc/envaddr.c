#include <stdio.h>
int main(){
	char *shell = (char * )getenv( "MYSHELL");
	if(shell)
	{
		printf("value:%s \n" , shell);
		printf( "Address:%x \n", (unsigned int)shell);
	}
	else{
		printf("NOT FOUND!\n");
	}

	return 1;
}
