/**
 * @author: Rezvee Rahman
 * @date: 11/05/2024
 * 
 * @details: This function intentionally is designed to crash. We want
 * to test some of the signals. There is alternative way to test
 * signals, but for now we are doing a simple program.
 */

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include "../lib/signal_func.h"

int main(void) {
        signal(SIGSEGV, generic_signal_handler);
        /* We wil allocate space for an int array */
        int test_arr[8];
        
        printf("Welcome to signal handler demonstration.\n");
        printf("I will be doing some basic signal handing ");
        printf("(e.g. SIGSEGV - segmentation fault");
        printf(" & SIGINT - signal interrupt).\n");
        printf("Press Enter to continue: ");
        printf("\n");

        test_arr[-1] = 9;
        // raise(SIGINT);

        return (EXIT_SUCCESS);
}