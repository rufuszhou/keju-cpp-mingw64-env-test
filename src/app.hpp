
#ifndef __CAPP_HPP__
#define __CAPP_HPP__

class CApp
{
public:
	CApp(int a) : m_a(a) {}
	~CApp();

public:
	void set(int a) {
		m_a = a;
	}
	int get() {
		return m_a;
	}
	int inc() {
		m_a++;
	}
	int dec() {
		m_a--;
	}
private:
	int m_a;
};

#endif // __CAPP_HPP__
