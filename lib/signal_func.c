/**
 * @author: Rezvee Rahman
 * @date:   11/05/2024
 * 
 * @details: This C file is part of a shared library. We will use this
 * library to handle signals. This file contains signal handler
 * functions. 
 */

#include <signal.h>
#include <stdio.h>
#include "signal_func.h"

void static fallback_default_action();

/**
 * This function handles a signal based on the signal type that is
 * passed through the function. Prints out messages on how to handle the
 * signal.
 * @param GENERIC_SIGNAL int
 */
void generic_signal_handler(int GENERIC_SIGNAL)
{
        switch (GENERIC_SIGNAL) {
                case SIGSEGV:
                        handle_sigsegv(GENERIC_SIGNAL);
                        break;
                case SIGFPE:
                        handle_sigfpe(GENERIC_SIGNAL);
                        break;
                case SIGTERM:
                        handle_sigterm(GENERIC_SIGNAL);
                        break;
                default:
                        fallback_default_action();
                        break;
        }
}

void handle_sigfpe(int SIGNAL_FPE) {
        printf("We got a Floating point error (arithmetic error).\n");
};

void handle_sigterm(int SIGNAL_TERMINATION) {
        printf("We got a termination signal.\n");
};

void handle_sigsegv(int SIGNAL_SIGSEGV) {
        printf("We got a segmentation fault!\n");
};

void static fallback_default_action() {
        printf("This signal can't be handled by the current implementation.\n");
        printf("Terminating the process.\n");

        raise(SIGKILL);
}