#include <stdio.h>

#define p 17
#define q 14

#define f (1 << q)


int64_t fp(int64_t n)
{
  return n * f;
}

int64_t int_z(int64_t x)
{
  return x / f;
}

int64_t int_n (int64_t x)
{
  if( x >=0 ){
    return ( x + f/2) / f;
  }
  else{
    return ( x - f/2) / f;
  }
}

int64_t add(int64_t x, int64_t y)
{
  return x + y;
}
int64_t sub(int64_t x, int64_t y)
{
  return x - y;
}

int64_t add_int(int64_t x, int64_t n)
{
  return x + n * f;
}

int64_t sub_int (int64_t x , int64_t n)
{
  return x - n * f;
}

int64_t mul(int64_t x, int64_t y)
{
  return ((int64_t)x) * y / f;
}

int64_t mul_int(int64_t x, int64_t n)
{
  return x * n;
}

int64_t div(int64_t x, int64_t y)
{
  return ((int64_t)x) * f / y;
}

int64_t div_int(int64_t x, int64_t n)
{
  return x / n;
}
