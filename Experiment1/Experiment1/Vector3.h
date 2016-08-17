#pragma once
#include <cmath>

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

	friend Vector3 operator/(const Vector3& v, float a)
	{
		return Vector3(v.x / a, v.y / a, v.z / a);
	}

	friend Vector3 operator/(float a, const Vector3& v)
	{
		return v / a;
	}

	float
		Vector3::Length() {
		return sqrt(x*x + y*y + z*z);
	}

	Vector3
		Vector3::Normalized() {
		float len = this->Length();
		if (len > 0.001f)
			return Vector3(x / len, y / len, z / len);
		else
			return Vector3(0, 0, 0);
	}

	float
	Vector3::Dot(const Vector3 w){
		return this->x*w.x + this->y*w.y + this->z*w.z;
	}

	Vector3
		Vector3::Cross(const Vector3& other)
	{
		return Vector3(y*other.z - other.y*z,
			z*other.x - other.z*x,
			x*other.y - other.x*y);
	}

private:
	float x, y, z;

};