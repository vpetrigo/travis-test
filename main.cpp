#define CATCH_CONFIG_MAIN
#include <iostream>
#include "test.hpp"
#include "catch.hpp"

TEST_CASE("Test class constructor", "[Test]") {
    std::vector<int> v{1, 2, 3, 4};
    Test<int> t{v};
    
    REQUIRE( t[0] == v[0] );
    REQUIRE( t[1] == v[1] );
    REQUIRE( t[2] == v[2] );
    REQUIRE( t[3] == v[3] );
    REQUIRE( t.get_data().size() == v.size() );
}