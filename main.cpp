#include <iostream>
#include <vector>
#include "funcs.h"

int main()
{
    //Task A
    std::vector<int> v1 = makeVector(5);
    std::cout << "Task A" << std::endl;
    for(int i = 0; i < v1.size(); i++)
    { 
        std::cout << v1[i] << ", ";
    }
    std::cout << "\n";
    //std::cout << v1.capacity() << std::endl << v1.size() << std::endl;

    //Task B
    std::vector<int> v2{0, -1, -2, 3,-4, 5, 6, -7, 8};
    std::vector<int> v3 = goodVibes(v2);
    std::cout << "Task B" << std::endl;
    for(int i = 0; i < v3.size(); i++)
    {
        std::cout << v3[i] << ", ";
    }
    std::cout << "\n";

    //Task C
    gogeta(v1,v3);
    std::cout << "Task C" << std::endl;
    for(int i = 0; i < v1.size(); i++)
    {
        std::cout << v1[i] << ", ";
    }
    std::cout << "\n";
    
    //Task D
    std::vector<int> v4{1,2,3,4,5,6};
    std::vector<int> v5{1,2,3,4,5,6,7,8,9};
    std::vector<int> v6 = sumPairWise(v4,v5);
    std::cout << "Task D" << std::endl;
    for(int i = 0; i < v6.size(); i++)
    {
        std::cout << v6[i] << ", ";
    }
    std::cout << "\n";
}