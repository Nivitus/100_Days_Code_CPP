#include <iostream>
int main()
{
    int n = 10;
    for(int i=1; i<=n; i++)
    {
        if(i % i == 0 | i % 1 == i)
        {
            std::cout<<"Prime Number"<<std::endl;
        }
        else
        {
            std::cout<<"Not a Prime Number"<<std::endl;
        }
    }
    return 0;
}