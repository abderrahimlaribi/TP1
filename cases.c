#include "cases.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "display.h"
#include "lib.h"

//------------------------------------------------------------------------------------------------------------
void case1 (){
    int num , iteration ;
    enter_num ();
    scanf("%d", &num);
    clear_screen();
    static_rep();
    get_primes(num,&iteration);
    clear_screen(); 
}
//--------------------------------------------------------------------------------------------------------
 void case2(){  
    int num , iteration ;
     enter_num();
     scanf("%d", &num);
     clear_screen();
     lists_rep();
     lists_functions(num,&iteration);
     clear_screen();
 }
 //--------------------------------------------------------------------------------------------------------
void case3 (){
    int num , iteration ;
    enter_num();
    scanf("%d", &num);
    clear_screen();
    arrays_rep();
    arrays_functions(num,&iteration);
    clear_screen();
}

//-------------------------------------------------------------------------------------------------------
void case4 (){
    int first , end , iteration ;
    enter_first();
    scanf("%d", &first);
    enter_end();
    scanf("%d", &end);
    clear_screen();
    range_rep();
    range(first, end , &iteration);
    clear_screen();
}

void case5 (){
    int num , iteration ;
    enter_num();
    scanf("%d", &num);
    clear_screen();
    facto_rep();
    factorization(num , &iteration);
    clear_screen();
}

void case6 (){
    int num , iteration ;
    enter_num();
    scanf("%d", &num);
    clear_screen();
    coprime_text();
    printCoprimes(num , &iteration);
    clear_screen();
}

void case7 (){
    int num , iteration ;
    enter_num();
    scanf("%d", &num);
    clear_screen();
    coprime_text();
    coprime_list(num , &iteration);
    clear_screen();
}

void case8 (){
    int num , iteration ;
     enter_num ();
     scanf("%d", &num);
     clear_screen();
     coprime_text();
     coprime_array(num , &iteration);
     clear_screen();
}
//-----------------------------------------------------------------------------------------------------------
void case9 (){
    int num , iteration ;
    enter_num();
    scanf("%d", &num);
    clear_screen();
    static_rep();
    FunctionPointer func_pointer = (FunctionPointer)get_primes;
    double time_taken = measure_execution_time(func_pointer, num, NULL,&iteration);
    clear_screen();
    time_ta(time_taken);
    clear_screen();
}

void case10 (double *time_taken1){
    int num , iteration ;
    enter_num();
    scanf("%d", &num);
    clear_screen();
    lists_rep();
    FunctionPointer func_pointer = (FunctionPointer)lists_functions;
    (*time_taken1) = measure_execution_time(func_pointer, num, NULL,&iteration);
    double time_taken11 = *time_taken1 ;
    clear_screen();
    time_ta(time_taken11);
    clear_screen();
}

void case11 (double *time_taken2){
    int num , iteration ;
    enter_num();
    scanf("%d", &num);
    clear_screen();
    arrays_rep();
    FunctionPointer func_pointer = (FunctionPointer)arrays_functions;
    (*time_taken2) = measure_execution_time(func_pointer, num, NULL,&iteration);
    double time_taken12 = *time_taken2 ;
    clear_screen();
    time_ta(time_taken12);
    clear_screen();
}

void case12 (){
    int first , end , iteration ;
    enter_first();
    scanf("%d", &first);
    enter_end();
    scanf("%d", &end);
    clear_screen();
    range_rep();
    FunctionPoint func_pointer = (FunctionPoint)range;
    double time_taken = measure_execution_time_ranged(func_pointer, first, end,&iteration);
    clear_screen();
    time_ta(time_taken);
    clear_screen();
}

void case13 (){
    int num , iteration ;
    enter_num();
    scanf("%d", &num);
    clear_screen();
    facto_rep();
    FunctionPointer func_pointer1 = (FunctionPointer)factorization;
    double time_takenn = measure_execution_time(func_pointer1, num, NULL,&iteration);
    clear_screen();
    time_ta(time_takenn);
    clear_screen();
}

void case14 (){
     int num , iteration ;
     enter_num();
     scanf("%d", &num);
     clear_screen();
     coprime_text();
     FunctionPointer func_pointer1 = (FunctionPointer)printCoprimes;
     double time_taken = measure_execution_time(func_pointer1, num, NULL,&iteration);
     clear_screen();
     time_ta(time_taken);
     clear_screen();
}

void case15 (){
    int num , iteration ;
    enter_num();
    scanf("%d", &num);
    clear_screen();
    coprime_text();
    FunctionPointer func_pointer2 = (FunctionPointer)coprime_list;
    double time_takenn = measure_execution_time(func_pointer2, num, NULL,&iteration);
    clear_screen();
    time_ta(time_takenn);
    clear_screen();
}

void case16 (){
    int num , iteration ;
    enter_num();
    scanf("%d", &num);
    clear_screen();
    coprime_text();
    FunctionPointer func_pointer3 = (FunctionPointer)coprime_array;
    double time_takennn = measure_execution_time(func_pointer3, num, NULL,&iteration);
    clear_screen();
    time_ta(time_takennn);
    clear_screen();
}
//----------------------------------------------------------------------------------------
void case17 (){
    int num , iteration ;
    enter_num();
    scanf("%d", &num);
    clear_screen();
    static_rep();
    get_primes(num,&iteration);
    clear_screen();
    iteration_num(iteration);
    clear_screen();
}

void case18 (){
    int num , iteration ;
    enter_num();
    scanf("%d", &num);
    clear_screen();
    lists_rep();
    lists_functions(num,&iteration);
    clear_screen ();
    iteration_num (iteration);
    clear_screen();
}

void case19 (){
    int num , iteration ;
    enter_num();
    scanf("%d", &num);
    clear_screen();
    arrays_rep();
    arrays_functions(num,&iteration);
    clear_screen();
    iteration_num (iteration);
    clear_screen();
}

void case20 (){
    int first , end , iteration ;
    enter_first();
    scanf("%d", &first);
    enter_end();
    scanf("%d", &end);
    clear_screen();
    range_rep();
    range(first, end , &iteration);
    clear_screen();
    iteration_num (iteration) ;
    clear_screen();
}

void case21 (){
    int num , iteration ;
    enter_num();
    scanf("%d", &num);
    clear_screen();
    facto_rep();
    factorization(num , &iteration);
    clear_screen();
    iteration_num(iteration);
    clear_screen();
}

void case22 (){
    int num , iteration ;
    enter_num();
    scanf("%d", &num);
    clear_screen();
    coprime_text();
    printCoprimes(num , &iteration);
    clear_screen();
    iteration_num(iteration);
    clear_screen();
}

void case23 (){
    int num , iteration ;
    enter_num();
    scanf("%d", &num);
    clear_screen();
    coprime_text();
    coprime_list(num , &iteration);
    clear_screen();
    iteration_num(iteration) ;
    clear_screen() ;
}

void case24 (){
    int num , iteration ;
    enter_num();
    scanf("%d", &num);
    clear_screen();
    coprime_text();
    coprime_array(num , &iteration);
    clear_screen();
    iteration_num(iteration) ;
    clear_screen();
}
//----------------------------------------------------------------------------------
void case25 (){
    void (*fun_pointer)(int, int*) ;
    int num , iteration ;
    enter_num();
    scanf("%d", &num);
    clear_screen();
    static_rep();
    FunctionPointer func_pointer = (FunctionPointer)get_primes;
    double time_taken = measure_execution_time(func_pointer, num, NULL,&iteration);
    clear_screen();
    time_ta(time_taken);
    clear_screen();
    iteration_num(iteration) ;
    clear_screen();
    fun_pointer == get_primes ;
    size_t size_taken = size(fun_pointer, iteration); 
    size_ta(size_taken) ;
    clear_screen();
}

void case26 (double *time_taken1 , size_t *size_taken1){
   void (*fun_pointer)(int, int*) ;
   int num , iteration ;
   enter_num();
   scanf("%d", &num);
   clear_screen();
   lists_rep();
   FunctionPointer func_pointer = (FunctionPointer)lists_functions;
   (*time_taken1) = measure_execution_time(func_pointer, num, NULL,&iteration);
   double time_taken11 = *time_taken1 ;
   clear_screen();
   time_ta(time_taken11);
   clear_screen();
   iteration_num(iteration) ;
   clear_screen();
   fun_pointer = lists_functions; 
   (*size_taken1) = size(fun_pointer, iteration);
   size_t size_taken11 = *size_taken1 ;  
   size_ta(size_taken11) ;
   clear_screen();
}

void case27 (double *time_taken2 , size_t *size_taken2){
    void (*fun_pointer)(int, int*) ;
    int num , iteration ;
    enter_num();
    scanf("%d", &num);
    clear_screen();
    arrays_rep();
    FunctionPointer func_pointer = (FunctionPointer)arrays_functions;
    (*time_taken2) = measure_execution_time(func_pointer, num, NULL,&iteration);
    double time_taken12 = *time_taken2 ;
    clear_screen();
    time_ta(time_taken12);
    clear_screen();
    iteration_num(iteration) ;
    clear_screen();
    fun_pointer = arrays_functions; 
    (*size_taken2) = size(fun_pointer, iteration);
    size_t size_taken12 = *size_taken2 ; 
    size_ta(size_taken12) ;
    clear_screen();
}

void case28 (){
     void (*fun_pointer1)(int,int,int*) ; 
     int first , end , iteration ;
     enter_first();
     scanf("%d", &first);
     enter_end();
     scanf("%d", &end);
     clear_screen();
     range_rep();
     FunctionPoint func_pointer = (FunctionPoint)range;
     double time_taken = measure_execution_time_ranged(func_pointer, first, end , &iteration);
     clear_screen();
     time_ta(time_taken);
     clear_screen();
     iteration_num(iteration) ;
     clear_screen();
     fun_pointer1 = range; 
     size_t size_taken = size_range (fun_pointer1, iteration); 
     size_ta(size_taken) ;
     clear_screen();
}

void case29 (){
    void (*fun_pointer)(int, int*) ;
    int num , iteration ;      
    enter_num();
    scanf("%d", &num);
    clear_screen();
    facto_rep();
    FunctionPointer func_pointer1 = (FunctionPointer)factorization;
    double time_takenn = measure_execution_time(func_pointer1, num, NULL,&iteration);
    clear_screen();
    time_ta(time_takenn);;
    clear_screen();
    iteration_num(iteration) ;
    clear_screen();
    fun_pointer = factorization; 
    size_t size_taken = size(fun_pointer, iteration); 
    size_ta(size_taken) ;
    clear_screen();
}

void case30 (){
    void (*fun_pointer)(int, int*) ;
    int num , iteration ;
    enter_num();
    scanf("%d", &num);
    clear_screen();
    coprime_text();
    FunctionPointer func_pointer1 = (FunctionPointer)printCoprimes;
    double time_taken = measure_execution_time(func_pointer1, num, NULL,&iteration);
    clear_screen();
    time_ta(time_taken);
    clear_screen();
    iteration_num(iteration) ;
    clear_screen();
    fun_pointer =printCoprimes; 
    size_t size_taken = size(fun_pointer, iteration); 
    size_ta(size_taken) ;
    clear_screen();
}

void case31 (){
    void (*fun_pointer)(int, int*) ;
    int num , iteration ;
    enter_num();
    scanf("%d", &num);
    clear_screen();
    coprime_text();
    FunctionPointer func_pointer2 = (FunctionPointer)coprime_list;
    double time_takenn = measure_execution_time(func_pointer2, num, NULL,&iteration);
    clear_screen();
    time_ta(time_takenn);
    clear_screen();
    iteration_num(iteration) ;
    clear_screen();
    fun_pointer = coprime_list; 
    size_t size_taken = size(fun_pointer, iteration); 
    size_ta(size_taken) ;
    clear_screen();
}

void case32 (){
    void (*fun_pointer)(int, int*) ;
    int num , iteration ;
    enter_num();
    scanf("%d", &num);
    clear_screen();
    coprime_text();
    FunctionPointer func_pointer3 = (FunctionPointer)coprime_array;
    double time_takennn = measure_execution_time(func_pointer3, num, NULL,&iteration);
    clear_screen();
    time_ta(time_takennn);
    clear_screen();
    iteration_num(iteration) ;
    clear_screen();
    fun_pointer = coprime_array; 
    size_t size_taken = size(fun_pointer, iteration); 
    size_ta(size_taken) ;
    clear_screen();
}
//----------------------------------------------------------------------------------------------
void case33 (int num){
    int iteration ;
    static_rep();
    get_primes(num,&iteration);
    clear_screen();
}

void case34 (int num){
    int iteration ;
    lists_rep();
    lists_functions(num,&iteration);
    clear_screen();
}

void case35 (int num){
    int iteration ;
    arrays_rep();
    arrays_functions(num,&iteration);
    clear_screen();
}

void case36 (int num){
     int first , end , iteration ;
     enter_first();
     scanf("%d", &first);
     enter_end();
     scanf("%d", &end);
     clear_screen();
     range_rep();
     range(first, end , &iteration);
     clear_screen();
}

void case37 (int num){
    int iteration ;
    facto_rep();
    factorization(num , &iteration) ;
    clear_screen();
}

void case38 (int num){
    int iteration ;
    coprime_text();
    printCoprimes(num , &iteration);
    clear_screen();
}

void case39 (int num){
   int iteration ;
   coprime_text();
   coprime_list(num , &iteration);
   clear_screen();
}

void case40 (int num){
    int iteration ;
    coprime_text();
    coprime_array(num , &iteration);
    clear_screen();
}
//----------------------------------------------------------------------------------------------------
void case41 (int num){
    int iteration ;
    static_rep ();
    FunctionPointer func_pointer = (FunctionPointer)get_primes;
    double time_taken = measure_execution_time(func_pointer, num, NULL,&iteration);
    clear_screen();
    time_ta(time_taken);
    clear_screen ();
}

void case42 (int num , double *time_taken1){
    int iteration ;
    lists_rep();
    FunctionPointer func_pointer = (FunctionPointer)lists_functions;
    (*time_taken1) = measure_execution_time(func_pointer, num, NULL,&iteration);
    double time_taken11 = *time_taken1 ;
    clear_screen();
    time_ta(time_taken11);
    clear_screen();
}

void case43 (int num , double *time_taken2){
    int iteration ;
    arrays_rep();
    FunctionPointer func_pointer = (FunctionPointer)arrays_functions;
    printf("\n");
    (*time_taken2) = measure_execution_time(func_pointer, num, NULL,&iteration);
    double time_taken12 = *time_taken2 ;
    clear_screen();
    time_ta(time_taken12);
    clear_screen();
}

void case44 (int num){
    int first , end , iteration ;
    enter_first();
    scanf("%d", &first);
    enter_end();
    scanf("%d", &end);
    clear_screen();
    range_rep();
    FunctionPoint func_pointer = (FunctionPoint)range;
    double time_taken = measure_execution_time_ranged(func_pointer, first, end , &iteration);
    clear_screen();
    time_ta(time_taken);
    clear_screen();
}

void case45 (int num){
    int iteration ;
    facto_rep();
    FunctionPointer func_pointer1 = (FunctionPointer)factorization;
    double time_takenn = measure_execution_time(func_pointer1, num, NULL,&iteration);
    clear_screen();
    time_ta(time_takenn);
    clear_screen();
}

void case46 (int num){
    int iteration ;
    coprime_text();
    FunctionPointer func_pointer1 = (FunctionPointer)printCoprimes;
    double time_taken = measure_execution_time(func_pointer1, num, NULL,&iteration);
    clear_screen();
    time_ta(time_taken);
    clear_screen();
}

void case47 (int num){
    int iteration ;
    coprime_text();
    FunctionPointer func_pointer2 = (FunctionPointer)coprime_list;
    double time_takenn = measure_execution_time(func_pointer2, num, NULL,&iteration);
    clear_screen();
    time_ta(time_takenn);
    clear_screen();
}

void case48 (int num){
     int iteration ;
     coprime_text();
     FunctionPointer func_pointer3 = (FunctionPointer)coprime_array;
     double time_takennn = measure_execution_time(func_pointer3, num, NULL,&iteration);
     clear_screen();
     time_ta(time_takennn);
     clear_screen();
}
//------------------------------------------------------------------------------------------
void case49 (int num){
    int iteration ;
    static_rep();
    get_primes(num,&iteration);
    clear_screen();
    iteration_num(iteration);
    clear_screen();
}

void case50 (int num){
    int iteration ;
    lists_rep();
    lists_functions(num,&iteration);
    clear_screen ();
    iteration_num (iteration);
    clear_screen();}

void case51 (int num){
    int iteration ;
    arrays_rep();
    arrays_functions(num,&iteration);
    clear_screen();
    iteration_num (iteration);
    clear_screen();
}

void case52 (int num){
    int first , end , iteration ;
    enter_first();
    scanf("%d", &first);
    enter_end();
    scanf("%d", &end);
    clear_screen();
    range_rep();
    range(first, end , &iteration);
    clear_screen();
    iteration_num (iteration) ;
    clear_screen();
}

void case53 (int num){
    int iteration ;
    facto_rep();
    factorization(num , &iteration);
    clear_screen();
    iteration_num(iteration);
    clear_screen();
}

void case54 (int num){
    int iteration ;
    coprime_text();
    printCoprimes(num , &iteration);
    clear_screen();
    iteration_num(iteration);
    clear_screen();
}

void case55 (int num){
    int iteration ;
    coprime_text();
    coprime_list(num , &iteration);
    clear_screen();
    iteration_num(iteration) ;
    clear_screen() ; 
}

void case56 (int num){
    int iteration ;
    coprime_text();
    coprime_array(num , &iteration);
    clear_screen();
    iteration_num(iteration) ;
    clear_screen();
}
//----------------------------------------------------------------------------------------------------------------------
void case57(int num) {
     void (*fun_pointer)(int, int*) ;
     int iteration ;
     static_rep();
     FunctionPointer func_pointer = (FunctionPointer)get_primes;
     double time_taken = measure_execution_time(func_pointer, num, NULL,&iteration);
     clear_screen();
     time_ta(time_taken);       
     clear_screen();
     iteration_num(iteration) ;
     clear_screen();
     fun_pointer = get_primes; 
     size_t size_taken = size(fun_pointer, iteration); 
     size_ta(size_taken) ;
     clear_screen();
}

void case58(int num , double *time_taken1 , size_t *size_taken1) {
    void (*fun_pointer)(int, int*) ;
    int iteration ;
    lists_rep();
    FunctionPointer func_pointer = (FunctionPointer)lists_functions;
    (*time_taken1) = measure_execution_time(func_pointer, num, NULL,&iteration);
    double time_taken11 = *time_taken1 ;
    clear_screen();
    time_ta(time_taken11) ;
    clear_screen();
    iteration_num(iteration) ;
    clear_screen();
    fun_pointer = lists_functions; 
    (*size_taken1) = size(fun_pointer, iteration); 
    size_t size_taken11 = *size_taken1; 
    size_ta(size_taken11) ;
    clear_screen();
}

void case59(int num ,double *time_taken2 , size_t *size_taken2) {
    void (*fun_pointer)(int, int*) ;
    int iteration ;
    arrays_rep();
    FunctionPointer func_pointer = (FunctionPointer)arrays_functions;
    printf("\n");
    (*time_taken2) = measure_execution_time(func_pointer, num, NULL,&iteration);
    double time_taken12 = *time_taken2 ;
    clear_screen();
    time_ta(time_taken12);
    clear_screen();
    iteration_num(iteration) ;
    clear_screen();
    fun_pointer = arrays_functions; 
    (*size_taken2) = size(fun_pointer, iteration); 
    size_t size_taken12 = *size_taken2 ;
    size_ta(size_taken12) ;
    clear_screen();
}

void case60(int num) {
    void (*fun_pointer1)(int,int,int*) ; 
    int first , end , iteration ;
    enter_first();
    scanf("%d", &first);
    enter_end();
    scanf("%d", &end);
    clear_screen();
    range_rep();
    FunctionPoint func_pointer = (FunctionPoint)range;
    double time_taken = measure_execution_time_ranged(func_pointer, first, end , &iteration);
    clear_screen();
    time_ta(time_taken);
    clear_screen();
    iteration_num(iteration) ;
    clear_screen();
    fun_pointer1 = range ; 
    size_t size_taken = size_range(fun_pointer1, iteration); 
    size_ta(size_taken) ;
    clear_screen();
}

void case61(int num) {
    void (*fun_pointer)(int, int*) ;
    int iteration ;
    facto_rep();
    FunctionPointer func_pointer1 = (FunctionPointer)factorization;
    double time_takenn = measure_execution_time(func_pointer1, num, NULL,&iteration);
    clear_screen();
    time_ta(time_takenn);
    clear_screen();
    iteration_num(iteration) ;
    clear_screen();
    fun_pointer = factorization; 
    size_t size_taken = size(fun_pointer, iteration); 
    size_ta(size_taken) ;
    clear_screen();
}

void case62(int num) {
    void (*fun_pointer)(int, int*) ;
    int iteration ;
    coprime_text();
    FunctionPointer func_pointer1 = (FunctionPointer)printCoprimes;
    double time_taken = measure_execution_time(func_pointer1, num, NULL,&iteration);
    clear_screen();
    time_ta(time_taken);
    clear_screen();
    iteration_num(iteration) ;
    clear_screen();
    fun_pointer = printCoprimes; 
    size_t size_taken = size(fun_pointer, iteration); 
    size_ta(size_taken) ;
    clear_screen();
}

void case63(int num) {
    void (*fun_pointer)(int, int*) ;
    int iteration ;
    coprime_text();
    FunctionPointer func_pointer2 = (FunctionPointer)coprime_list;
    double time_takenn = measure_execution_time(func_pointer2, num, NULL,&iteration);
    clear_screen();
    time_ta(time_takenn);
    clear_screen();
    iteration_num(iteration) ;
    clear_screen();
    fun_pointer = coprime_list; 
    size_t size_taken = size(fun_pointer, iteration); 
    size_ta(size_taken) ;
    clear_screen();
}

void case64(int num) {
    void (*fun_pointer)(int, int*) ;
    int iteration ;
    coprime_text();
    FunctionPointer func_pointer3 = (FunctionPointer)coprime_array;
    double time_takennn = measure_execution_time(func_pointer3, num, NULL,&iteration);
    clear_screen();
    time_ta(time_takennn);
    clear_screen();
    iteration_num(iteration) ;
    clear_screen();
    fun_pointer = coprime_array; 
    size_t size_taken = size(fun_pointer, iteration); 
    size_ta(size_taken) ;
    clear_screen();
}