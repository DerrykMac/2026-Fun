#pragma once

#ifndef USINGBASICS
#define USINGBASICS

// Variables
#define PI 3.14159265359

typedef struct
{
    int x;
    int y;
} vec2;
typedef struct
{
    int x;
    int y;
    int z;
} vec3;

typedef struct
{
    float x;
    float y;
} vec2f;
typedef struct
{
    float x;
    float y;
    float z;
} vec3f;

// Functions
inline float lerpf(float a, float b, float t)
{
    return a + t * (b - a);
}
inline float clampf(float x, float a, float b)
{
    if (x < a)
        return a;
    if (x > b)
        return b;
    return x;
}
inline float minf(float a, float b)
{
    return a < b ? a : b;
}
inline float maxf(float a, float b)
{
    return a > b ? a : b;
}
inline float squrtf(float x)
{
    float xhalf = 0.5f * x;
    int i = *(int *)&x;
    i = 0x5f3759df - (i >> 1);
    x = *(float *)&i;
    x = x * (1.5f - xhalf * x * x);
    return 1 / x;
    // Quake 3 fast inverse square root
}

inline bool IsPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}


inline vec2f vec2f_add(vec2f a, vec2f b)
{
    return {a.x + b.x, a.y + b.y};
}
inline vec2f vec2f_sub(vec2f a, vec2f b)
{
    return {a.x - b.x, a.y - b.y};
}
inline vec2f vec2f_mul(vec2f a, float b)
{
    return {a.x * b, a.y * b};
}
inline vec2f vec2f_mul_vec2(vec2f a, vec2f b)
{
    return {a.x * b.x, a.y * b.y};
}
inline vec2f vec2f_div(vec2f a, float b)
{
    return {a.x / b, a.y / b};
}
inline float vec2f_dot(vec2f a, vec2f b)
{
    return a.x * b.x + a.y * b.y;
}
inline float vec2f_len(vec2f a)
{
    return squrtf(a.x * a.x + a.y * a.y);
}
inline vec2f vec2f_norm(vec2f a)
{
    return vec2f_div(a, vec2f_len(a));
}
inline vec2f vec2f_lerp(vec2f a, vec2f b, float t)
{
    return vec2f_add(a, vec2f_mul(vec2f_sub(b, a), t));
}

inline vec3f vec3f_add(vec3f a, vec3f b)
{
    return {a.x + b.x, a.y + b.y, a.z + b.z};
}
inline vec3f vec3f_sub(vec3f a, vec3f b)
{
    return {a.x - b.x, a.y - b.y, a.z - b.z};
}
inline vec3f vec3f_mul(vec3f a, float b)
{
    return {a.x * b, a.y * b, a.z * b};
}
inline vec3f vec3f_div(vec3f a, float b)
{
    return {a.x / b, a.y / b, a.z / b};
}
inline float vec3f_dot(vec3f a, vec3f b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z;
}
inline vec3f vec3f_cross(vec3f a, vec3f b)
{
    return {a.y * b.z - a.z * b.y, a.z * b.x - a.x * b.z, a.x * b.y - a.y * b.x};
}
inline float vec3f_len(vec3f a)
{
    return squrtf(a.x * a.x + a.y * a.y + a.z * a.z);
}
inline vec3f vec3f_norm(vec3f a)
{
    return vec3f_div(a, vec3f_len(a));
}
inline vec3f vec3f_lerp(vec3f a, vec3f b, float t)
{
    return vec3f_add(a, vec3f_mul(vec3f_sub(b, a), t));
}
inline vec3f vec3f_reflect(vec3f a, vec3f b)
{
    return vec3f_sub(a, vec3f_mul(b, 2 * vec3f_dot(a, b)));
}

// Convertors
inline vec2f vec2_to_vec2f(vec2 a)
{
    return {(float)a.x, (float)a.y};
}
inline vec3f vec3_to_vec3f(vec3 a)
{
    return {(float)a.x, (float)a.y, (float)a.z};
}
inline vec2 int_to_vec2(int a)
{
    return {a, a};
}
inline vec3 int_to_vec3(int a)
{
    return {a, a, a};
}
inline vec2f float_to_vec2f(float a)
{
    return {a, a};
}
inline vec3f float_to_vec3f(float a)
{
    return {a, a, a};
}

#endif // USINGBASICS