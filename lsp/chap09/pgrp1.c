#include <stdio.h>
#include <unistd.h>

main()
{
    int pid, gid;

    printf("[PARENT] PID = %d GID = %d \n", getpid(), getpgrp());

    pid = fork();

    if (pid == 0) {// 자식 프로세스인 경우
        printf("CHILD: PID = %d GID = %d \n", getpid(), getpgrp());
    }
}