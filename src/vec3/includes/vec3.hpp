#ifndef VEC3_H
#define VEC3_H

#include <iostream>

class vec3
{
public:
    vec3();
    vec3(double e0, double e1, double e2);

    double x() const;
    double y() const;
    double z() const;
    double length() const;
    double length_squared() const;

    vec3 operator-() const;
    double operator[](int i) const;
    double &operator[](int i);

    vec3 &operator+=(const vec3 &v);
    vec3 &operator*=(const double t);
    vec3 &operator/=(const double t);

public:
    double e[3];
};

// Type aliases for vec3
using point3 = vec3; // 3D point
using color = vec3;  // RGB color

// vec3 Utility Functions
std::ostream &operator<<(std::ostream &out, const vec3 &v);
vec3 operator+(const vec3 &u, const vec3 &v);
vec3 operator-(const vec3 &u, const vec3 &v);
vec3 operator*(const vec3 &u, const vec3 &v);
vec3 operator*(double t, const vec3 &v);
vec3 operator*(const vec3 &v, double t);
vec3 operator/(vec3 v, double t);
double dot(const vec3 &u, const vec3 &v);
vec3 cross(const vec3 &u, const vec3 &v);
vec3 unit_vector(vec3 v);

#endif