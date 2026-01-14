#include <iostream>
using namespace std;
/*
    Authored by Chaitanya Datar
    Panel F
    1262242226
*/

class Rectangle{
    private:
        double area;
    
    public:
        double length;
        double width;

        Rectangle(double length, double width){
            this->length = length;
            this->width = width;
            this->area = length * width;

            cout << "successfully created a Rectangle object\n";
        }

        void getArea(){
            cout << "Area is " << area << "\n";
        }
};

class Square{
    private:
        double area;
        
        bool validate(double length, double width){
            return(length == width);
        }
    
    public:
        double length;
        double width;
        bool isValid;

        Square(double length, double width){
            this->length = length;
            this->width = width;
            this->isValid = validate(length, width);
            this->area = length * width;
        }

        void getArea(){
            cout << "Area is " << area << "\n";
        }
};

class Triangle{
    private:
        double area;
    
    public:
        double base;
        double height;

        Triangle(double base, double height){
            this->base = base;
            this->height = height;
            this->area = (base * height) / 2;

            cout << "successfully created a Triangle object\n";
        }

        void getArea(){
            cout << "Area is " << area << "\n";
        }
};

class Circle{
    private:
        double area;
    
    public:
        double radius;

        Circle(double radius){
            this->radius = radius;
            this->area = 3.14 * (radius * radius);

            cout << "successfully created a Circle object\n";
        }

        void getArea(){
            cout << "Area is " << area << "\n";
        }
};

class Cylinder{
    private:
        double volume;
    
    public:
        double radius;
        double height;

        Cylinder(double radius, double height){
            this->radius = radius;
            this->height = height;
            this->volume = 3.14 * radius * radius * height;

            cout << "successfully created a Cylinder object\n";
        }

        void getVolume(){
            cout << "Volume is " << volume << "\n";
        }
};

class Sphere{
    private:
        double volume;
    
    public:
        double radius;

        Sphere(double radius){
            this->radius = radius;
            this->volume = 4.0 / 3.0 * 3.14 * (radius * radius * radius);

            cout << "successfully created a Sphere object\n";
        }

        void getVolume(){
            cout << "Volume is " << volume << "\n";
        }
};

void recArea(bool isSquare){
    double length;
    cout << "Enter Length: ";
    cin >> length;

    double width;
    cout << "Enter Width: ";
    cin >> width;
    
    if(isSquare && length != width){
        cout << "Invalid Square! Length != Width\n";
    }
    else{
        cout << "Area is " << length * width << "\n";
    }

}

void triArea(){
    double base;
    cout << "Enter Base: ";
    cin >> base;

    double height;
    cout << "Enter Height: ";
    cin >> height;

    cout << "Area is " << 0.5*(base * height) << "\n";
}

void circArea(){
    double radius;
    cout << "Enter Radius: ";
    cin >> radius;

    cout << "Area is " << 3.14 * (radius * radius) << "\n";
}

void cylVolume(){
    double radius;
    cout << "Enter Radius: ";
    cin >> radius;

    double height;
    cout << "Enter Height: ";
    cin >> height;

    cout << "Volume is " << 3.14 * radius * radius * height << "\n";
}

void sphVolume(){
    double radius;
    cout << "Enter Radius: ";
    cin >> radius;

    cout << "Volume is " << 4.0 / 3.0 * 3.14 * (radius * radius * radius) << "\n";
}

int main(){
    cout << "Hello World\n";

    char yn = 'y';
    while(yn == 'y'){
        int choice;
        cout << "Enter the number for the shape for which you want to find the area/volume\n1 Rectangle\n2 Square\n3 Triangle\n4 Circle\n5 Cylinder\n6 Sphere\n";
        cin >> choice;
        switch(choice){
            char op;
            case 1:
                cout << "Object Oriented or Procedure? o/p: ";
                cin >> op;
                if(op == 'o'){
                    double length;
                    cout << "Enter Length: ";
                    cin >> length;

                    double width;
                    cout << "Enter Width: ";
                    cin >> width;
                    Rectangle rect(length, width);
                    rect.getArea();
                }
                else{
                    recArea(false);
                }
                break;
            
            case 2:
                cout << "Object Oriented or Procedure? o/p: ";
                cin >> op;
                if(op == 'o'){
                    double length;
                    cout << "Enter Length: ";
                    cin >> length;

                    double width;
                    cout << "Enter Width: ";
                    cin >> width;
                    Square s(length, width);
                    if(s.isValid){
                        s.getArea();
                    }
                    else{
                        cout << "Invalid Square! Length != Width\n";
                    }
                }
                else{
                    recArea(true);
                }
                break;
            
            case 3:
                cout << "Object Oriented or Procedure? o/p: ";
                cin >> op;
                if(op == 'o'){
                    double base;
                    cout << "Enter Base: ";
                    cin >> base;

                    double height;
                    cout << "Enter Height: ";
                    cin >> height;

                    Triangle t(base, height);
                    t.getArea();
                }
                else{
                    triArea();
                }
                break;
            
            case 4:
                cout << "Object Oriented or Procedure? o/p: ";
                cin >> op;
                if(op == 'o'){
                    double radius;
                    cout << "Enter Radius: ";
                    cin >> radius;

                    Circle c(radius);
                    c.getArea();
                }
                else{
                    circArea();
                }
                break;

            case 5:
                cout << "Object Oriented or Procedure? o/p: ";
                cin >> op;
                if(op == 'o'){
                    double radius;
                    cout << "Enter Radius: ";
                    cin >> radius;

                    double height;
                    cout << "Enter Height: ";
                    cin >> height;

                    Cylinder c(radius, height);
                    c.getVolume();
                }
                else{
                    cylVolume();
                }
                break;
            
            case 6:
                cout << "Object Oriented or Procedure? o/p: ";
                cin >> op;
                if(op == 'o'){
                    double radius;
                    cout << "Enter Radius: ";
                    cin >> radius;

                    Sphere c(radius);
                    c.getVolume();
                }
                else{
                    circArea();
                }
                break;
            
            default:
                cout << "Enter valid operation\n";
        }

        cout << "again? y/n: ";
        cin >> yn;
    }

    return(0);
}
