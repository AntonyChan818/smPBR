#include<math.h>
#include<stdlib.h>
#include<stdio.h>

struct Vec {
	double x, y, z;
	Vec(double x = 0, double y = 0, double z = 0) {
		x = x;
		y = y;
		z = z;
	}
	Vec operator+(const Vec &b) const {
		return Vec(x + b.x, y + b.y, z + b.z);
	}
	Vec operator-(const Vec &b) const {
		return Vec(x - b.x, y - b.y, z - b.z);
	}
	Vec operator*(double b) const {
		return Vec(x*b, y*b, z*b);
	}
	Vec mult(const Vec &b) const {
		return Vec(x*b.x, y*b.y, z*b.z);
	}
	Vec& norm() {
		return *this = *this * (1 / sqrt(x*x + y * y + z * z));
	}
	double dot(const Vec &b) const {
		return(x*b.x + y * b.y + z * b.z);
	}
	Vec operator%(Vec &b) {
		return Vec(y*b.z - z * b.y, z*b.x - x * b.z, x*b.y - y * b.x);
	}
};
struct Ray {

};