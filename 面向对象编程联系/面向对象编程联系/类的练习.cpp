#include<iostream>
using namespace std;
#include<string>
class Phone
{
public:
	virtual void PhoneInformation() = 0;
	Phone(int _num)
	{
		num = _num;
	}
private:
	int num;
};
class iPhone :public Phone 
{
public:
	iPhone(string _name, string _weight, string _RAM, string _ROM, float _price);
	virtual void PhoneInformation() 
	{
		cout << "手机型号：" << name <<"\n"<< "重量    :" << weight << endl;
	}
private:
	string name;
	string weight;
	string RAM;
	string ROM;
	float   price;
};

iPhone::iPhone(string _name, string _weight, string _RAM, string _ROM, float _price) :Phone(5)
{
	name = _name;
	weight = _weight;
	RAM = _RAM;
	ROM = _ROM;
	price = _price;
}
int main01()
{
	
	iPhone  a("iPhone8", "100g", "64G", "4G", 9999);
	Phone *p =&a;
	p->PhoneInformation();
cout<<"类的练习"<<endl;
return 0;
}