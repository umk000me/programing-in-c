#include<stdio.h>
#include<conio.h>
int noc=0,nor=0,nob=0,amount=0,count=0;
//noc=number of car/rikshaw/bike
void car()
{
printf("\n Entry Successful");
noc++;
amount=amount+100;
count++;
}
void rikshaw()
{
printf("\nEntry successful");
nor++;
amount=amount+70;
count++;
}
void bike()
{
printf("\nEntry successful");
nob++;
amount=amount+50;
count++;
}
void status()
{
printf("\nNumber of car/jeep=%d",noc);
printf("\nNumber of rikshaw=%d",nor);
printf("\nNumber of bike=%d",nob);
printf("\nTotal number of vehicles=%d",count);
printf("\nTotal amount=%d",amount);
}
void clear()
{
noc=0;
nor=0;
nob=0;
amount=0;
count=0;
printf("\nData cleared successfully");
}
int menu()
{
int ch;
printf("\n\n\n1.Enter car/jeep");
printf("\n2.Enter rikshaw");
printf("\n3.Enter bike");
printf("\n4.Check status");
printf("\n5.clear data");
printf("\n6.exit");
printf("\Enter your choice:");
scanf("%d",&ch);
return(ch);
}
int main()
{
while(1)
{
switch(menu())
{
case 1:
car();
break;
case 2:
rikshaw();
break;
case 3:
bike();
break;
case 4:
status();
break;
case 5:
clear();
break;
case 6:
exit(0);

default:
printf("\nThis number of vehicle is not exist");
}
}
getch();
}