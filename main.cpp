/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;


int main()
{
    int Psc=0, Csc=0, r=1, p=2, s=3, i, choice;
    printf("Rock=1, Paper=2, Scissor=3\n");
    
    for(i=0; i<2; i++){
    
     for(i=0;i<3;i++){
        printf("Enter your choice:");
        scanf("%d",&choice);
            int computer=rand()%3+1;
            if(choice==1){
                if(computer==1){
                    printf("Draw\n");
                }
                if(computer==2){
                    printf("Computer Wins!\n");
                    Csc= Csc + 1;
                }
                if(computer==3){
                    printf("Player Wins\n");
                    Psc = Psc + 1;
                }
                clrscr();
               
            }
              else  if(choice==2){
                    if(computer==2){
                        printf("Draw\n");
                    }
                    if(computer==3){
                        printf("Player Wins!\n");
                        Psc = Psc + 1;
                    }
                    if(computer==1){
                        printf("Computer Wins!\n");
                        Csc = Csc + 1;
                    }
                
                clrscr();
              }
                else if(choice==3){
                    if(computer==3){
                        printf("Draw\n");
                    }
                    if(computer==2){
                        printf("Computer Wins!\n");
                        Csc = Csc + 1;
                    }
                    if(computer==1){
                        printf("Player Wins!\n");
                        Psc = Psc + 1;

                    }
                clrscr();   
                }
        else{
            printf("Wrong Answer\n");
        }

            }
            if(Csc > Psc ){
                printf("Computer wins %d to %d\n",Csc,Psc);
               
            }
            else if(Csc < Psc ){
                printf("Player wins %d to %d\n",Psc,Csc);
                
            }
           else if(Csc = Psc ){
                printf("No winner it is a draw!\n");
            }
       
    }
    
    return 0;
    
    
}

