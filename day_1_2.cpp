#include <iostream>
int main()
{
    int n, count = 0;
    std::cin>>n;
    for(int i=1; i<=n; i++)
    {
        count = count + i;
    }
    std::cout<<count<<std::endl;
}


