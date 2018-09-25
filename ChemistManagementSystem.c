#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 20

typedef struct node
{
    char name[MAX];
    struct node *next;
}node;

typedef struct head
{
        node *start;

}head;

void insertend(head*t , char ch[])
{
    int i,l=strlen(ch);
    node*p,*q;
    p=(node*)malloc(sizeof(node));
    for(i=0;i<l;i++)
        p->name[i]=ch[i];
    p->name[l]='\0';
    p->next=NULL;
    if(t->start== NULL)
    {
        t->start = p;
        return;
    }
    q=t->start;
    while(q->next!=NULL)
        q=q->next;
    q->next = p;
}

int search(head*t,char ch[])
{
    node*q;
    q=t->start;
    while(q!=NULL)
    {
        if(strcmpi(q->name,ch))
            return 1;
        else q=q->next;
    }
    return 0;
}
void display(head *t)
{
        node *q;
        int i,l;
        if(t->start==NULL)
        {
            printf("The Medicine LIst empty \n");
            return;
        }
        q=t->start;
        while(q!=NULL)
        {
             for(i=0;i<=strlen(q->name);i++)
                printf("%c",q->name[i]);
             printf("\n");
             q=q->next;
        }
        printf("\n");
}
void main()
{
    head x;
    char mname[MAX];
    int ch , ele , i ,n ;
    x.start =NULL;

    //File to LL
  /*  FILE *fp;
    fp = fopen("Medicine_names.txt","r");
    while(feof(fp))
    {
        fscanf(fp,"%s",&mname);
        insertend(&x,mname);
    }
    fclose(fp);*/

    while(1)
    {
        printf("Enter Choice \n 1: ADD Product to List 2. Search 7.Exit");
        scanf("%d",&ch);
        if(ch==7)                //Exit Condition
            break;
        switch(ch)
        {
            case 1: printf("Enter Name of Medicine \n");
                    scanf("%s",&mname);
                    insertend(&x,mname);    //Later add a fumction to check if the product is already present
                    printf("Product added\n");
                    break;
            case 2: printf("Enter medicine name to search \n");
                    scanf("%s",&mname);
                    if(search(&x , mname))
                        printf("Medicine %s Found \n" , mname);
                    else printf("Medicine NOt found\n");
                    break;
            case 8: display(&x); //only meant for developer
                    break;

            default:printf("Invalid Input");
        }

    }
}
