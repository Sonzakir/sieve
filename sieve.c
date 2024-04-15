#include <stdio.h>
#include <stdbool.h>


int main(int argc, char **argv) {
    const int MAX=26;
    bool boolArr[MAX];
    for(int i=0;i<MAX;i++)
    {
        boolArr[i]=true;
    }
    boolArr[0]=false;
    boolArr[1]=false;

    for (int i=2;i<=MAX;i++)
    {
        if (boolArr[i]==true)
        {
           int counter=2*i;
           while (counter<MAX)
           {
               boolArr[counter]=false;
               counter+=i;
           }
        }
    }
    for(int i=0;i<MAX;i++)
    {

        printf("%d ",boolArr[i]);
    }
    return 0;
}
