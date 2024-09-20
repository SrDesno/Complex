
#ifndef Complex_h
#define Complex_h


class Complex {
public:
Complex();
Complex(int r, int i);
int getReal();
void setReal(int r);
int getImag();
void setImag(int i);
Complex operator+(Complex another);
Complex operator-(Complex another);
//Compare complex numbers
bool operator==(Complex another);
bool operator!=(Complex another);
void print();
private:
int real, imag;
};
Complex::Complex() {
real = 0;
imag = 0;
}
Complex::Complex(int r, int i) {
real = r;
imag = i;
}
int Complex:: getReal() {
return real;
}
void Complex:: setReal(int r) {
real = r;
}
int Complex:: getImag() {
return imag;
}
void Complex:: setImag(int i) {
imag = i;
}
Complex Complex:: operator+(Complex another) {
Complex result;
result.real = real + another.real;
result.imag = imag + another.imag;
return result;
}
Complex Complex:: operator-(Complex another) {
Complex result;
result.real = real - another.real;
result.imag = imag - another.imag;
return result;
}
bool Complex::operator==(Complex another){
  if(this->real==another.real && this->imag==another.imag){
        return true;
  }
  else{
    return false;
  }
}

bool Complex::operator!=(Complex another){
  if(this->real!=another.real)||
    this->imag!=another.imag){
    return true;
    }
  else
    return false;
  //this will work only if you have defined before the ==
  return !(*this==another);
}

void Complex:: print() {
std::cout << "( " << real << ", " << imag << "i )"<< std::endl;
}
#endif /* Complex_h */
