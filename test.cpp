// #define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE("Review Twos", "[RemoveTwos]")
{
    REQUIRE(RemoveTwos(2) == 1);
    REQUIRE(RemoveTwos(11) == 11);
    REQUIRE(RemoveTwos(56) == 7);
    REQUIRE(RemoveTwos(32) == 1);
    REQUIRE(RemoveTwos(54) == 27);
}

TEST_CASE("Sign Function", "[Sum]")
{
    REQUIRE(Sign(56) == 1);
    REQUIRE(Sign(-1) == -1);
    REQUIRE(Sign(-8) == -1);
    REQUIRE(Sign(2) == 1);
    REQUIRE(Sign(-1000) == -1);
    REQUIRE(Sign(89) == 1);
}

TEST_CASE("SumVect Function", "[Sum]")
{
    REQUIRE(VectSum({1, 2, 3}) == 6);
    REQUIRE(VectSum({7, 5, 3, 8}) == 23);
    REQUIRE(VectSum({2, 3}) == 5);
    REQUIRE(VectSum({1}) == 1);
    REQUIRE(VectSum({10, 8, 18}) == 36);
}