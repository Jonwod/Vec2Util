#include <iostream>
#include <cassert>
#include "../Vec2Util/Vec2Util.h"
#include "SFML/System/Vector2.hpp"



bool nearlyEqual(float f1, float f2, float delta = 0.001f) {
    return fabs(f1 - f2) < delta;
}


bool nearlyEqual(sf::Vector2f v1, sf::Vector2f v2, float delta = 0.001f) {
    return nearlyEqual(v1.x, v2.x, delta)  && nearlyEqual(v1.y, v2.y, delta);
}


using namespace Vec2;

constexpr float pi = 3.1415926535897932384626433832f;


int main() {
    sf::Vector2f vec_f1{100.f, -100.f};

    assert( (toString(vec_f1) == "(100.000000, -100.000000)") );

    assert( nearlyEqual(length(vec_f1), 141.421));

    sf::Vector2f vec_f2{12.f, 42.f};

    assert( nearlyEqual(dotProduct(vec_f1, vec_f2), -3000.f) );

    assert(nearlyEqual(angleRadians(sf::Vector2f(0, 1)), 1.5708));

    assert(nearlyEqual(vectorFromAngle<sf::Vector2f>(1.5708), sf::Vector2f(0, 1)));

    sf::Vector2f vec_f3{1.f, 0.f};
    assert(nearlyEqual(rotateVector(vec_f3, pi/2.f), sf::Vector2f(0.f, 1.f)));
    assert(nearlyEqual(rotateVector(vec_f3, -pi/2.f), sf::Vector2f(0.f, -1.f)));
    assert(nearlyEqual(rotateVector(vec_f3, 2 * pi), vec_f3));

    std::cout<<"All tests passed!"<<std::endl;
    return 0;
}