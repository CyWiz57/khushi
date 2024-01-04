#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct library
{
    char book[20];
    char author[20];
    int pages;
    float price;
};

int main()
{

    struct library lib[100];

    char ar_nm[30], bk_nm[30];

    int i, input, count;

    i = input = count = 0;

    while (input != 5)
    {
        printf("\n\n-----------"
               "Welcome To E-Library"
               "--------------\n");
        printf("\n\n1. Add book information\n"
               "2. Display book information\n ");
        printf("3. List all books of given author\n");
        printf("4. List the count of books in the library\n");
        printf("5. Exit\n");

        printf("\n\nEnter one of the above : ");
        scanf("%d", &input);

        switch (input)
        {
        case 1:
            printf("Enter book name : ");
            scanf("%s", lib[i].book);
            printf("Enter author name : ");
            scanf("%s", lib[i].author);
            printf("Enter no. of pages : ");
            scanf("%d", &lib[i].pages);
            printf("Enter price : ");
            scanf("%f", &lib[i].price);
            count++;

            break;

        case 2:
            printf("You have entered the following information\n");
            for (i = 0; i < count; i++)
            {
                printf("Book : %s", lib[i].book);
                printf("\t Author : %s", lib[i].author);
                printf("\t No. of pages : %d", lib[i].pages);
                printf("\t Price : %f", lib[i].price);
            }
            break;

            // * TODO: count number of books by given author for case 3.
        case 3:
            printf("Enter author name : ");
            scanf("%s", ar_nm);
            for (i = 0; i < count; i++)
            {
                if (strcmp(ar_nm, lib[i].author) == 0)
                    printf("%s %s %d %f",
                           lib[i].book,
                           lib[i].author,
                           lib[i].pages,
                           lib[i].price);
            }
            break;

        case 4:
            printf("\n No. of books in the library : %d", count);
            break;

        case 5:
            exit(0);
        }
    }
    return 0;
}
