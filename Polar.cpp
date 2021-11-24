#include <iostream>
#include <cmath>

using std::cout;

class Polar
{
private:    
	float angle;
    float radius;

public:

	Polar():angle(0),radius(0){}
	Polar(float angle_2,float radius_2):angle(angle_2),radius(radius_2){}

	void putData()
	{
		cout<<"\nPolar Data";
		cout<<"\nAngle = "<< angle << ", Radius = " << radius <<" ";
	}

	float getAngle()
	{
		return angle;
	}

	float getRadius()
	{
		return radius;
	}

 friend Polar operator+(Polar& p1,Polar& p2)
    {
        Polar p3;
        p3.angle = p1.angle + p2.angle;
        p3.radius = p1.radius + p2.radius;
        return p3;
    }
};

class Rect
{
private:
	float x;
    float y;

public:

	Rect(){}
	Rect(float x_1,float y_1):x(x_1),y(y_1){}

	void putData()
	{
		cout << "Rect Data";
		cout << "\nX = "<<x<<", Y = " << y << " ";
	}

	Rect(Polar p)
	{		
		x = p.getRadius() * cos(3.14 * p.getAngle()/180);     //x = r * cos(a);
		y = p.getRadius() * sin(3.14 * p.getAngle()/180);     //y = r * sin(a);
	}

friend Rect operator+(Rect & r1,Rect & r2)
	{
		Rect r3;
		r3.x=r1.x+r2.x;
		r3.y=r1.y+r2.y;
		return r3;
	}
	
};

int main()
{
	Polar p1(2,3);
	Polar p2(4,5);
    Polar p3 = p1 + p2;
	Rect r1(p1);
    Rect r2(p2);
    Rect r3 = r1+r2;
	r3.putData();
	p3.putData();
	return 0;
}