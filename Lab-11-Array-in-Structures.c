#include <stdio.h>
struct entry{
char fname[20];
char lname[20];
char phone[11];
};
struct entry list[3];
int i;
int main()
{
    for(i=0;i<3;i++)
    {
        printf("\nEnter First name:");
        scanf("%s",&list[i].fname);
        printf("\nEnter Last Name:");
        scanf("%s",&list[i].lname);
        printf("\nEnter Phone Numbner in 123-4567 Format: ");
        scanf("%s",&list[i].phone);
    }
    printf("\n\n");
    for(i=0;i<3;i++)
    {
        printf("Name: %s %s",list[i].fname,list[i].lname);
        printf("\t\tPhone: %s\n",list[i].phone);
    }
    return 0;
}
