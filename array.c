/*#include<stdio.h>
int main()
{
    int  marks[4];
    marks[0] = 80;
    printf("marks of student 1 is %d\n",marks[0]);
    marks[1] = 90;
    printf("marks of student 2 is %d\n",marks[1]);
    marks[2] = 60;
    printf("marks of student 3 is %d\n",marks[2]);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int marks[4];
    for(int i=0;i<4;i++){
        printf("Enter the marks of student:\n");
        scanf("%d",&marks[i]);
    }
     for(int i=0;i<4;i++){
        printf("The marks of %d student is: %d\n",i,marks[i]);

    }
    return 0;
}*/
// #include <stdio.h>

// #include <string.h>

// int main() {

//     char str1[50], str2[50], str3[50];

//     printf("Write  1st string: ");

//     gets(str1);

//     printf("Write 2nd string: ");

//     gets(str2);

//     printf("\n Length of 1st str1=%d", strlen(str1));

//     printf("\n Length of 2nd str2= %d", strlen(str2));

//     strcpy(str3, str1);

//     printf("\nCopy of 1st  str1 into str3= %s", str3);

//    strcat(str1, str2);

//     printf("\Add of string1 with string2= %s", str1);

//     int com = strcmp(str1, str2);

//     if(com== 0)

//         printf("\n Equal string");

//     else if(com > 0)

//         printf("string1 is greater than string2");

//     else

//         printf("Vice versa");

//     printf("reverse of first string: %s", strrev(str1));

//     return 0;

// }
#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Elements in reverse order with their addresses:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("Element: %d \t Address: %p\n", arr[i],&arr[i]);
    }

    return 0;
}

