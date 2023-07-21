#include <stdio.h>

#define _print_func printf
#include "log.h"

int main(int argc, char** argv)
{
    if (argc == 1) {
        _log_fatal("No input files.");
        return 1;
    }

    log("input file: %s\n", argv[1]);
    
    return 0;
}