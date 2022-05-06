
//GUESS A NUMBER SINGLE PLAYER

#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<mmsystem.h>
void main (){

int randomno=29,inp;

printf("guess the no the range is between 1 - 50 \n");
printf("enter the no\n");
scanf("%d",&inp);

if (inp == randomno){
    printf(" Congrats the you guessed right no\n");
   Beep(2000,1500);
}

else if(inp>=35 && inp<= 50){
    printf(" the no is not this big lol\n");
}

else if (inp>=1 && inp<= 19){
     printf(" the no is not this small lol\n");

}
else if (inp>=20 && inp<= 35){
     printf(" YOU ARE TOO CLOSE  AGAIN GIVE IT A TRY\n");

}
else{
    printf(" the range is between 1- 50 \n");
}
getch();

}