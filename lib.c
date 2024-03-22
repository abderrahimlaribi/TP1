#include "lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "display.h"

void next(node_t *current_node, node_t *next_node) {
    current_node->next = next_node;
}
//------------------------------------------------------------------------------------------------------
void double_next(node_t *previous_node, node_t *current_node) {
    previous_node->next = current_node->next;
}
//------------------------------------------------------------------------------------------------------
void value(node_t *current_node , int value){
    current_node -> value = value ;
}
//------------------------------------------------------------------------------------------------------
int ass_val(node_t *head){
    return head->value;
}
//------------------------------------------------------------------------------------------------------
node_t *ass_next (node_t *head){
    return head -> next ;
}
//------------------------------------------------------------------------------------------------------
void allocation (node_t* head){
     head = (node_t*)malloc(sizeof(node_t));
}
//------------------------------------------------------------------------------------------------------
void clear_screen() {
    getchar();
    system(CLEAR_SCREEN);
}
//----------------------------------------------------------------------------------------------------
double measure_execution_time(FunctionPointer function_to_measure, int inputSize, void* param , int *iteration) {
    clock_t start_time, end_time;
    double cpu_time_used;

    start_time = clock();
    function_to_measure(inputSize, iteration);
    end_time = clock();

    cpu_time_used = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;

    return cpu_time_used;
}

//------------------------------------------------------------------------------------------------------------------------
//                                                              QUESTION 1 : 
void get_primes(int num , int *iteration) {
    (*iteration) = 1 ;
    printf("2 ");
    for (int i = 3; i <= num; i+=2) {
        bool is_prime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            (*iteration)++ ;
            printf("%d ", i);
        }
    }
}
//--------------------------------------------------------------------------------------------------------------------------
//                                                           QUESTION 2 :
node_t* searching_for_primes2(int num, int *iteration) {
    node_t* head = NULL;
    node_t* current = NULL;
    printf(" 2 -> ");

    for (int i = 3; i <= num; i += 2) {
        (*iteration)++;
        node_t *new_node = (node_t*)malloc(sizeof(node_t));    
        next(new_node, NULL);
        if (head == NULL) {
            head = new_node;
            current = head;
        } else {
            next(current, new_node);
            current = new_node;
        }
        value(new_node, i); 
    }

    node_t* current_prime = head;
    while (current_prime != NULL) {
        int prime = ass_val(current_prime); 
        node_t* current_node = ass_next(current_prime);
        node_t* previous_node = current_prime;
        while (current_node != NULL) {
            (*iteration)++;
            if (ass_val(current_node) % prime == 0) {
                double_next(previous_node, current_node);
                free(current_node);
                current_node = ass_next(previous_node); 
            } else {
                previous_node = current_node;
                current_node = ass_next(current_node); 
            }
        }
        current_prime = ass_next(current_prime);
    }
    return head;
}
\
//--------------------------------------------------------------------------------
void print_list2(node_t* head , int *iteration) {
    *iteration = 1 ;
    while (head != NULL) {
        (*iteration)++ ;
        printf("%d -> ", head->value);
        head = head->next;
    }
    printf("E .\n");
}
//--------------------------------------------------------------------------------
void free_linked_list(node_t* head , int *iteration) {
    *iteration = 0 ;
    while (head != NULL) {
        (*iteration)++ ;
        node_t* temp = head;
        head = head->next;
        free(temp);
    }
}
//--------------------------------------------------------------------------------
int* search_for_primes_arrays_ver2(int num, int *count , int *iteration) {
    int *primes = (int*)malloc(sizeof(int) * num);
    *count = 0;
    *iteration = 0;
    for (int i = 2; i <= num; i++) {
        bool is_prime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                (*iteration)++ ;
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            (*iteration)++ ;
            primes[(*count)++] = i;
        }
    }
    primes = realloc(primes, sizeof(int) * (*count));
    return primes;
}
//--------------------------------------------------------------------------------
void print_array2(int *arr, int size,int * iteration) {
    (*iteration) = 1 ;
    for (int i = 0; i < size; i++) {
        (*iteration)++ ;
        printf(" %d | ", arr[i]);
    }
    printf("END .\n");
}
//-------------------------------------------------------------------------------
void arrays_functions (int num ,int *itera){
    int count ;
    int iteration1 , iteration2 ;
    int* arr = search_for_primes_arrays_ver2(num, &count , &iteration1);
    print_array2(arr, count,&iteration2);
    free(arr);
    (*itera) = iteration1 + iteration2 ;
}
//----------------------------------------------------------------------------
void lists_functions (int num , int *itera){
    int iteration  , iteration2 , iteration3 ;
    node_t* primes_list = NULL;
    primes_list = searching_for_primes2(num , &iteration);
    print_list2(primes_list,&iteration2);
    free_linked_list(primes_list,&iteration3);
    (*itera) = iteration + iteration2 + iteration3 ;
}
//----------------------------------------------------------------------------------------------------------------------------
//                                               QUESTION 3 : 
double measure_execution_time_ranged(FunctionPoint function_to_measure, int first, int end, int *iteration) {
    clock_t start_time, end_time;
    double cpu_time_used;

    start_time = clock();
    function_to_measure(first, end, &iteration);
    end_time = clock();

    cpu_time_used = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;

    return cpu_time_used;
}

//------------------------------------------------------------------------------------------------------
void delete_by_position(node_t** head, int position, int *iteration) {
    (*iteration) = 0;
    if (position == 0) {
        (*iteration)++;
        node_t* temp = *head;
        *head = ass_next(*head);
        free(temp);
        return;
    }

    node_t* current = *head;
    node_t* prev = NULL;
    int i = 0;
    while (current != NULL && i < position) {
        (*iteration)++;
        prev = current;
        current = ass_next(current);
        i++;
    }

    if (current != NULL) {
        double_next(prev, current);
        free(current);
    }
}

//-------------------------------------------------------------------------------------------------
node_t* generate_primes_in_range(int first, int end, int *iteration) {
    (*iteration) = 0;
    if (first > end || first < 2) {
        printf("Invalid range.\n");
        return NULL;
    }
    node_t* head = NULL;
    node_t* current = NULL;
    if (first == 3) {
        (*iteration)++;
        printf("3 -> ");
    }
    if (first == 2) {
        (*iteration)++;
        node_t* new_node = (node_t*)malloc(sizeof(node_t));
        value(new_node, 2);
        next(new_node, NULL);
        head = new_node;
        current = new_node;
        printf("2 -> ");
        first = 3;
    }
    for (int i = 3; i <= end; i += 2) {
        (*iteration)++;
        node_t* new_node = (node_t*)malloc(sizeof(node_t));
        value(new_node, i);
        next(new_node, NULL);
        if (head == NULL) {
            head = new_node;
            current = head;
        } else {
            next(current, new_node);
            current = new_node;
        }
    }

//------------------------------------------------------------------------------------------------------------
    node_t* current_prime = head;
while (current_prime != NULL) {
    int prime = ass_val(current_prime);
    node_t* current_node = ass_next(current_prime);
    node_t* previous_node = current_prime;
    while (current_node != NULL) {
        (*iteration)++;
        if (ass_val(current_node) % prime == 0) {
            double_next(previous_node, current_node);
            free(current_node);
            current_node = ass_next(previous_node);
        } else {
            previous_node = current_node;
            current_node = ass_next(current_node);
        }
    }
    current_prime = ass_next(current_prime);
}
int iterati;
delete_by_position(&head, 0, &iterati);
(*iteration) += iterati;
return head;
}
//----------------------------------------------------------------------------------------------------------------
void print_list_in_range(node_t* head, int first, int end, int *iteration) {
    (*iteration) = 1;
    if (head == NULL) {
        (*iteration) = 1;
        printf("No prime numbers in the specified range.\n");
        return;
    }
    while (head != NULL && ass_val(head) < first) {
        head = ass_next(head);
    }
    while (head != NULL && ass_val(head) <= end) {
        (*iteration)++;
        printf("%d -> ", ass_val(head));
        head = ass_next(head);
    }
    printf("E .\n");
}

//------------------------------------------------------------------------------------------------------------
void range (int first , int end , int *iteration){
    node_t* head;
    int iteration1 , iteration2 , iteration3 ;
    head = generate_primes_in_range(first, end ,&iteration1);
    if (head != NULL) {
        print_list_in_range(head, first, end ,&iteration2);
        free_linked_list(head,&iteration3);
    }
    (*iteration) =iteration1 + iteration2 + iteration3 ;
}
//---------------------------------------------------------------------------------------------------------------
//                                         QUESTION 4 :
void push_for_lists(node_t **head, int num, int *iteration) {
    (*iteration) = 0;
    node_t *new_node = (node_t *)malloc(sizeof(node_t));
    value(new_node, num);
    next(new_node, NULL);
    if (*head == NULL) {
        (*iteration)++;
        *head = new_node;
    } else { 
        node_t *tmp = *head;
        while (ass_next(tmp) != NULL) {
            (*iteration)++;
            tmp = ass_next(tmp);
        }
        next(tmp, new_node);
    }
}

//--------------------------------------------------------------------------------------------------------------
void print_primes(node_t *head , int * iteration) {
    (*iteration) = 0 ;
    while (head != NULL) {
        printf("%d", head->value);
        (*iteration)++ ;
        if (head->next != NULL) {
            printf(" * ");
        }
        head = head->next;
    }
    printf(" .\n");
}
//---------------------------------------------------------------------------------------------------------------
void prime_factorisation(int num, node_t **head, int *iteration) {
    int i = 2;
    (*iteration) = 1;
    int itera, itera2;
    if (num == 1){
        push_for_lists(head, 1, &itera);
        (*iteration)++;
    }
    while (num > 1) {
        if (num % i == 0) {
            (*iteration)++;
            push_for_lists(head, i, &itera2);
            num /= i;
        } else {
            i++;
        }
    }
}

//------------------------------------------------------------------------------------------------------------
void free_list(node_t *head , int *iteration) {
    node_t *current = head;
    node_t *next;
    (*iteration) = 0 ;
    while (current != NULL) {
        (*iteration)++ ;
        next = current->next;
        free(current);
        current = next;
    }
}
//-------------------------------------------------------------------------------------------------------------
void factorization (int num , int *iteration){
    node_t *head = NULL; 
    int iteration1 , iteration2 , iteration3 ;
    for (int i = 1; i <= num; i++) {
        head = NULL;
        printf("Prime factorization for %d = ", i);
        prime_factorisation(i, &head , &iteration1);
        print_primes(head , &iteration2);
        free_list(head , &iteration3);
    }
    (*iteration)  = iteration1 + iteration2 + iteration3 ;

}
//------------------------------------------------------------------------------------------------------------------------------
//                                                   QUESTION 5:
void value_a(node_l *node, int a) {
    node->a = a;
}
//--------------------------------------------------------------------------------------------------------------------------------
void value_b(node_l *node, int b) {
    node->b = b;
}
//--------------------------------------------------------------------------------------------------------------------------------
void next_l(node_l *node, node_l *next) {
    node->next = next;
}
//--------------------------------------------------------------------------------------------------------------------------------
node_l* ass_next_l(node_l *node) {
    return node->next;
}
//------------------------------------------------------------------------------------------------------------------------------
int GCD(int a, int b , int * iteration) {
    (*iteration) = 0 ;
    while (b != 0) {
        (*iteration)++ ;
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
//----------------------------------------------------------------------------------------------------------------------------------------
void printCoprimes(int num , int *iteration ) {
    (*iteration) = 0 ;
    int itera ;
    for (int i = 1; i < num; i++) {
        for (int j = i + 1; j < num; j++) {
            if (GCD(i, j , &itera) == 1) {
                (*iteration)++ ;
                printf("(%d,%d)   ", i, j);
            }
        }
    }
     (*iteration)+=itera ;
}
//----------------------------------------------------------------------------------------------------------------------------------------
void co_push_for_lists(node_l **head, int a, int b, int *iteration) {
    (*iteration) = 0;
    int itera;
    node_l *new_node = (node_l *)malloc(sizeof(node_l));
    value_a(new_node, a);
    value_b(new_node, b);
    next_l(new_node, NULL);
    if (*head == NULL) {
        *head = new_node;
    } else {
        node_l *tmp = *head;
        while (ass_next_l(tmp) != NULL) {
            (*iteration)++;
            tmp = ass_next_l(tmp);
        }
        next_l(tmp, new_node);
    }
}
//----------------------------------------------------------------------------------------------------------------------------------------
void co_free_list(node_l *head, int *iteration) {
    (*iteration) = 0;
    node_l *current = head;
    node_l *next;
    while (current != NULL) {
        (*iteration)++;
        next = ass_next_l(current);
        free(current);
        current = next;
    }
}
//----------------------------------------------------------------------------------------------------------------------------------------
void print_list_coprimes(node_l *head, int *iteration) {
    (*iteration) = 0;
    while (head != NULL) {
        (*iteration)++;
        printf("(%d,%d) ->  ", head->a, head->b);
        head = ass_next_l(head);
    }
    printf("E");
}
//----------------------------------------------------------------------------------------------------------------------------------------
void coprime_list(int num, int *iteration) {
    int iteration1 = 0, iteration2, iteration3, itera;
    node_l *head = NULL;
    for (int i = 1; i < num; i++) {
        for (int j = i + 1; j < num; j++) {
            if (GCD(i, j, &itera) == 1) {
                iteration1++;
                co_push_for_lists(&head, i, j, &iteration2);
            }
        }
    }
    print_list_coprimes(head, &iteration2);
    co_free_list(head, &iteration3);
    (*iteration) = iteration1 + iteration2 + iteration3 + itera;
}
//----------------------------------------------------------------------------------------------------------------------------------------
void create_coprime_array(int ***arr, int *count, int num , int * iteration) {
    *count = 0;
    *iteration = 0 ;
    int itera ;
    *arr = (int **)malloc(sizeof(int *) * num *100);

    for (int i = 0; i < num * 100; i++) {
        (*arr)[i] = (int *)malloc(sizeof(int) * 2);
    }
    for (int i = 1; i < num; i++) {
        for (int j = i + 1; j < num; j++) {
            if (GCD(i, j , &itera) == 1) {
                (*arr)[*count][0] = i;
                (*arr)[*count][1] = j;
                (*count)++;
                (*iteration)++ ;
            }
        }
    }
    (*iteration)+=itera ;
}
//----------------------------------------------------------------------------------------------------------------------------------------
void print_array(int **arr, int count , int *iteration) {
    (*iteration) = 1 ;
    for (int i = 0; i < count; i++) {
        (*iteration)++ ;
        printf("(%d,%d) | ", arr[i][0], arr[i][1]);
    }
    printf("END");
}
//---------------------------------------e-------------------------------------------------------------------------------------------------
void free_array(int ***arr, int count , int *iteration) {
    (*iteration)= 1 ;
    for (int i = 0; i < count; i++) {
        (*iteration)++ ;
        free((*arr)[i]);
    }
    free(*arr);
}
//----------------------------------------------------------------------------------------------------------------------------------------
void coprime_array(int num , int * iteration) {
    int **coprimes;
    int count;
    int iteration1 , iteration2 , iteration3 ;
    create_coprime_array(&coprimes, &count, num , &iteration1 );
    print_array(coprimes, count , &iteration2);
    free_array(&coprimes, count , &iteration3);
    (*iteration) = iteration1 + iteration2 + iteration3 ;
}
//---------------------------------------------------------------------------------------------------------------------
size_t size(void (*functiontype)(int, int*), int iteration) {
    return iteration * sizeof(functiontype);
}
//---------------------------------------------------------------------------------------------------------------------
size_t size_range (void (*functiontyperr)(int ,int,int*),int iteration){
        return iteration * sizeof(functiontyperr);
}
//----------------------------------------------------------------------------------------------------------------------
void comparision (double time_taken1 , double time_taken2 , size_t size_taken1 , size_t size_taken2){
    if (time_taken1 > time_taken2 && size_taken1 > size_taken2){
          list_supper ();
    }else if (time_taken1 < time_taken2 && size_taken1 < size_taken2){
          array_supper ();
    }else if (time_taken1 < time_taken2 && size_taken1 > size_taken2){
          list_size_supper ();
    }else if (time_taken1 > time_taken2 && size_taken1 < size_taken2){
          list_time_supper ();
    }else if (time_taken1 > time_taken2 ){
          list_only_supper ();
    }else if (time_taken1 < time_taken2 ){
          array_only_supper ();
    }else if (time_taken1 == time_taken2 && size_taken1 == size_taken2){
          equal();
    }
}
//-----------------------------------------------------------------------------------------------------------------------------