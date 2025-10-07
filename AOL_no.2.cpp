#include <stdio.h>
#include <string.h>

struct Hotel
{
    char location[101];
    char city[101];
    long long int price;
    int room;
    int bath;
    int car;
    char type[101];
    char furnish[101];
};


void bubSortL(struct Hotel arr[], int size, char type[])
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (strcmp(type, "asc") == 0)
            {
                if (strcmp(arr[j].location, arr[j + 1].location) > 0)
                {
                    struct Hotel temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
            else
            {
                if (strcmp(arr[j].location, arr[j + 1].location) < 0)
                {
                    struct Hotel temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
}

void bubSortC(struct Hotel arr[], int size, char type[])
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (strcmp(type, "asc") == 0)
            {
                if (arr[j].car > arr[j + 1].car)
                {
                    struct Hotel temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
            else
            {
                if (arr[j].car < arr[j + 1].car)
                {
                    struct Hotel temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
}

void bubSortT(struct Hotel arr[], int size, char tipe[])
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (strcmp(tipe, "asc") == 0)
            {
                if (strcmp(arr[j].type, arr[j + 1].type) > 0)
                {
                    struct Hotel temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
            else
            {
                if (strcmp(arr[j].type, arr[j + 1].type) < 0)
                {
                    struct Hotel temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
}

void bubSortF(struct Hotel arr[], int size, char tipe[])
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (strcmp(tipe, "asc") == 0)
            {
                if (strcmp(arr[j].furnish, arr[j + 1].furnish) > 0)
                {
                    struct Hotel temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
            else
            {
                if (strcmp(arr[j].furnish, arr[j + 1].furnish) < 0)
                {
                    struct Hotel temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
}

void bubSortP(struct Hotel arr[], int size, char type[])
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (strcmp(type, "asc") == 0)
            {
                if (arr[j].price > arr[j + 1].price)
                {
                    struct Hotel temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
            else
            {
                if (arr[j].price < arr[j + 1].price)
                {
                    struct Hotel temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
}

void bubSortB(struct Hotel a[], int size, char type[])
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (strcmp(type, "asc") == 0)
            {
                if (a[j].bath > a[j + 1].bath)
                {
                    struct Hotel temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
            else
            {
                if (a[j].bath < a[j + 1].bath)
                {
                    struct Hotel temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
    }
}

void bubSortR(struct Hotel arr[], int size, char type[])
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (strcmp(type, "asc") == 0)
            {
                if (arr[j].room > arr[j + 1].room)
                {
                    struct Hotel temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
            else
            {
                if (arr[j].room < arr[j + 1].room)
                {
                    struct Hotel temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
}


void MainMenu()
{
    puts("What do you want to do?");
    puts("1. Display data");
    puts("2. Search data");
    puts("3. Sort data");
    puts("4. Export data");
    puts("5. Exit");
}


int main()
{
    char temp[10000];
    FILE *p;
    p = fopen("file.csv", "r");
    fscanf(p, "%[^\n]\n", temp);

    int c = 0, n;
    struct Hotel cust[3941];
    char col[101];
    int r, jml;
    long long int pr;
    for (int i = 0; !feof(p); i++)
    {
        fscanf(p, "%[^,],%[^,],%lld,%d,%d,%d,%[^,],%[^\n]\n", cust[i].location, cust[i].city, &cust[i].price, &cust[i].room, &cust[i].bath, &cust[i].car, cust[i].type, cust[i].furnish);
        jml++;
        
    }
    fclose(p);
    do
    {
        MainMenu(); // menampilkan menu utama
        printf("Your Choice: ");
        scanf("%d", &c);
        getchar();

        // Menu 1: Display
        if (c == 1)
        {
            printf("Number of rows: ");
            scanf("%d", &n);
            getchar();
            puts("Location\t\t       City\t\t  Price\t\t  Rooms\t     Bathroom   Carpark    Type\t\tFurnish");
            for (int i = 0; i < n; i++)
            {
                printf("%-30s %-18s %-15lld %-10d %-10d %-10d %-12s %-7s\n", cust[i].location, cust[i].city, cust[i].price, cust[i].room, cust[i].bath, cust[i].car, cust[i].type, cust[i].furnish);
            }
        }

        // Menu 2: Searching
        else if (c == 2)
        {
            int isFound = 0;
            printf("Choose column: ");
            scanf("%s", col);
            getchar();
            char loc[101];
            if (strcmp(col, "Location") == 0)
            {
                printf("What data do you want to find? ");
                scanf("%[^\n]", loc);
                getchar();
                for (int i = 0; i < jml; i++)
                {
                    if (strcmp(loc, cust[i].location) == 0)
                    {
                        isFound = 1;
                        break;
                    }
                }
                if (isFound)
                {
                    puts("Data found. Detail of data: ");
                    puts("Location\t     City\t\tPrice\t\tRooms\t   Bathroom   Carpark    Type\t\t  Furnish");
                    for (int i = 0; i < jml; i++)
                    {
                        if (strcmp(loc, cust[i].location) == 0)
                        {
                            printf("%-20s %-18s %-15lld %-10d %-10d %-10d %-12s %-7s\n", cust[i].location, cust[i].city, cust[i].price, cust[i].room, cust[i].bath, cust[i].car, cust[i].type, cust[i].furnish);
                        }
                    }
                }
                else if (!isFound)
                {
                    puts("Data not found!");
                }
            }
            else if (strcmp(col, "Rooms") == 0)
            {
                printf("What data do you want to find? ");
                scanf("%d", &r);
                getchar();
                for (int i = 0; i < jml; i++)
                {
                    if (r == cust[i].room)
                    {
                        isFound = 1;
                        break;
                    }
                }
                if (isFound)
                {
                    puts("Data found. Detail of data: ");
                    puts("Location\t     City\t\tPrice\t\tRooms\t   Bathroom   Carpark    Type\t\t  Furnish");
                    for (int i = 0; i < jml; i++)
                    {
                        if (r == cust[i].room)
                        {
                            printf("%-20s %-18s %-15lld %-10d %-10d %-10d %-12s %-7s\n", cust[i].location, cust[i].city, cust[i].price, cust[i].room, cust[i].bath, cust[i].car, cust[i].type, cust[i].furnish);
                        }
                    }
                }
                else if (!isFound)
                {
                    puts("Data not found!");
                }
            }
            else if (strcmp(col, "Carpark") == 0)
            {
                printf("What data do you want to find? ");
                scanf("%d", &r);
                getchar();
                for (int i = 0; i < jml; i++)
                {
                    if (r == cust[i].car)
                    {
                        isFound = 1;
                        break;
                    }
                }
                if (isFound)
                {
                    puts("Data found. Detail of data: ");
                    puts("Location\t     City\t\tPrice\t\tRooms\t   Bathroom   Carpark    Type\t\t  Furnish");
                    for (int i = 0; i < jml; i++)
                    {
                        if (r == cust[i].car)
                        {
                            printf("%-20s %-18s %-15lld %-10d %-10d %-10d %-12s %-7s\n", cust[i].location, cust[i].city, cust[i].price, cust[i].room, cust[i].bath, cust[i].car, cust[i].type, cust[i].furnish);
                        }
                    }
                }
                else if (!isFound)
                {
                    puts("Data not found!");
                }
            }
            else if (strcmp(col, "Price") == 0)
            {
                printf("What data do you want to find? ");
                scanf("%lld", &pr);
                getchar();
                for (int i = 0; i < jml; i++)
                {
                    if (pr == cust[i].price)
                    {
                        isFound = 1;
                        break;
                    }
                }
                if (isFound)
                {
                    puts("Data found. Detail of data: ");
                    puts("Location\t     City\t\tPrice\t\tRooms\t   Bathroom   Carpark    Type\t\t  Furnish");
                    for (int i = 0; i < jml; i++)
                    {
                        if (pr == cust[i].price)
                        {
                            printf("%-20s %-18s %-15lld %-10d %-10d %-10d %-12s %-7s\n", cust[i].location, cust[i].city, cust[i].price, cust[i].room, cust[i].bath, cust[i].car, cust[i].type, cust[i].furnish);
                        }
                    }
                }
                else if (!isFound)
                {
                    puts("Data not found!");
                }
            }
            else if (strcmp(col, "Bathroom") == 0)
            {
                printf("What data do you want to find? ");
                scanf("%lld", &pr);
                getchar();
                for (int i = 0; i < jml; i++)
                {
                    if (cust[i].bath == pr)
                    {
                        isFound = 1;
                        break;
                    }
                }
                if (isFound)
                {
                    puts("Data found. Detail of data: ");
                    puts("Location\t     City\t\tPrice\t\tRooms\t   Bathroom   Carpark    Type\t\t  Furnish");
                    for (int i = 0; i < jml; i++)
                    {
                        if (cust[i].bath == pr)
                        {
                            printf("%-20s %-18s %-15lld %-10d %-10d %-10d %-12s %-7s\n", cust[i].location, cust[i].city, cust[i].price, cust[i].room, cust[i].bath, cust[i].car, cust[i].type, cust[i].furnish);
                        }
                    }
                }
                else if (!isFound)
                {
                    puts("Data not found!");
                }
            }
            else if (strcmp(col, "Furnish") == 0)
            {
                printf("What data do you want to find [Partly | Fully | Unfurnished]? ");
                scanf("%[^\n]", loc);
                getchar();
                if (strcmp(loc, "Partly") == 0)
                {
                    for (int i = 0; i < jml; i++)
                    {
                        if (strcmp("Partly", cust[i].furnish) == 0)
                        {
                            isFound = 1;
                            break;
                        }
                    }
                    if (isFound)
                    {
                        puts("Data found. Detail of data: ");
                        puts("Location\t     City\t\tPrice\t\tRooms\t   Bathroom   Carpark    Type\t\t  Furnish");
                        for (int i = 0; i < jml; i++)
                        {
                            if (strcmp("Partly", cust[i].furnish) == 0)
                            {
                                printf("%-20s %-18s %-15lld %-10d %-10d %-10d %-12s %-7s\n", cust[i].location, cust[i].city, cust[i].price, cust[i].room, cust[i].bath, cust[i].car, cust[i].type, cust[i].furnish);
                            }
                        }
                    }
                    else if (!isFound)
                    {
                        puts("Data not found!");
                    }
                }
                else if (strcmp(loc, "Fully") == 0)
                {
                    for (int i = 0; i < jml; i++)
                    {
                        if (strcmp("Fully", cust[i].furnish) == 0)
                        {
                            isFound = 1;
                            break;
                        }
                    }
                    if (isFound)
                    {
                        puts("Data found. Detail of data: ");
                        puts("Location\t     City\t\tPrice\t\tRooms\t   Bathroom   Carpark    Type\t\t  Furnish");
                        for (int i = 0; i < jml; i++)
                        {
                            if (strcmp("Fully", cust[i].furnish) == 0)
                            {
                                printf("%-20s %-18s %-15lld %-10d %-10d %-10d %-12s %-7s\n", cust[i].location, cust[i].city, cust[i].price, cust[i].room, cust[i].bath, cust[i].car, cust[i].type, cust[i].furnish);
                            }
                        }
                    }
                    else if (!isFound)
                    {
                        puts("Data not found!");
                    }
                }
                else if (strcmp(loc, "Unfurnished") == 0)
                {
                    for (int i = 0; i < jml; i++)
                    {
                        if (strcmp("Unfurnished", cust[i].furnish) == 0)
                        {
                            isFound = 1;
                            break;
                        }
                    }
                    if (isFound)
                    {
                        puts("Data found. Detail of data: ");
                        puts("Location\t     City\t\tPrice\t\tRooms\t   Bathroom   Carpark    Type\t\t  Furnish");
                        for (int i = 0; i < jml; i++)
                        {
                            if (strcmp("Unfurnished", cust[i].furnish) == 0)
                            {
                                printf("%-20s %-18s %-15lld %-10d %-10d %-10d %-12s %-7s\n", cust[i].location, cust[i].city, cust[i].price, cust[i].room, cust[i].bath, cust[i].car, cust[i].type, cust[i].furnish);
                            }
                        }
                    }
                    else if (!isFound)
                    {
                        puts("Data not found!");
                    }
                }
            }
        }

        // Menu 3: Sorting
        else if (c == 3)
        {
            char type[100];
            printf("Choose Columns: ");
            scanf("%[^\n]", col);
            getchar();
            printf("Sort ascending or descending [asc|dsc]? ");
            scanf("%[^\n]", type);
            getchar();
            if (strcmp(col, "Location") == 0)
            {
                bubSortL(cust, jml, type);
            }
            else if (strcmp(col, "Rooms") == 0)
            {
                bubSortR(cust, jml, type);
            }
            else if (strcmp(col, "Price") == 0)
            {
                bubSortP(cust, jml, type);
            }
            else if (strcmp(col, "Bathroom") == 0)
            {
                bubSortB(cust, jml, type);
            }
            else if (strcmp(col, "Carpark") == 0)
            {
                bubSortC(cust, jml, type);
            }
            else if (strcmp(col, "Type") == 0)
            {
                bubSortT(cust, jml, type);
            }
            else if (strcmp(col, "Furnish") == 0)
            {
                bubSortF(cust, jml, type);
            }

            puts("Location\t     City\t\tPrice\t\tRooms\t   Bathroom   Carpark    Type\t\t  Furnish");
            for (int i = 0; i < 10; i++)
            {
                    printf("%-20s %-18s %-15lld %-10d %-10d %-10d %-12s %-7s\n", cust[i].location, cust[i].city, cust[i].price, cust[i].room, cust[i].bath, cust[i].car, cust[i].type, cust[i].furnish);
                    fflush(stdin);
            }
        }

        // Menu 4: Mengekspor Data
        else if (c == 4)
        {
            char fn[101];
            printf("File_name: ");
            scanf("%[^\n]", fn);
            getchar();
            sprintf(fn, "%s.csv", fn);
            printf("Data sucecssfully written to file %s\n", fn);
            p = fopen(fn, "w");
            for (int i = 0; i < n; i++)
            {
                fprintf(p, "%s,%s,%lld,%d,%d,%d,%s,%s\n", cust[i].location, cust[i].city, cust[i].price, cust[i].room, cust[i].bath, cust[i].car, cust[i].type, cust[i].furnish);
            }
        }
        // Menu tidak Valid
        else if (c != 5)
        {
            puts("Invalid menu!!!");
        }
    } while (c != 5);
    puts("Thank you!\nHave a nice day");
}
