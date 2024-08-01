#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
#define ARRAY_SIZE 5
int counter;
struct customer customers[ARRAY_SIZE];
int main()
{
    while(1)
    {
        int choice=0;
        int id,des_id;
        float money;
        printf("\t\t*******************************\n");
        printf("\t\tcreate anew customer <press 1>\n");
        printf("\t\tedit customer <press 2>\n");
        printf("\t\tdelete customer <press 3>\n");
        printf("\t\tprint customer data <press 4>\n");
        printf("\t\ttransfer money <press 5>\n");
        printf("\t\tExist <press 6>\n\t\t");
        scanf("%i",&choice);
        printf("\t\t*******************************\n\n\n");
        switch(choice)
        {
        case 1:
            if(counter==ARRAY_SIZE)
             {
                 printf("\nthere isn't place in the bank\n ");
             }
             else
             {
                 Add_new_customer();
             }

            break;
        case 2 :
            printf("please enter id of customer who you need to change its data:");
            scanf("%i",&id);
            edit_customer_data(id);
            break;
        case 3 :printf("please enter id of customer who you need to delte its data:");
            scanf("%i",&id);
            delete_customer(id);
            break;
        case 4 :
            printf("please enter customer id:");
            scanf("%i",&id);
            print_customer_data(id);
            break;
        case 5:
            printf("please enter customer id who the money will transfer from his cash:");
            scanf("%i",&id);
            printf("please enter customer id who the money will transfer to his cash:");
            scanf("%i",&des_id);
            fflush(stdin);
            printf("please enter the money you want to be transfered:");
            scanf("%f",&money);
            cash_transfer(id,des_id,money);
            break;
            case 6: goto l;
        }


    }
    l:printf("\n\t\t********\n\t\t*THANKS*\n\t\t******** ");
    return 0;
}
