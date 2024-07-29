//Simple betting game
//jack queen king-computer shuffles these cards.
//Player has to guess the position of queen.
//if he wins, het takes 3*bet
//if he loses, he loses the bet amount
//player has $100 initially
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int cash=100;
void Play(int bet){
    char C[3]={'J','Q','K'};
    printf("Shuffling....\n");
    srand(time(NULL)); //set RN generator
    int i;
    for(i=0;i<5;i++){
        int x= rand() % 3;
        int y= rand() % 3;
        int temp= C[x];
        C[x]=C[y];
        C[y]=temp; //swaps characters
    }
    int playersGuess;
    printf("What is the position of queen -1, 2 or 3?");
    scanf("%d",&playersGuess);
    if(C[playersGuess-1]=='Q'){
        cash+=3*bet;
        printf("You Win! result= \"%c %c %c\" Total Cash= %d\n",C[0],C[1],C[2],cash);
        
    }
    else{
        cash-=bet;
        printf("You Lose! result= \"%c %c %c\" Total Cash= %d\n",C[0],C[1],C[2],cash);
    }
}

int main(){
    int bet;
    while(cash>0){
        printf("What is your bet> $");
        scanf("%d",&bet);
        if(bet==0 || bet >cash)break;
        Play(bet);
    }
}