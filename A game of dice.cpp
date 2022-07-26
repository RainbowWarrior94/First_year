// Author: Anastasiya Kruhlik
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void First_Player (int dice1, int dice2, int &deposit1);
void Second_Player (int dice1, int dice2, int &deposit2);

int main()
{srand(time(0));
 int dice1,dice2,dicesum2,dicesum_temp2;
 int round=0,deposit1=100,deposit2=100;

    cout <<"****A game of dice****"<<endl;
    cout<<"Press Enter to start the game";
    cin.get();

    cout<<endl;
    cout <<"You have 100 $, each win is +20 $, each loss is -30 $."<<endl;
    cout <<"If your first throw is a 7 or 11- YOU WON THE ROUND!"<<endl;
    cout <<"If your first throw is 2, 3, 12 - YOU FAILED THE ROUND!"<<endl;
    cout <<"In all other cases, the sum of the dice becomes your lucky number (points),  "<<endl;
    cout <<"which you must earn in the following attempts to win."<<endl;
    cout <<"You lose if you run out of money or come up with the number 7."<<endl;
    cout<<endl;
    cout <<"                     GOOD LUCK                     "<<endl;

do
{    round++;
    cout<<endl;
    cout<<"                         ROUND "<<round<<endl;
    cout<<endl;
    cout<<"***First player***"<<endl;
    cout<<endl;
    cout<<"First player - roll a dice (press Enter)";
    cin.get();
     First_Player (dice1, dice2, deposit1);

    cout<<endl;
    cout<<"***Second player***"<<endl;
    cout<<endl;
    cout<<"Second player - roll a dice (press Enter)";
    cin.get();
     Second_Player (dice1, dice2, deposit2);}
while (deposit1>0 && deposit2>0 && round<10);

    cout<<endl;
    cout<<"        GAME RESULTS"<<endl;
    cout<<endl;
    cout<<"First player, your final deposit is: "<<deposit1<<" $"<<endl;
    cout<<"Second player, your final deposit is: "<<deposit2<<" $"<<endl;
    cout<<endl;
  if (deposit1>deposit2) { cout<<"*******WINNER: The First Player!*******"<<endl;}
  else
  if (deposit1<deposit2) { cout<<"*******WINNER: The Second Player!*******"<<endl;}
  else
  if (deposit1==deposit2) { cout<<"*******DRAW!*******"<<endl;}
    cout<<endl;
    cout<<"       THANKS FOR THE GAME!"<<endl;
return 0;
}

void First_Player (int dice1, int dice2, int &deposit1)

    {int dicesum1,dicesum_temp1;

     dice1=rand()%6+1;
     dice2=rand()%6+1;
     dicesum1 = dice1+dice2;
    cout <<"First dice             Second dice"<<endl;
    cout<<endl;
    cout <<"     "<<dice1<<"                       "<<dice2<<endl;
    cout <<"        Total points: "<<dicesum1<<endl;

   if ((dicesum1==7) || (dicesum1==11))
     {cout<<endl;
      cout<<"=========YOU WON THE ROUND!========="<<endl;
       deposit1+=20;
      cout<<"First player, your deposit is: "<<deposit1<<" $"<<endl;}
   else
   if ((dicesum1==2) || (dicesum1==3) || (dicesum1==12))
     {cout<<endl;
      cout<<"=========YOU FAILED THE ROUND!========="<<endl;
       deposit1-=30;
      cout<<"First player, your deposit is: "<<deposit1<<" $"<<endl;}

   if ((dicesum1==4) || (dicesum1==5) || (dicesum1==6) || (dicesum1==8) || (dicesum1==9) || (dicesum1==10))
     {cout <<"Your lucky number (points): "<<dicesum1<<". Keep playing and you will win!"<<endl;
      cout <<"   FOR WIN: "<<dicesum1<<", FOR LOOSE: 7!"<<endl;
        do
          {cout<<endl;
           cout<<"To roll the dice again press Enter";
           cin.get();

            dice1=rand()%6+1;
            dice2=rand()%6+1;
            dicesum_temp1 = dice1+dice2;
           cout <<"First dice             Second dice"<<endl;
           cout<<endl;
           cout <<"     "<<dice1<<"                       "<<dice2<<endl;
           cout <<"        Total points: "<<dicesum_temp1<<endl;
             if (dicesum_temp1==7)
               {cout<<endl;
                cout<<"=========YOU FAILED THE ROUND!!========="<<endl;
                 deposit1-=30;
                cout<<"First player, your deposit is: "<<deposit1<<" $"<<endl;}
             else
             if (dicesum1==dicesum_temp1)
               {cout<<endl;
                cout<<"=========YOU WON THE ROUND!========="<<endl;
                 deposit1+=20;
                cout<<"First player, your deposit is: "<<deposit1<<" $"<<endl;}}
        while (dicesum_temp1!=7 && dicesum1!=dicesum_temp1);}
}

void Second_Player (int dice1, int dice2, int &deposit2)

    {int dicesum2,dicesum_temp2;

     dice1=rand()%6+1;
     dice2=rand()%6+1;
     dicesum2 = dice1+dice2;
    cout <<"First dice             Second dice"<<endl;
    cout<<endl;
    cout <<"     "<<dice1<<"                       "<<dice2<<endl;
    cout <<"        Total points: "<<dicesum2<<endl;

   if ((dicesum2==7) || (dicesum2==11))
     {cout<<endl;
      cout<<"=========YOU WON THE ROUND!========="<<endl;
       deposit2+=20;
      cout<<"Second player, your deposit is: "<<deposit2<<" $"<<endl;}
   else
   if ((dicesum2==2) || (dicesum2==3) || (dicesum2==12))
     {cout<<endl;
      cout<<"=========YOU FAILED THE ROUND!========="<<endl;
       deposit2-=30;
      cout<<"Second player, your deposit is: "<<deposit2<<" $"<<endl;}

   if ((dicesum2==4) || (dicesum2==5) || (dicesum2==6) || (dicesum2==8) || (dicesum2==9) || (dicesum2==10))
     {cout <<"Your lucky number (points): "<<dicesum2<<". Keep playing and you will win!"<<endl;
      cout <<"   FOR WIN: "<<dicesum2<<", FOR LOOSE: 7!"<<endl;
        do
          {cout<<endl;
           cout<<"To roll the dice again press Enter";
           cin.get();

            dice1=rand()%6+1;
            dice2=rand()%6+1;
            dicesum_temp2 = dice1+dice2;
           cout <<"First dice             Second dice"<<endl;
           cout<<endl;
           cout <<"     "<<dice1<<"                       "<<dice2<<endl;
           cout <<"        Total points: "<<dicesum_temp2<<endl;
             if (dicesum_temp2==7)
               {cout<<endl;
                cout<<"=========YOU FAILED THE ROUND!!========="<<endl;
                 deposit2-=30;
                cout<<"Second player, your deposit is: "<<deposit2<<" $"<<endl;}
             else
             if (dicesum2==dicesum_temp2)
               {cout<<endl;
                cout<<"=========YOU WON THE ROUND!========="<<endl;
                 deposit2+=20;
                cout<<"Second player, your deposit is: "<<deposit2<<" $"<<endl;}}
        while (dicesum_temp2!=7 && dicesum2!=dicesum_temp2);}
}
