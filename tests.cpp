#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include <vector>

TEST_CASE("A")
{
    std::vector<int> v1 = makeVector(10);
    std::vector<int> v1check{0,1,2,3,4,5,6,7,8,9};
    std::vector<int> v2 = makeVector(1);
    std::vector<int> v2check = {0};
    CHECK(v1 == v1check);
    CHECK(v1.size() == 10);
    CHECK(v2 == v2check);
    CHECK(v2.size() == 1);
}

TEST_CASE("B")
{
    std::vector<int> v1{-1,-2,3,4,-5,-6,7,8};
    std::vector<int> v1check{3,4,7,8};
    std::vector<int> v2{-1,-2,-3,-4,-5};
    std::vector<int> v2check{};
    CHECK(goodVibes(v1) == v1check);   
    CHECK(goodVibes(v2) == v2check);
}

TEST_CASE("C")
{
    std::vector<int> v1{1,2,3,4,5,6};
    std::vector<int> v2{10,20,30,40};
    std::vector<int> v1check{1,2,3,4,5,6,10,20,30,40};
    std::vector<int> v2check{};
    gogeta(v1,v2);
    CHECK(v1 == v1check);
    CHECK(v2 == v2check);
}

TEST_CASE("D")
{
    std::vector<int> v1{1,2,3,4,5,6,7,8,9};
    std::vector<int> v1check{2,4,6,8,10,12,14,16,18};
    std::vector<int> v1test = sumPairWise(v1,v1);
    std::vector<int> v2{4,8,12,16,20,24,28,32,36}; 
    std::vector<int> v2test = sumPairWise(v1test,v1test);
    CHECK(v1test == v1check);
    CHECK(v2test == v2);
    std::vector<int> test{1,4,7,3};
    std::vector<int> test2{2,7,4,2,1,5};
    std::vector<int> test3 = sumPairWise(test,test2);
    std::vector<int> result{3,11,11,5,1,5};
    CHECK(test3 == result);
}