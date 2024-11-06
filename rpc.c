#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int game(char you,char comp){
    if(you==comp){
        return -1;
    }
    if(you=='s' && comp=='p'){
        return 0;
    }
    else if(you=='p' && comp=='s'){
        return 1;
    }
    if(you=='s' && comp=='z'){
        return 1;
    }
    else if(you=='z' && comp=='s'){
        return 0;
    }
    if(you=='p' && comp=='z'){
        return 0;
    }
    else if(you=='z' && comp=='p'){
        return 1;
    }
}


int main(){
    int n;
    char you,comp,res;
    srand(time(NULL)); //choose ramdom number everytime
    n=rand() % 100; // used for making num less than 100
    if(n<33){
        comp='s';
    }
    else if(n>33 && n<66){
        comp='p';
    }
    else{
        comp='z';
    }
    printf("\n\t Enter s for STONE , p for PAPER , z for SCISSOR \n");
    scanf("%c",&you);
    res=game(you,comp);
    if(res==-1){
        printf("\n\t Game is draw");

    }
    if(res==1){
        printf("\n\t You are the WINNER");
    }
    else{
        printf("\n\t You lost the game");
    }
    printf("\n\t you choose %c computer choose %c\n",you,comp);
}