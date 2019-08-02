//
// Created by jon on 02/08/2019.
//

#ifndef VEC2UTIL_VEC2UTIL_H
#define VEC2UTIL_VEC2UTIL_H
#include <string>
#include <cmath>


/* A set of functions for use on any 2d vector class with a public x and y variables,
 * that support the basic mathematical operations. */
namespace Vec2 {

    template<typename V>
    std::string toString(const V& vec) {
        std::string str;
        return "(" + std::to_string(vec.x) + ", " + std::to_string(vec.y) + ")";
    }


    template<template<class> class V, class S>
    S length(const V<S> & vec) {
        return sqrt(vec.x * vec.x  + vec.y * vec.y);
    }


    template<template<class> class V, class S>
    S dotProduct(const V<S> & a, const V<S> & b) {
        return a.x * b.x + a.y * b.y;
    }

}


#endif //VEC2UTIL_VEC2UTIL_H
