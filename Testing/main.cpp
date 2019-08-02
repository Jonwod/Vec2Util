#include <iostream>
#include <cassert>
#include "../Vec2Util/Vec2Util.h"
#include "SFML/System/Vector2.hpp"



bool nearlyEqual(float f1, float f2, float delta = 0.001f) {
    return fabs(f1 - f2) < delta;
}


int main() {
    sf::Vector2f vec_f1{100.f, -100.f};

    assert( (Vec2::toString(vec_f1) == "(100.000000, -100.000000)") );

    assert( nearlyEqual(Vec2::length(vec_f1), 141.421));

    sf::Vector2f vec_f2{12.f, 42.f};

    assert( nearlyEqual(Vec2::dotProduct(vec_f1, vec_f2), -3000.f) );

    std::cout<<"All tests passed!"<<std::endl;
    return 0;
}