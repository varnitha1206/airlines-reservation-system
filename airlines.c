#include <stdio.h>
#include<stdlib.h>

int main()
{
  printf("PHOENIX  AIRLINES\n\n");
  int business_class[10]={1,2,3,4,5,6,7,8,9,10};
  int economy_class[10]={11,12,13,14,15,16,17,18,19,20};
  int choice,l,p,r,total_seats_b=0,total_seats_e=0,am,ak,bm,bk,age;
  char c;
  char name[20];
  char dob[20];
  printf("Please fill in the following details:\n");
  printf("Name:\n");
  gets(name);
  printf("Age:\n");
  scanf("%d",&age);
  printf("Date of birth:\n");
  getchar();
  gets(dob);
  star: //label for goto statement
  printf("\n\nSelect\n\n1. Business Class\n2. Economy Class\n3. Exit\n\n");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1: {
      printf("Seats available in business class are:\n(Seats marked with 0 are already taken)\n");
      int i;
      for(i=0;i<10;i++)
      {
        printf("%d\t",business_class[i]);
      }
      int no_of_seats;
      printf("\nEnter the number of seats you want to book\n");
      scanf("%d",&no_of_seats);
      ak=1;
      for(am=0;am<10;am++)
      {
        if(business_class[am]!=0)
        {
          ak++;
        }
      }
      if(ak-1>=no_of_seats)
      {
      if(no_of_seats<=10)
      {
      int n=0,a;
      l=0;
      r=0;
      while(n<no_of_seats)
      {
        printf("Enter the %d seat number\n",n+1);
        scanf("%d",&a);
        n++;
        if(a>=1&&a<=10)
        {
          if (business_class[a-1]==0)
          {
            printf("Seat %d is taken\n",a);
            l++;

          }
          else
          {
            business_class[a-1]=0;
          }
        }
        else
        {
          printf("invalid seat\n");
          r++;
        }
      }
      total_seats_b=total_seats_b+no_of_seats;

      printf("The price of a business class ticket:Rs 5000\n");
      int price;
      float gst;
      price= (no_of_seats-l-r)*5000;
      printf("Gst=5 %%\n");
      gst=(5*price)/100;
      float total;
      total=price+gst;
      printf("The actual price is: Rs%d\ntotal= actual price + Rs %f gst= Rs %f \n",price,gst,total);
      int u;
      int cancel_seats_b;
      int r=0,d=0;
      int seat_number_b;
      printf("\nDo you want to CANCEL any of your booked seats ?\n(press 1 to CANCEL seats and any other integer  to continue)\n\n)");
      scanf("%d",&u);
      if(u==1)
      {
        printf("Enter the number of seats you want to cancel:\n");
        scanf("%d",&cancel_seats_b);
        if(cancel_seats_b<=total_seats_b)
        {
        while(r<cancel_seats_b)
        {

          printf("Enter the %d seat number to be cancelled\n",(r+1));
          scanf("%d",&seat_number_b);
          if(business_class[seat_number_b-1]!=0)
          {
            printf("Cannot be cancelled\n");
            d++;

          }

          r++;
          business_class[seat_number_b-1]=seat_number_b;
        }
        int price_after_cancel;
        float gst_airb;
        price_after_cancel=(cancel_seats_b-d)*5000;
        gst_airb=(5*price_after_cancel)/100;
        float total_air;
        total=total-(price_after_cancel+gst_airb);
        printf("\nThe actual price after cancellation of seats:Rs %d\nTotal=Actual price + Rs %f gst=Rs %f\n",price_after_cancel,gst_airb,total);
        total_seats_b=total_seats_b-cancel_seats_b;
      }
      else
      {
        printf("Cancellation Failed\n");
      }
    }
  }
  else
  {
    printf("%d Seats not available\n",no_of_seats);
    goto star;
  }
}
else
{
  printf("\n%d Seats not available\n",no_of_seats);
}
  }
      break;


    case 2: {
      printf("Seats available in economy class are:\n(Seats marked with 0 are already taken)\n");
      int j;
      for(j=0;j<10;j++)
      {
        printf("%d\t",economy_class[j]);
      }
      int no_of_seats_e;
      printf("\nEnter the number of seats you want to book\n");
      scanf("%d",&no_of_seats_e);
      bk=1;
      int c=0,s;
      int m=0,p=0;
      for(bm=0;bm<10;bm++)
      {
        if(economy_class[bm]!=0)
        {
          bk++;
        }
      }
      if(bk-1>=no_of_seats_e)
      {
      if(no_of_seats_e<=10)
      {

      while(c<no_of_seats_e)
      {
        printf("Enter the %d seat number\n",c+1);
        scanf("%d",&s);
        c++;
        if(s>=11 && s<=20)
        {
          if (economy_class[(s-10)-1]==0)
          {
            printf("Seat %d is taken\n",s);
            m++;

          }
          else
          {
            economy_class[(s-10)-1]=0;
          }
        }
        else
        {
          printf("invalid seat\n");
          p++;
        }
      }
      total_seats_e=total_seats_e+no_of_seats_e;

      printf("The price of a economy class ticket:Rs 2500\n");
      int price1;
      float gst1;
      price1= (no_of_seats_e-m-p)*2500;
      printf("Gst=5 %%\n");
      gst1=(5*price1)/100;
      float total1;
      total1=price1+gst1;
      printf("The actual price is: Rs%d\ntotal= actual price + Rs %f gst= Rs %f \n",price1,gst1,total1);
      int t;
      int cancel_seats_e;
      int b=0,f=0;
      int seat_number_e;
      printf("\nDo you want to CANCEL any of your booked seats ?\n(press 1 to CANCEL seats and any other integer  to continue)\n\n)");
      scanf("%d",&t);
      if(t==1)
      {
        printf("Enter the number of seats you want to cancel:\n");
        scanf("%d",&cancel_seats_e);
        if(cancel_seats_e<=total_seats_e)
        {
        while(p<cancel_seats_e)
        {

          printf("Enter the %d seat number to be cancelled\n",(p+1));
          scanf("%d",&seat_number_e);
          if(economy_class[(seat_number_e-10)-1]!=0)
          {
            printf("Cannot be cancelled\n");
            f++;

          }

          p++;
          economy_class[seat_number_e-1]=seat_number_e;
        }
        int price_after_cancel1;
        float gst_aire;
        price_after_cancel1=(cancel_seats_e-f)*2500;
        gst_aire=(5*price_after_cancel1)/100;
        float total_air1;
        total1=total1-(price_after_cancel1+gst_aire);
        printf("\nThe actual price after cancellation of seats:Rs %d\nTotal=Actual price + Rs %f gst=Rs %f\n",price_after_cancel1,gst_aire,total1);
        total_seats_e=total_seats_e-cancel_seats_e;
      }
      else
      {
        printf("Cancellation Failed\n");
      }
    }
  }
else
{
  printf("%d Seats not available\n",no_of_seats_e);
  goto star;
}
}
else
{
  printf("\n%d Seats not available\n",no_of_seats_e);
  goto star;
}
}

   break;


    case 3: exit(0);
    default: printf("Invalid input\n");
  }

  printf("Do you want to continue?\n(press Y to continue and N to exit)\n");
  scanf("%s",&c);
  if(c=='Y')
  {
    goto star;
  }
  if(c=='N')
  {
    printf("Thank you!\nHave a safe flight!");
  }

  return 0;
}
