#include<stdio.h>
void main()
{
    int cp,sp,p,l;
    printf("enter the cost_price and selling_price of item\n");
    scanf("%d\t%d",&cp,&sp);
    if(sp>cp)
    {
        p=sp-cp;
        printf("profit is rs. %d",p);
    }
    else if(cp>sp)
    {
        l=cp-sp;
         printf("loss is rs. %d",l);
    }
    else
        printf("no profit or no loss\n");

}
