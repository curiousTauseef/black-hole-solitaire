// single_board_main.c
// Copyright (C) 2018 Shlomi Fish <shlomif@cpan.org>
//
// Distributed under terms of the Expat license.
#include "solver_common.h"

int main(int argc, char *argv[])
{
    int arg_idx;
    const bhs_settings settings = parse_cmd_line(argc, argv, &arg_idx);

    char *filename = NULL;
    if (argc > arg_idx)
    {
        if (strcmp(argv[arg_idx], "-"))
        {
            filename = argv[arg_idx];
        }
        ++arg_idx;
    }

    return solve_filename(filename, settings);
}