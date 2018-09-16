#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int quantity,date;
    char Name,pos;
    struct node *next;
}node;
typedef struct head
{
    node *start;
}head;

void search(head *t, char Name)
{

}

void add(head *t,char Name,int quantity,int date,int pos)
{

}

void addToCart(head *m,char Name,int n)
{

}

void invoice(head *m)
{

}

void stockinfo(head *t)
{

}

void main()
{
    head x,y;
    node t;
    int ch,quantity,date,n;
    char Name,pos;

while(1)
{
    printf("Enter your choice\n");
    printf("1.Search 2.Add to stock 3.Add to cart 4 Generate Invoice 5.Overall stock info 6.exit");
    scanf("%d",&ch);
    if(ch==6)
        break;
    else
        switch(ch)
    {
        case 1:printf("Enter the medicine Name:\n");
               gets(Name);
               search(&x,Name); //search will display position of that particular medicine in the shop,price and stock available,expiry
               break;

        case 2:printf("Enter medicine name to add\n");
               gets(Name);
               printf("Quantity to be added\n");
               scanf("%d",&quantity);
               printf("Enter Expiry date of the new stock\n");
               printf("DD MM YYYY\n");
               scanf("%d",&date);
               printf("Place to store in the shop\n");
               scanf("%s",&pos);
               add(&x,Name,quantity,date,pos);//for adding the medicine to the stock
               break;

        case 3:printf("Enter Medicine to add to the cart\n");
               scanf("%s",&Name);
               printf("Enter quantity\n");
               scanf("%d",n);
               if(n>quantity)
                printf("Low on available Quantity\n");
               else
               addToCart(&y,Name,n);
               break;

        case 4:invoice(&y);
                break;

        case 5:stockinfo(&x);
                break;

        default:printf("Invalid choice\n");
                break;

    }
}
}

