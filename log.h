#ifndef WARN_H
#define WARN_H


#ifdef __linux__
    #ifndef _print_func
        #error  Define _print_func macro as an appropriate printing function.
    #else
        #define RED     "\033[0;31m"
        #define YELLOW  "\033[0;33m"
        #define RESET   "\033[0m"
        
        #define log_fatal(msg, ...)  _print_func(RED); _print_func("fatal:\t\t5:\t"); _print_func(RESET); _print_func(msg, __VA_ARGS__)
        #define _log_fatal(msg)  log_fatal("%s\n", msg)

        #define log_warn(msg, ...)  _print_func(YELLOW); _print_func("warning:\t"); _print_func(RESET); _print_func(msg, __VA_ARGS__)
        #define _log_warn_Ln(msg, warnlevel)  log_warn("%d:\t%s\n", warnlevel, msg)
        #define _log_warn_L1(msg)  log_warn("1:\t%s\n", msg)
        #define _log_warn_L2(msg)  log_warn("2:\t%s\n", msg)
        #define _log_warn_L3(msg)  log_warn("3:\t%s\n", msg)
        #define _log_warn_L4(msg)  log_warn("4:\t%s\n", msg)

        #define log(msg, ...)  _print_func("log:\t"); _print_func(msg, __VA_ARGS__)
        #define _log(msg)  log("%s\n", msg)
    #endif
#else
    #ifdef _WIN32
        #ifndef _print_func
            #error Define _print_func macro as an appropriate printing function.
        #else
            #define log_fatal(msg, ...) _print_func("fatal:\t\t5:\t"); _print_func(msg, __VA_ARGS__)
            #define _log_fatal(msg)  log_fatal("%s\n", msg)

            #define log_warn(msg, ...)  _print_func("warning:\t"); _print_func(msg, __VA_ARGS__)
            #define _log_warn_Ln(msg, warnlevel)  log_warn("%d:\t%s\n", warnlevel, msg)
            #define _log_warn_L1(msg)  log_warn("1:\t%s\n", msg)
            #define _log_warn_L2(msg)  log_warn("2:\t%s\n", msg)
            #define _log_warn_L3(msg)  log_warn("3:\t%s\n", msg)
            #define _log_warn_L4(msg)  log_warn("4:\t%s\n", msg)

            #define log(msg, ...)  _print_func("log:\t"); _print_func(msg, __VA_ARGS__)
            #define _log(msg)  log("%s\n", msg)
        #endif
    #endif
#endif

#endif