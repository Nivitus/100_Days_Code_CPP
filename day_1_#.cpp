#include <iostream>
int main()
{
   int sum=0, n=10000;
   for(int i=1; i<=n; i++)
   {
    for(int j=1; j<=n; j++)
    {
        if(j<i)
        {
            if(i%j==0)
            sum = sum + j;
        }
    }
    if(sum == i)
    {
        std::cout<<i<<std::endl;
    }
    // j=1;
    sum=0;

   }
   return 0;

}