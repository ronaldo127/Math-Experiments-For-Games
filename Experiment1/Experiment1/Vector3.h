#pragma once
#include <utility>

class Vector3
{
public:
	inline Vector3() {}
	inline Vector3(float xVal, float yVal, float zVal) :
		x(xVal),
		y(yVal),
		z(zVal)
	{}
	inline ~Vector3() {}
	inline float GetX() { return x; }
	inline float GetY() { return y; }
	inline float GetZ() { return z; }
	inline void SetX(float xVal) { x = xVal; }
	inline void SetY(float yVal) { y = yVal; }
	inline void SetZ(float zVal) { z = zVal; }

	Vector3& operator=(const Vector3& vector) {
		this->x = vector.x;
		this->y = vector.y;
		this->z = vector.z;
		return *this;
	}

	friend Vector3 operator+(const Vector3& v0, const Vector3& v1)
	{
		return Vector3(v0.x + v1.x, v0.y + v1.y, v0.z + v1.z);
	}

	friend Vector3 operator*(const Vector3& v, float a)
	{
		return Vector3(v.x*a, v.y*a, v.z*a);
	}

	friend Vector3 operator*(float a, const Vector3& v)
	{
		return v*a;
	}

private:
	float x, y, z;

};