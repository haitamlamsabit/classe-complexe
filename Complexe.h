#pragma once
class Complexe
{
private:
	double re;
	double img;
public:
	Complexe(double, double);
	void afficher()const;
	Complexe(const Complexe & c);
	~Complexe();
	Complexe operator+(Complexe & s)const;
	Complexe operator+(int & s)const;
	Complexe operator+(double & s)const;
	Complexe operator-(Complexe& s)const;
	Complexe operator-(int& s)const;
	Complexe operator-(double& s)const;
	Complexe operator*(Complexe& s)const;
	Complexe operator*(int& s);
	Complexe operator*(double& s);
	Complexe operator/(Complexe& s)const;
	Complexe operator/(int& s);
	Complexe operator/(double& s);
	bool operator==(const Complexe& s)const;
	bool operator==(int & s)const;
	bool operator==(double& s)const;
	bool operator!=(const Complexe& s)const;
	bool operator!=(int& s)const;
	bool operator!=(double& s)const;
	bool operator>( Complexe& s)const;
	bool operator>(int& s)const;
	bool operator>(double& s)const;
	bool operator<( Complexe& s)const;
	bool operator<(int& s)const;
	bool operator<(double& s)const;
	bool operator>=(Complexe& s)const;
	bool operator>=(int& s)const;
	bool operator>=(double& s)const;
	bool operator<=(Complexe& s)const;
	bool operator<=(int& s)const;
	bool operator<=(double& s)const;


};

