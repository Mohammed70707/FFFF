/*
My name : mohammed awad musa
Class:second 
Department:computer
*/
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Shape 
{
protected:  
    float pi = 3.14; 
    int radius;
    int  width;
    int height;
public:
    void set_Width()
    {
        cout << "Width =";
        cin >> width;
    }
    void set_Height() 
    {
        cout << "Height =";
        cin >> height;
    }
    void set_Radius() 
    {
        cout << "Radius =";
        cin >> radius;
    }
    virtual int area(void)=0;

    void printArea(void) 
    {
        cout << "The Area =\n";
        cout<< this->area()<<"\n";
    }
    virtual int perimeter(void)=0; 

    void printOcean(void) 
    {
        cout<< "The perimeter =\n";
        cout<< this->perimeter() <<"\n";
    }
};
class Polygon : public Shape
{
 public:
    int area() 
    {
        return (radius * width * height);
    }
    int perimeter() 
    {
        return (width * height);
    }
};
class Triangle : public Polygon 
{
public : 
    int area() 
    {
        return (0.5*width*height);
    }
    int perimeter() 
    {
       return (width + height*2);
    }
  };  
class Rectangl : public Polygon 
{
public : 
    int area() 
    {
        return (width*height);
    }
    int perimeter() 
    {
        return (2*width+2*height);
    }
};
class Square : public Polygon 
{
public : 
    int area() 
    {
        return (height * height);
    }
    int perimeter () 
    {
        return (4*height);
    }
};
class Ellipse : public Shape 
{
public : 
    int area() 
    {
        return (pi * width * height);
    }
    int preimeter() 
    {
        return (pi*(radius*radius));
    }
};
class Circle : public Ellipse 
{
    public :
    int area () 
    {
        return (pi/4*(radius*radius));
    }
    int perimeter () 
    {
        return (pi*radius);
    }
};

int main() 
{
    Polygon poly ;
    Triangle tria ; 
    Rectangl rect ;
    Square squa ;
    Ellipse elli ;
    Circle circ ;

    Shape *pointer1 = &poly;     
    Shape *pointer2 = &elli;     
    Polygon *pointer3 = &tria;  
    Polygon *pointer4 = &rect;  
    Polygon *pointer5 = &squa;   
    Ellipse *pointer6 = &circ;   

    cout << "the area and perimeter  \n";

    cout << "\n enter the value of polypon's width , height and Radius :\n";
    pointer1->set_Width();
    pointer1->set_Height();
    pointer1->set_Radius();

    cout << "\n enter the value of Ellipse's width , height and Radius :\n";
    pointer2->set_Width();
    pointer2->set_Height();
    pointer2->set_Radius();

    cout << "\n enter the value of Triangle's width , height and Radius :\n";
    pointer3->set_Width();
    pointer3->set_Height();

    cout << "\n enter the value of Rectangle's width , height  :\n";
    pointer4->set_Width();
    pointer4->set_Height();

    cout << "\n enter the value of Square's height :\n";
    pointer5->set_Height();

    cout << "\n enter the value of Circle's Radius :\n";
    pointer6->set_Radius();

    cout<< "\n >>> THE FINL RESULT <<< \n";

    cout << "\nTHE POLYGON :\n"; 
    pointer1->printArea();
    pointer1->printOcean();
    
    cout<< "\nTHE ELLIPSE :\n"; 
    pointer2->printArea();
    pointer2->printOcean();

    cout << "\nTHE TRIANGLE :"; 
    pointer3->printArea();
    pointer3->printOcean();

    cout << "\nTHE RECTANGL :\n"; 
    pointer4->printArea();
    pointer4->printOcean();

    cout << "\nTHE SQUARE :\n"; 
    pointer5->printArea();
    pointer5->printOcean();

    cout << "\nCIRCLE :\n"; 
    pointer6->printArea();
    pointer6->printOcean();
return 0;

}
