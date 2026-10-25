#include "Complexe.h"
#include<iostream>
using namespace std;

Complexe::Complexe(double re, double img)
{
	this->re = re;
	this->img = img;
}

void Complexe::afficher() const
{
	std::cout << re << "+i" << img << std::endl;
}

Complexe::Complexe(const Complexe& c)
{
	this->re = c.re;
	this->img = c.img;
}

Complexe::~Complexe()
{
}
Complexe Complexe::operator+(Complexe& s) const
{
	Complexe *ret=new Complexe(0,0);
	ret->re = this->re+s.re;
	ret->img = this->img + s.img;


	return Complexe(*ret);
}
Complexe Complexe::operator+(int& s) const
{
	Complexe* ret = new Complexe(0, 0);
	ret->re = this->re + s;
	ret->img = this->img + 0;
	return Complexe(*ret);
}
Complexe Complexe::operator+(double& s) const
{
	Complexe* ret = new Complexe(0, 0);
	ret->re = this->re + s;
	ret->img = this->img + 0;
	return Complexe(*ret);
}
;
Complexe Complexe::operator-(Complexe& s) const
{
	Complexe* ret = new Complexe(0, 0);
	ret->re = this->re - s.re;
	ret->img = this->img - s.img;


	return Complexe(*ret);
}
Complexe Complexe::operator-(int& s) const
{
	Complexe* ret = new Complexe(0, 0);
	ret->re = this->re - s;
	ret->img = this->img - 0;
	return Complexe(*ret);
}
Complexe Complexe::operator-(double& s) const
{
	Complexe* ret = new Complexe(0, 0);
	ret->re = this->re - s;
	ret->img = this->img - 0;
	return Complexe(*ret);
}
Complexe Complexe::operator*(Complexe& s) const
{
	Complexe *prod1 = new Complexe(0, 0);
	Complexe *prod2 = new Complexe(0, 0);
	Complexe* ret = new Complexe(0, 0);
	
	prod1->re = this->re * s.re;
	prod1->img= this->re * s.img;
	prod2->re = -(this->img * s.img);
	prod2->img = this->img * s.re;
	ret->re = prod1->re + prod2->re;
	ret->img = prod1->img + prod2->img;

	return Complexe(*ret);
}
Complexe Complexe::operator*(int& s) 
{
	this->img = this->img * s;
	this->re = this->re* s;

	return Complexe(*this);
}
Complexe Complexe::operator*(double& s)
{
	this->img = this->img * s;
	this->re = this->re * s;

	return Complexe(*this);
}
Complexe Complexe::operator/(Complexe& s) const
{
	double d = s.re * s.re + (s.img * s.img);

	double r = (this->re * s.re +( this->img * s.img)) / d;
	double i = (this->img * s.re - (this->re * s.img)) / d;
	Complexe div(r, i);


	return Complexe(div);
}
;
Complexe Complexe::operator/(int& s)
{
	if (s == 0) { std::cout << "imposible" << endl; }
	else {
		this->img = this->img / s;
		this->re = this->re / s;

		return Complexe(*this);
	}
}
Complexe Complexe::operator/(double& s)
{
	if (s == 0) { std::cout << "imposible" << endl; }
	else {
		this->img = this->img / s;
		this->re = this->re / s;

		return Complexe(*this);
	}
}
bool Complexe::operator==(const Complexe& s) const
{
	if (this->img == s.img && this->re == s.re) {
		return 1;
	}
	else { return 0; };

}
bool Complexe::operator==(int& s) const
{
	if (this->re == s && this->img==0) { return 1; }
	else {
		return 0;
	};
}
;
bool Complexe::operator==(double& s) const
{
	if (this->re == s && this->img == 0) { return 1; }
	else {
		return 0;
	};
}
;
bool Complexe::operator!=(const Complexe& s) const
{
	if (this->img != s.img || this->re != s.re) {
		return 1;
	}
	else { return 0; };

}
bool Complexe::operator!=(int& s) const
{
	if (this->re == s && this->img == 0) { return 0; }
	else {
		return 1;
	};
}
;
bool Complexe::operator!=(double& s) const
{
	if (this->re == s && this->img == 0) { return 0; }
	else {
		return 1;
	};
}
bool Complexe::operator>( Complexe& s) const
{
	if (((this->img * this->img) + (this->re * this->re)) > ((s.img * s.img) + (s.re * s.re))) {
		return 1;
	}
	else return 0;
}
bool Complexe::operator>(int& s) const
{
	if ((this->img * this->img + this->re * this->re) > (s * s)) {
		return 1;
	}
	else { return 0; }
}
bool Complexe::operator>(double& s) const
{
	if ((this->img * this->img + this->re * this->re) > (s * s)) {
		return 1;
	}
	else { return 0; }
}
;
bool Complexe::operator<( Complexe& s) const
{
	if (((this->img * this->img) + (this->re * this->re)) < ((s.img * s.img) + (s.re * s.re))) {
		return 1;
	}
	else return 0;
}
bool Complexe::operator<(int& s) const
{
	if ((this->img * this->img + this->re * this->re) < (s * s)) {
		return 1;
	}
	else { return 0; }
}
bool Complexe::operator<(double& s) const
{
	if ((this->img * this->img + this->re * this->re) < (s * s)) {
		return 1;
	}
	else { return 0; }
}
;
bool Complexe::operator>=(Complexe& s) const
{
	if (((this->img * this->img) + (this->re * this->re)) >= ((s.img * s.img) + (s.re * s.re))) {
		return 1;
	}
	else return 0;
}
bool Complexe::operator>=(int& s) const
{
	if ((this->img * this->img + this->re * this->re) >= (s * s)  ){
		return 1;
	}
	else { return 0; }
}
bool Complexe::operator>=(double& s) const
{
	if (((this->img * this->img + this->re * this->re) >=(s * s))) {
		return 1;
	}
	else { return 0; }
}
;
bool Complexe::operator<=(Complexe& s) const
{
	if (((this->img * this->img) + (this->re * this->re)) <= ((s.img * s.img) + (s.re * s.re))) {
		return 1;
	}
	else return 0;
}
bool Complexe::operator<=(int& s) const
{
	if ((this->img * this->img + this->re * this->re) <= (s * s)) {
		return 1;
	}
	else { return 0; }
}
bool Complexe::operator<=(double& s) const
{
	if (((this->img * this->img + this->re * this->re) <= (s * s))) {
		return 1;
	}
	else { return 0; }
}
;





