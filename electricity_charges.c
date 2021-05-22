#include<conio.h>
#include<stdio.h>

void main()
{
  float units, left, total_amt;
  char name[50];  
  clrscr();
  printf(“Enter the customer's name: “);
  scanf(“%s”, &name);
  printf(“Enter the units consumed: “);
  scanf(“%f”, &units);
  if(units<=200)
  {
    amt=units*0.8;
  }
  else if(units>200 && units<=300)
  {
    left=units-200;
    amt=200*0.8+left*0.9;
  }
  else
  {
    left=units-300;
    amt=200*0.8+100*0.9+left*1;
  }
  if(amt>=400)
  {
    total_amt=amt*0.15+100;
  }
  printf(“The total amount is %f”, total_amt);
  else
  {
  total_amt=amt+100;
  printf(“The total amount is %f”, total_amt);
  }
  getch();
}
