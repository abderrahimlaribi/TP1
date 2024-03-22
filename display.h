#ifndef DISPLAY_H
#define DISPLAY_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <windows.h>
#ifdef _WIN32
    #define CLEAR_SCREEN "cls"
#else
    #define CLEAR_SCREEN "clear"
#endif
void welcome ();
void main_inteface();
void Menu ();
void num_use();
void menu2();
void co_prime_menu();
void num_choice();
void static_rep();
void lists_rep();
void arrays_rep();
void range_rep();
void facto_rep();
void enter_first();
void enter_end();
void exiting();
void coprime_text();
void invalid();
void enter_num();
void iteration_num(int iteration);
void time_ta(double time);
void size_ta(size_t size);
void list_supper();
void array_supper();
void list_size_supper();
void list_time_supper();
void no_comp();
void array_only_supper();
void list_only_supper();
void equal();
#endif