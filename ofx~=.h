#pragma once
/* @elliotwoods: @JGL @obviousjim ofx~=.h : */
template<typename T>
bool ofxApproxEqual(T x, T y, T sigma)
{ return y+sigma >= x && y-sigma <= x; }
