#include "get_next_line.h"
#include <fcntl.h>

int main(int argc, char **argv)
{
    int fd;
    char *print;

    fd = open(argv[1], O_RDONLY);
    print = get_next_line(fd);
    printf("1st GNL return: %s", print);
    print = get_next_line(fd);
    printf("2nd GNL return: %s", print);
    print = get_next_line(fd);
    printf("3rd GNL return: %s", print);
    print = get_next_line(fd);
    printf("4th GNL return: %s", print);
    print = get_next_line(fd);
    printf("5th GNL return: %s", print);
}