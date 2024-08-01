
#include <stdio.h>
#include "functions.h"
extern struct customer customers[3];
extern int counter;
void Add_new_customer(void)
{
    fflush(stdin);
    printf("please enter the name of customer number %i:",counter+1);
    gets(customers[counter].name);
    printf("please enter the cash of customer number %i:",counter+1);
    scanf("%f",&customers[counter].cash);
    fflush(stdin);
    printf("please enter the type of customer number %i <debit/credit>:",counter+1);
    gets(customers[counter].type);
    printf("please enter the id of customer number %i:",counter+1);
    scanf("%d",&customers[counter].id);
    counter++;
}
void print_customer_data(int id)
{
    int i;
    for(i=0; i<counter; i++)
    {
        if(customers[i].id== id)
        {
            printf("customer name is:%s\n",customers[i].name);
            printf("customer cash is:%f\n",customers[i].cash);
            printf("customer type is:%s\n",customers[i].type);
            printf("customer id is:%i\n",customers[i].id);
            break;
        }

    }
    if(i==counter)
    {
        printf("\nthere is no customer with the inserted id\n");
    }
}
void edit_customer_data(int id)
{
    int i;
    for(i=0; i<counter; i++)
    {
        if(customers[i].id== id)
        {
            fflush(stdin);
            printf("please enter the new name:");
            gets(customers[i].name);
            printf("please enter the new cash :");
            scanf("%f",&customers[i].cash);
            fflush(stdin);
            printf("please enter the new type <debit/credit>:");
            gets(customers[i].type);
            printf("please enter the new id :");
            scanf("%d",&customers[i].id);
        }
    }
}

void cash_transfer(int source_id,int destination_id,float money)
{
    int i;
    for(i=0; i<counter; i++)
    {
        if(customers[i].id== source_id)
        {
            customers[i].cash = customers[i].cash -money;
        }
    }
    for(i=0; i<counter; i++)
    {
        if(customers[i].id== destination_id)
        {
            customers[i].cash = customers[i].cash + money;
        }
    }
}
void delete_customer(int id)
{
    int i;
    for(i=0; i<counter; i++)
    {
        if(customers[i].id== id)
        {
            for(i;i<counter;i++)
            {
                customers[i]=customers[i+1];
            }
            counter--;
        }
    }
}









