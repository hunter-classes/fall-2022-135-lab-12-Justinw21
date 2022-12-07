#include <iostream>
#include "funcs.h"
#include <vector>

std::vector<int> makeVector(int n)
{
    std::vector<int> result;
    for(int i = 0; i < n; i++)
    {
        result.push_back(i);
    }
    return result;
}

std::vector<int> goodVibes(const std::vector<int>& v)
{
    std::vector<int> result;
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] >= 0)
        {
            result.push_back(v[i]);
        }
    }
    return result;
}

void gogeta(std::vector<int> &goku, std::vector<int> &vegeta)
{
    for(int i = 0; i < vegeta.size(); i++)
    {
        goku.push_back(vegeta[i]);
    }
    vegeta.clear();
}

std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2)
    {
        std::vector<int> result;
        int difference;
        for(int i = 0; i < v1.size() && i < v2.size(); i++)
        {
            result.push_back(v1[i] + v2[i]);
        }

        difference = v1.size() - v2.size();
        if(difference > 0)
        {
            for(int i = v2.size(); i < v1.size(); i++)
            {
                result.push_back(v1[i]);
            }
        }
        else
        {
            for(int i = v1.size(); i < v2.size(); i++)
            {
                result.push_back(v2[i]);
            }
        }
        return result;
    }