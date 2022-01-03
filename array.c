#include<stdio.h>
int main()
{
        //Change of element in array//
        int n,i,p,key;
        printf("Enter n value\n");
        scanf("%d",&n);
        int a[n];
        printf("Enter array elements");
        for(i=0;i<=n-1;i++)
            scanf("%d",&a[i]);
        printf("Array  \n");
        for(i=0;i<=n-1;i++)
            printf("\n %d",a[i]);
        printf("Enter position \n");
        scanf("%d",&p);
        printf("Enter the value of key \n");
        scanf("%d",&key);
        for(i=n;i>=p-1;i--)
        {
            a[i+1]=a[i];
        }
        a[p-1]=key;
        printf("After intersection Array\n");
        for(i=0;i<=n;i++)
            printf("%d",a[i]);
        return 0;
}
