#include <iostream>

using namespace std;

#include <iostream>
#include <conio.h>
#include<math.h>
#include <iomanip>
using namespace std;
//2d shapes: circle, square, equilateral triangle and regular hexagon
//center x,y location



class shape{
    protected:
        float x=0;
        float y=0;
        float length=0;
    public:
        virtual void get_data() = 0;
        virtual void display_area() = 0;
};



class triangle : public shape{
    public:
	void get_data(void)
        {
           cout<<"\n\n EQUILATERAL TRIANGLE\n";

            cout << "Enter x Coordinates for the center\n";
            cin >> x;
            cout << "Enter y Coordinates for the center\n";
            cin >> y;

            cout<< "\nEnter the length of side\n";
            cin >> length;
        }
	void display_area(void)
        {
            cout << "\n\n Area of Triangle \n\n";
            float aotriangle;
            aotriangle = sqrt(3)/4 *length *length;//(Square Root of 3) Divided by 4 (Multiplied by Length multiplied by the length)
            cout << "Area of Triangle is " << aotriangle;
        }
        int getx(){
	return x;
	}

	int gety(){
	return y;
	}
};

class square : public shape
{
public:
	void get_data(void)
	{
		cout << "\n\SQUARE\n\n";
		cout << "Enter x Coordinates for the center\n";
		cin >> x;
            cout << "Enter y Coordinates for the center\n";
            cin >> y;

            cout<< "\nEnter the length of side\n";
            cin >> length;

	}
	void display_area(void)
	{
		cout << "\n\n Area of SQUARE \n\n";
		float aoSquare;
		aoSquare = length * length;

            cout << std::fixed;
            cout << "Area of Rectangle is " << aoSquare;
	}
	int getx(){
	return x;
	}

	int gety(){
	return y;
	}
};

class circle : public shape{
    public:
	void get_data(void)
	{
		cout << "\n\n CIRCLE\n\n";
		cout << "Enter x Coordinates for the center\n";
		cin >> x;
            cout << "Enter y Coordinates for the center\n";
            cin >> y;;

		cout << "Enter the radius : \n";
		cin >> length;
	}

	void display_area(void)
	{
		cout << "\n\n Area of Circle \n\n";
		float aoCircle;
		aoCircle = 3.14* (length*length);
		cout << std::fixed;
		std::cout << "Area of Circle is " << aoCircle;
	}
	int getx(){
	return x;
	}

	int gety(){
	return y;
	}
};


class hexagon : public shape{
    public:
	void get_data(void)
	{
		cout << "\n\n HEXAGON \n\n";
		cout << "Enter x Coordinates for the center\n";
		cin >> x;
            cout << "Enter y Coordinates for the center\n";
            cin >> y;

		cout << "Enter the Length of side : \n";
		cin >> length;
	}

	void display_area(void)
	{
		cout << "\n\nArea of Hexagon\n\n";
		double aohexagon;
		aohexagon = (3* sqrt(3))/2 *(length*length);
		// 3)/2 x ( length x length)
		cout << "Area of Hexagon is " << aohexagon;
	}
	int getx(){
	return x;
	}

	int gety(){
	return y;
	}
};



int main()
{
    float dy;
    float dx;
    float f;
    float distance;

    circle mycircle;
	triangle mytriangle;
	square mysquare;
	hexagon myhexagon;


    mycircle.get_data();
    mycircle.display_area();

    mytriangle.get_data();
    mytriangle.display_area();

    mysquare.get_data();
    mysquare.display_area();

    myhexagon.get_data();
    myhexagon.display_area();

    //get distance between 2 shapes using the centers x and y.
    //Between circle and square.

    cout<<"Distance between circle and square\n";

         dy=mycircle.getx() - mysquare.getx();
         dx=mycircle.gety()-mysquare.gety();
         f=(dy*dy)+(dx*dx);
         distance=sqrt(f);

        cout<<"The distance between the two is"<<f<<" \n";

    cout<<"Distance between circle and hexagon\n";
         dy=mycircle.getx() - myhexagon.getx();
         dx=mycircle.gety()-myhexagon.gety();
         f=(dy*dy)+(dx*dx);
         distance=sqrt(f);

        cout<<"The distance between the two is"<<f<<" \n";


    cout<<"Distance between Square and hexagon\n";
         dy=mysquare.getx() - myhexagon.getx();
         dx=mysquare.gety()-myhexagon.gety();
         f=(dy*dy)+(dx*dx);
         distance=sqrt(f);

        cout<<"The distance between the two is"<<f<<" \n";

     cout<<"Distance between triangle and circle\n";
         dy=mytriangle.getx() - mycircle.getx();
         dx=mytriangle.gety()-mycircle.gety();
         f=(dy*dy)+(dx*dx);
         distance=sqrt(f);
        cout<<"The distance between the two is"<<f<<" \n";


    return 0;
}

