/**
 * @author: Rezvee Rahman
 * @date:   11/05/2024
 * 
 * @details: This C file is part of a shared library. We will use this
 * library to handle signals. This file contains signal handler
 * functions. 
 */

void generic_signal_handler(int GENERIC_SIGNAL);

void handle_sigfpe(int SIGNAL_FPE);

void handle_sigterm(int SIGNAL_TERMINATION);

void handle_sigsegv(int SIGNAL_SIGSEGV);