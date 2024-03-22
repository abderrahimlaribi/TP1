#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <windows.h>
#include "lib.h"
#include "display.h"
#include "cases.h"
int main()
{
    int choice , answer, continu, co ,num ;
    double  time_taken1 , time_taken2;
    size_t size_taken1 , size_taken2 ;
    int innerflag = 1, inerflag = 1, innnerflag = 1 , innnnerflag = 1 , flag = 1;


//--------------------------------------------------------------------------------------------------------------------
    welcome();
    //--------------------------------------------------------------------------------------------------------------------
    while (innnnerflag)
    {
        main_inteface();
        scanf("%d", &continu);            
        clear_screen();
        switch (continu)
        {
            //--------------------------------------------------------------------------------------------------------------------
        case 2:
            exiting();
            innnnerflag = 0;  
            break;
            //--------------------------------------------------------------------------------------------------------------------
        default:
            invalid() ;
            clear_screen();
            break;
             //--------------------------------------------------------------------------------------------------------------------
        case 1:
          while (flag){
            num_use();
            scanf("%d", &answer);
            clear_screen();
            if (answer == 2){
                while (innerflag)
                {
                    menu2();
                    scanf("%d", &co);
                    clear_screen();
                    switch (co){
               //--------------------------------------------------------------------------------------------------------------------   
                    case 1:
                        while (innnerflag)
                        {
                            Menu();
                            scanf("%d", &choice);
                            clear_screen();
                            switch (choice) {
                            case 1:
                                case1() ;
                            break;
                            case 2:
                                case2();
                                break;
                            case 3:
                                case3();
                                break;
                            case 4:
                                case4();
                                break;
                            case 5:
                                case5();
                                break;
                            case 7:
                                no_comp();
                                clear_screen();
                                break;     
                            case 8:
                                innnerflag = 0;
                                break; 
                            case 0:
                                exiting();
                                clear_screen();
                                return 0;   
                            case 6:
                                //--------------------------------------------------------------------------------------------------------------------
                                while (inerflag){
                                    co_prime_menu();
                                    scanf("%d", &co);
                                    clear_screen();
                                    switch (co){
                                    case 1:
                                        case6 ();
                                        break;
                                    case 2:
                                        case7 ();
                                        break;
                                    case 3:
                                        case8();
                                        break;
                                    case 4:
                                        inerflag = 0;
                                        break;
                                    default:
                                        invalid();
                                        clear_screen();
                                        break;
                                       }
                                   }
                                   break;
                                //-----
                            default:
                                invalid();
                                clear_screen();
                                break;
                            }
                        }
                        break ;
                //--------------------------------------------------------------------------------------------------------------------    
                    case 2:
                        while (innnerflag)
                        {
                            Menu();
                            scanf("%d", &choice);
                            clear_screen();
                            switch (choice)
                            {
                            case 1:
                                case9 ();
                                break;
                            case 2:
                                case10(&time_taken1);
                                break;
                            case 3:
                                case11(&time_taken2);
                                break;
                            case 4:
                               case12();
                                break;
                            case 5:
                                case13();
                                break;
                            case 7: 
                                comparision(time_taken1 , time_taken2 ,1 ,1);
                                clear_screen();
                                break;    
                            case 8:
                                innnerflag = 0;
                                break;
                            case 0:
                                exiting();
                                clear_screen();
                                return 0;
                            case 6:
                             //--------------------------------------------------------------------------------------------------------------------
                                while (innerflag)
                                {
                                    co_prime_menu();
                                    scanf("%d", &choice);
                                    clear_screen();
                                    switch (choice){
                                    case 1:
                                       case14();
                                        break;
                                    case 2:
                                        case15();
                                        break;
                                    case 3:
                                        case16();
                                        break;
                                    case 4:
                                        innerflag = 0;
                                        break;
                                    default:
                                        invalid();
                                        clear_screen();
                                        break;
                                    }
                                }
                                break;
                            default:
                                invalid();
                                clear_screen();
                                break;
                            }
                        }
                        break;
                    //----------------------------------------------------------------------------------------------------------------------------
                    case 3 : 
                       while (innnerflag)
                        {
                            Menu();
                            scanf("%d", &choice);
                            clear_screen ();
                            switch (choice)
                            {
                            case 1:
                                case17();
                                break;
                            case 2:
                                case18();
                                break;
                            case 3:
                                case19();
                                break;
                            case 4:
                                case20();
                                break;
                            case 5:
                                case21();
                                break;
                            case 7:
                                no_comp();
                                clear_screen();
                                break;    
                            case 8:
                                innnerflag = 0;
                                break;
                            case 0:
                                exiting();
                                clear_screen();
                                return 0;
                            case 6:
                                //--------------------------------------------------------------------------------------------------------------------
                                while (inerflag)
                                {
                                    co_prime_menu();
                                    scanf("%d", &co);
                                    clear_screen();
                                    switch (co)
                                    {
                                    case 1:
                                        case22();
                                        break;
                                    case 2:
                                        case23(); 
                                        break;
                                    case 3:
                                        case24();
                                        break;
                                    case 4:
                                        inerflag = 0;
                                        break;
                                    default:
                                        invalid();
                                        clear_screen();
                                        break;
                                    }
                                }
                                break;
                            default:
                                invalid();
                                clear_screen();
                                break;
                            }
                        }
                       break;
                    //----------------------------------------------------------------------------------------------------------------------------    
                     case 4 : 
                        while (innnerflag)
                        {
                            Menu();
                            scanf("%d", &choice);
                            clear_screen ();
                            switch (choice){
                             case 1:
                                case25();
                                break;
                            case 2:
                                case26(&time_taken1 , &size_taken1);
                                break;
                            case 3:
                                case27(&time_taken2 , &size_taken2);
                                break;
                            case 4:
                                case28();
                                break;
                            case 5:
                                case29();
                                break;
                            case 7:
                                comparision(time_taken1,time_taken2,size_taken1,size_taken2);
                                clear_screen();
                                break;    
                            case 8:
                                innnerflag = 0;
                                break;
                            case 0:
                                exiting();
                                clear_screen();
                                return 0;
                            case 6:
                             //--------------------------------------------------------------------------------------------------------------------
                                while (innerflag)
                                {
                                    co_prime_menu();
                                    scanf("%d", &choice);
                                    clear_screen();
                                    switch (choice)
                                    {
                                    case 1:
                                        case30();
                                        break;
                                    case 2:
                                        case31();
                                        break;
                                    case 3:
                                        case32();
                                        break;
                                    case 4:
                                        innerflag = 0;
                                        break;
                                    default:
                                        invalid();
                                        clear_screen();
                                        break;
                                    }
                                }
                                break;
                            default:
                                invalid();
                                clear_screen();
                                break;
                            }
                        }
                        break;     
                    //----------------------------------------------------------------------------------------------------------------------------
                    case 0 :
                        exiting();
                        clear_screen();
                        return 0;   
                    default:
                        invalid();
                        clear_screen();
                        break;
                     case 5: 
                        innerflag = 0 ;
                        break;  
                    }
                }
                break;
            }
 //--------------------------------------------------------------------------------------------------------------------------------------------
            else if (answer == 1)
            {
              while (innerflag)
                {
                    num_choice();
                    scanf ("%d",&num);
                    clear_screen();
                    menu2();
                    scanf("%d", &co);
                    clear_screen();
                    switch (co)
                    {
               //--------------------------------------------------------------------------------------------------------------------   
                    case 1:
                        while (innnerflag)
                        {
                            Menu();
                            scanf("%d", &choice);
                            clear_screen ();
                            switch (choice)
                            {
                            case 1:
                                case33(num);
                                break;
                            case 2:
                                case34(num);
                                break;
                            case 3:
                                case35(num);
                                break;
                            case 4:
                               case36(num);
                                break;
                            case 5:
                                case37(num);
                                break;
                            case 7:
                                no_comp();
                                clear_screen();
                                break;
                            case 8:
                                innnerflag = 0;
                                break;
                            case 0:
                                exiting();
                                clear_screen();
                                return 0;
                            case 6:
                                //--------------------------------------------------------------------------------------------------------------------
                                while (inerflag)
                                {
                                    co_prime_menu();
                                    scanf("%d", &co);
                                    clear_screen();
                                    switch (co)
                                    {
                                    case 1:
                                        case38(num);
                                        break;
                                    case 2:
                                        case39(num);
                                        break;
                                    case 3:
                                        case40(num); 
                                        break;
                                    case 4:
                                        inerflag = 0;
                                        break;
                                    default:
                                        invalid();
                                        clear_screen();
                                        break;
                                    }
                                }
                                break;
                            default:
                                invalid();
                                clear_screen();
                                break;
                            }
                        }
                    break;
                //--------------------------------------------------------------------------------------------------------------------    
                    case 2:
                        while (innnerflag)
                        {
                            Menu();
                            scanf("%d", &choice);
                            clear_screen();
                            switch (choice){
                            case 1:
                                case41(num);
                                break;
                            case 2:
                                case42(num , &time_taken1);
                                break;
                            case 3:
                                case43(num , &time_taken2);
                                break;
                            case 4:
                                case44(num);
                                break;
                            case 5:
                                case45(num);
                                break;
                            case 7:
                                comparision(time_taken1,time_taken2,1,1);
                                clear_screen();
                                break;
                            case 8:
                                innnerflag = 0;
                                break;
                            case 0:
                                exiting ();
                                clear_screen();
                                return 0;    
                            case 6:
                             //--------------------------------------------------------------------------------------------------------------------
                                while (innerflag)
                                {
                                    co_prime_menu();
                                    scanf("%d", &choice);
                                    clear_screen();
                                    switch (choice)
                                    {
                                    case 1:
                                        case46(num);
                                        break;
                                    case 2:
                                        case47(num);
                                        break;
                                    case 3:
                                        case48(num);
                                        break;
                                    case 4:
                                        innerflag = 0;
                                        break;
                                    default:
                                       invalid();
                                       clear_screen();
                                        break;
                                    }
                                }
                                break;
                            default:
                                invalid();
                                clear_screen();
                                break;
                            }
                        }
                    break;
    //----------------------------------------------------------------------------------------------------
                     case 3 : 
                       while (innnerflag)
                        {
                            Menu();
                            scanf("%d", &choice);
                            clear_screen ();
                            switch (choice)
                            {
                            case 1:
                                case49(num);
                                break;
                            case 2:
                                case50(num);
                                break;
                            case 3:
                                case51(num);
                                break;
                            case 4:
                                case52(num);
                                break;
                            case 5:
                                case53(num);
                                break;
                            case 7:
                                no_comp();
                                clear_screen();
                                break;     
                            case 8:
                                innnerflag = 0;
                                break;
                            case 0:
                                exiting();
                                clear_screen();
                                return 0;
                            case 6:
                                //--------------------------------------------------------------------------------------------------------------------
                                while (inerflag)
                                {
                                    co_prime_menu();
                                    scanf("%d", &co);
                                    clear_screen();
                                    switch (co)
                                    {
                                    case 1:
                                        case54(num);
                                        break;
                                    case 2:
                                        case55(num);
                                        break;
                                    case 3:
                                        case56(num);
                                        break;
                                    case 4:
                                        inerflag = 0;
                                        break;
                                    default:
                                        invalid();
                                        clear_screen();
                                        break;
                                    }
                                }
                                break;
                            default:
                                invalid();
                                clear_screen();
                                break;
                            }
                        }
                    break;
    //---------------------------------------------------------------------------------------------------
                     case 4 : 
                         while (innnerflag)
                        {
                            Menu();
                            scanf("%d", &choice);
                            clear_screen ();
                            switch (choice)
                            {case 1:
                                case57(num);
                                break;
                            case 2:
                                case58(num , &time_taken1 , &size_taken1);
                                break;
                            case 3:
                                case59(num , &time_taken2 , &size_taken2);
                                break;
                            case 4:
                                case60(num);
                                break;
                            case 5:
                                case61(num);
                                break;
                            case 7:
                                comparision(time_taken1 , time_taken2 ,size_taken1 , size_taken2);
                                clear_screen();
                                break;    
                            case 8:
                                innnerflag = 0;
                                break;
                            case 0:
                                exiting();
                                clear_screen();
                                return 0;
                            case 6:
                             //--------------------------------------------------------------------------------------------------------------------
                                while (innerflag)
                                {
                                    co_prime_menu();
                                    scanf("%d", &choice);
                                    clear_screen();
                                    switch (choice)
                                    {
                                    case 1:
                                        case62(num);
                                        break;
                                    case 2:
                                        case63(num);
                                        break;
                                    case 3:
                                        case64(num);
                                        break;
                                    case 4:
                                        innerflag = 0;
                                        break;
                                    default:
                                        invalid();
                                        clear_screen();
                                        break;
                                    }
                                }
                                break;
                            default:
                                invalid();
                                clear_screen();
                                break;
                            }
                        }
                        break;                                   
    //---------------------------------------------------------------------------------------------------
                     case 0 :
                        exiting();
                        clear_screen();
                        return 0;    
                    default:
                         invalid();
                         clear_screen();
                        break;
                    }
                }
            }
        }
        break ;
    }
    return 0;
}
}
//----------------------------------------------------END----------------------------------------------------------