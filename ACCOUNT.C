#include<stdio.h>
#include<conio.h>
#include<string.h>
struct account
{
  char name[20];
  int accno;
  int bal;
  int dob;
};
void main()
{
  struct account a[3];
  int i,max,ha,acno,amount,choice,n=1;
  char hname[20],aname[20];
  clrscr();

  for(i=0;i<=2;i++)
  {
    printf("\nEnter Name:-");
    scanf("%s",&a[i].name);
    printf("\nEnter Account no:-");
    scanf("%d",&a[i].accno);
    printf("\nEnetr Balance:-");
    scanf("%d",&a[i].bal);
  }
  max=a[0].bal;
  for(i=0;i<=2;i++)
  {
    if(a[i].bal>max)
    {
     ha=a[i].accno;
     strcpy(hname,a[i].name);
     max=a[i].bal;
     }
   }
 printf("\n**********************ACCOUNT HOLDER INFORMATION*************************");
 printf("\nName \tAccountno \tBalance");
 for(i=0;i<=2;i++)
 {
  printf("\n%s \t%d      \t%d",a[i].name,a[i].accno,a[i].bal);
  printf("\n____________________________________________");
  }

  printf("\n \nAccno=%d   %s has Highest Balance=%d",ha,hname,max);
  do
  {
  printf("\nEnter Accountno:-");
  scanf("%d",&acno);
  printf("\nEnter Name:-");
  scanf("%s",&aname);
  for(i=0;i<=2;i++)
  {
    if(a[i].accno==acno)
    {
     if(strcmp(a[i].name,aname)==0)
     {
      printf("\n*********************Menu************************");
      printf("\n 1.Withdrow\n 2.Deposite\n 3.Exit");
      printf("\nEnter Your Choice");
      scanf("%d",&choice);
      switch(choice)
      {
       case 1:
	      printf("\n Enter Amount for Withdraw:-");
	      scanf("%d",&amount);
	      a[i].bal=a[i].bal-amount;
	      printf("\n Main Balance after Withdraw=%d",a[i].bal);
	      break;

       case 2:
	     printf("\n Enter Amount for Deposite:-");
	     scanf("%d",&amount);
	     a[i].bal=a[i].bal+amount;
	     printf("\n Main Balance after Diposite=%d",a[i].bal);
	     printf("\n Account=%d Name=%s Avaliable Bal=%d",acno,aname,a[i].bal);
	     break;
       default :
		printf("\n Invslid choice");
		break;

	  }
      }
  }
}
n++;
}while(n<=2);
    getch();
}
