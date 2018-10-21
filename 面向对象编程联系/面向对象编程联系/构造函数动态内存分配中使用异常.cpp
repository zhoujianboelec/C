#include<iostream>
#include<string>
using namespace std;


class CObject
{
public:
	CObject()
	{
		m_p = NULL;
		if (!init())
			release();
	}
	~CObject()
	{
		release();
	}
	bool init()
	{
		try
		{
			m_p = new string;
		}
		catch (...)
		{
			return false;
		}
		return true;
	}
	void release()
	{
		if (m_p == NULL)
			return;
		delete m_p;
		m_p = NULL;
	}
private:
	string *m_p=NULL;
};

int main()
{
	CObject a;
cout<<"hello world!"<<endl;
return 0;
}