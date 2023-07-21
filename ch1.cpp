#include <stdio.h>
int displayMenu();
int displayBook();
void DisplayStudents();
void issueBook();
void displayissuedbook();
int main(int argc, char const *argv[])
{
    int i = displayMenu();

    switch (i)
    {
    case 1:
    {
        displayBook();
        break;
    }

    case 2:
    {
        DisplayStudents();
        break;
    }

    case 3:
    {
        issueBook();
        break;
    }
    case 4:
    {
        displayissuedbook();
        break;
    }
    case 5:
        printf("closing.........");
        break;
    }
    return 0;
}

int displayMenu()
{
    int i;
    printf("\t\t\t\tLIBRARY MANAGEMENT SYSTEM\n");
    printf("\t\t\t\t\tMAIN MENU\n");
    printf("1.DISPLAY BOOK\n");
    printf("2.DISPLAY STUDENTS\n");
    printf("3.ISSUE BOOK\n");
    printf("4.DISPLAYED ISSUED BOOKS\n");
    printf("5.EXIT\n");
    printf("\t\t\t\t ENTER YOUR CHOICE");
    scanf("\t%d", &i);
    return i;
}

int displayBook()
{
    int a;
    printf("\t\t\t\there are books available\n");
    printf("1.Sherlock Holmes\n");
    printf("2.The time machine\n");
    printf("3.The Canterville Ghost\n");
    printf("Enter 0 to exit or 1 to register new book");
    scanf("%d", &a);
    switch (a)
    {
    case 1:{
        struct book
        {
            int serial;
            char name[25];
        };
        struct book b1;
        printf("enter serial number and book name");
        scanf("%d %c", &b1.serial, &b1.name);
        printf("%d %c", b1.serial, b1.name);
        break;
    }
    case 0:
        displayMenu();
        break;
    }
}

void DisplayStudents()
{
    printf("1.NANDINI");
    printf("2.ERICA");
    printf("3.SANJAY");
    printf("4.MEETU");
}
void issueBook()
{
    int choice;
    char a[25];
    char b[25];
    printf("enter your name\n");
    scanf("%s", &a);
    printf("enter name of issue book\n");
    scanf("%s", &b);
    printf("enter 0 to confirm\n");
    printf("%s %s", a, b);
    scanf("%d", &choice);
    if (choice == 0)
        printf("your book is in process");
    else
    {
        printf("re-enter details");
        issueBook();
    }
}

void displayissuedbook() {}