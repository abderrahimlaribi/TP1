#ifndef LIB_H
#define LIB_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#ifdef _WIN32
    #define CLEAR_SCREEN "cls"
#else
    #define CLEAR_SCREEN "clear"
#endif

struct node {
    int value;
    struct node* next;
};
struct node2 {
    int a;
    int b;
    struct node2 *next;
};
typedef struct node node_t;

typedef struct node2 node_l;

typedef void (*FunctionPointer)(int, void*);

typedef void (*FunctionPoint)(int ,int,void*);
//-------------------------------------------------------------------------------------------------------------------------

void next (node_t *current_node , node_t *next_node);

void double_next(node_t *previous_node, node_t *current_node) ;

void value(node_t *current_node , int value);

int ass_val(node_t *head) ;

node_t *ass_next (node_t *head);

void allocation (node_t *head);

void clear_screen() ;

double measure_execution_time(FunctionPointer function_to_measure, int inputSize, void* param , int *iteration);

void get_primes(int num , int *iteration );

node_t* searching_for_primes2 (int num , int *iteration ) ;

void print_list2(node_t* head , int *iteration) ;

void free_linked_list(node_t* head ,int *iteration) ;

int* search_for_primes_arrays_ver2(int num, int *count , int *iteration) ;

void print_array2(int *arr, int size , int *iteration) ;

void arrays_functions(int num ,int *itera);

void lists_functions(int num , int *itera) ;

double measure_execution_time_ranged(FunctionPoint function_to_measure, int first, int end, int *iteration) ;

void delete_by_position(node_t** head, int position ,int *iteration) ;

node_t* generate_primes_in_range(int first, int end ,int *iteration) ;

void print_list_in_range(node_t* head, int first, int end ,int *iteration) ;

void range (int first , int end ,int *iteration) ;

void push_for_lists(node_t **head, int num , int *iteration) ;

void print_primes(node_t *head , int *iteration) ;

void prime_factorisation(int num, node_t **head , int *iteratoin) ;

void free_list(node_t *head , int *iteration) ;

void factorization (int num , int *iteration);

void value_a(node_l *node, int a);

void value_b(node_l *node, int b);

void next_l(node_l *node, node_l *next);

node_l* ass_next_l(node_l *node);

int GCD(int a, int b , int *iteration) ;

void printCoprimes(int num , int *iteration) ;

void co_push_for_lists(node_l **head, int a, int b , int *iteration) ;

void print_list_coprimes(node_l *head , int *iteration) ;

void co_free_list(node_l *head , int *iteration) ;

void coprime_list(int num , int *iteration) ;

void create_coprime_array(int ***arr, int *count, int num , int *iteration) ;

void print_array(int **arr, int count , int *iteration) ;

void free_array(int ***arr, int count , int *iteration) ;

void coprime_array(int num , int *iteration) ;

size_t size(void (*functiontype)(int, int*), int iteration) ;

size_t size_range (void (*functiontyperr)(int ,int,int*) ,int iteration);

void comparision (double time_taken1 , double time_taken2 , size_t size_taken1 , size_t size_taken2);

//-----------------------------------------------------------------------------------------------------------------------
#endif 