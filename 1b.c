// Ankit Kumar
// MT2024021
//31-08-24

/*
hard link (link system call)
*/
#include<unistd.h>
#include<stdio.h>
int main(int argc,char *argv[]){
	//hardLink
	int o=link(argv[1],argv[2]);
	if(o==0)
	{	
		printf("HardLink created succesfully\n");
	}
	return 0;
}
