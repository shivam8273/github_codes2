#include<stdio.h>

void avg(int n)
{
    int sum=0;
    int avgg=0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }

    for(int j=0;j<n;j++)
    {
        sum=sum+arr[j];

    }
    avgg=sum/n;
    printf("\n");
    printf("%d",avgg);

}
int main()
{
    int n;
    scanf("%d",&n);
    avg(n);

}
