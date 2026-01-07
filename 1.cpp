#include <iostream>
using namespace std;

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

double triArea(double base, double height){
    return((base * height) / 2);
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
                double base;
                cout << "Enter Base: ";
                cin >> base;

                double height;
                cout << "Enter Height: ";
                cin >> height;

                cout << "Object Oriented or Procedure? o/p: ";
                cin >> op;
                if(op == 'o'){
                    Triangle t(base, height);
                    t.getArea();
                }
                else{
                    cout << "Area is " << triArea(base, height) << "\n";
                }
                break;
        }

        cout << "again? y/n: ";
        cin >> yn;
    }

    return(0);
}
