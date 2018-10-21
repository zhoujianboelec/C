#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;
class A
{
private:
	int a[4];
public:
	A() :a{ 1,2,3,4 }
	{
		for (int i = 0; i < 4; i++)
			cout << a[i] << endl;
	}
};
class Cstring
{
public:
	Cstring(char *data,int a):m_pdata(data)
	{

	}
	Cstring (char *data)
	{
		m_pdata =data;
	}
	Cstring(const Cstring & rhs);
	Cstring & operator=(const Cstring &rhs);
	void play()
	{
		cout << m_pdata << endl;
	}
private:
	char *m_pdata;
	int m_nsize;
};
Cstring::Cstring(const Cstring & rhs)
{
m_pdata = new char[strlen(rhs.m_pdata) + 1];
strcpy(m_pdata, rhs.m_pdata);
}
Cstring& Cstring::operator=(const Cstring &rhs)
{
	if (this == &rhs)
		return *this;
	if (m_pdata != NULL)
		delete m_pdata;
	m_pdata = new char[strlen(rhs.m_pdata) + 1];
	strcpy(m_pdata, rhs.m_pdata);
	return *this;
}

double hmean(double a, double b)
{
	if (a == -b)
	{
		throw "bad hmean() arguments:a=-b not allowed";
	}
	return 2.0*a*b / (a + b);
}
int main001()
{
	A m;
	Cstring strSrc("Hello everyone!");
	Cstring strDst(strSrc);
	strDst.play();
	double x, y, z;
	cout << "enter two number" << endl;
	while (cin >> x >> y)
	{
		try {
			z = hmean(x, y);
		}
		catch (const char *s)
		{
			cout << s << std::endl;
			cout << "enter two numbers" << endl;
			continue;
		}
		cout << "Harmonic mean of " << x << "and" << y << "is" << z << endl;
	 }
cout<<"hello world!"<<endl;
return 0;
}