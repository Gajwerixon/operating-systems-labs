#include <stdio.h>
#include <stdlib.h>
#include <lib.h>
#include <minix/callnr.h>

int main(int argc, char *argv[])
{
int pid;
int result;
message msg;

if (argc != 2) {
    printf("Usage: %s <PID>\n", argv[0]);
    return 1;
}

pid = atoi(argv[1]);

msg.m1_i1 = pid;

result = _syscall(MM, GETTREEWIDTH, &msg);

if (result < 0) {
    printf("System call failed: %d\n", result);
    return 1;
}

printf("Subtree width for PID %d: %d\n", pid, msg.m1_i1);

return 0;

}