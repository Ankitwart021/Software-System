// Ankit Kumar
// MT2024021

/*
Write a program to wait for a STDIN for 10 seconds using select. Write a proper print statement to
verify whether the data is available within 10 seconds or not (check in $man 2 select).
*/
#include <stdio.h>
#include <sys/select.h>
#include <sys/types.h>
#include <unistd.h>
#include <time.h>
void main()
{
    struct timeval t;
    fd_set fd;
    FD_SET(0, &fd);
    t.tv_sec = 10;
    t.tv_usec = 0;
    int x = select(1, &fd, NULL, NULL, &t);
    if (x == -1)
    {
        printf("Error has occured");
    }
    else if (x == 0)
    {
        printf("Time out");
    }
    else
    {
        printf("Data entered");
    }
}
