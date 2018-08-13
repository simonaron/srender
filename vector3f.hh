#ifndef VECTOR3F_HH
#define VECTOR3F_HH

#include <iostream>

using namespace std;

class vector3f {
    private:
        float x,y,z;
    public:
        vector3f(float x = 0, float y = 0, float z = 0, float h = 1) 
            :x(x/h),y(y/h),z(z/h) {}

        const vector3f& operator+(const vector3f& v2) const {
            return vector3f(x+v2.x, y+v2.y, z+v2.z);
        }

        const vector3f& operator-(const vector3f& v2) const {
            return vector3f(x-v2.x, y-v2.y, z-v2.z);
        }

        const vector3f& operator*(const float f) const {
            if(f == 0) {
                return vector3f(); 
            } else {
                return vector3f(x, y, z, 1/f);
            }
        }

};

#endif