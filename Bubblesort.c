#include<stdio.h>

void readnum(int a[],int n);

void printnum(int a[],int n);

void sortnum(int a[],int n);

void main()

{

    int n,a[100];

    printf("Enter the number of elements:");

    scanf("%d",&n);

    readnum(a,n);

    sortnum(a,n);

    printnum(a,n);

}

void readnum(int x[],int n)

{

int i;

printf("Enter the elements");

for(i=0;i<n;i++)

{

   scanf("%d",&x[i]);

}

}

void sortnum(int x[],int n)

{

int i,t,j;

  for(i=0;i<n-1;i++)

  for(j=0;j<n-1-i;j++)

  if(x[j]>x[j+1])

  {

     t=x[j];

     x[j]=x[j+1];

     x[j+1]=t;

  }

}

void printnum(int x[],int n)

{

int i;

printf("The sorted array is ");

for(i=0;i<n;i++)

{

   printf("%d ",x[i]);

}

}   

        

