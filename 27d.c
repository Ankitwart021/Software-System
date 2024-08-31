//  Ankit Kumar
// MT2024021

/*
write a program to execute ls -Rl by the following system calls
d. execv
*/

#include <stdio.h>
#include <unistd.h>
int main()
{
    char *path = "/bin/ls";
    char *argv[] = {path,"-Rl",NULL};
    execv(path, argv);
    return 0;
}
