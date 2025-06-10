#pragma once        
#include "Worker.h"

class FormalWorker : public Worker
{
private:
	double tax;                 // ����˰
	double realSalary;          // ʵ������
	static int formalCount;     // ��̬��������: ��ʽְ��������   (ֻ������, ���⻹��Ҫ��cpp�ļ��ж��� !!!)
	static double totalSalary;  // ��̬��������: ��ʽְ���ܹ��ʡ�ƽ������
public:
	FormalWorker();
	FormalWorker(const string& name, double basicSalary, double tax);
	virtual ~FormalWorker();

	double getTax();
	double getRealSalary() const;

	void show();                // �����ʽְ�����������������ʡ�����˰��ʵ������
	void showCount();    // �����ʽְ��������
	void showSalary();   // �����ʽְ�����ܹ��ʡ�ƽ������
};

/* ������������� (�������һ���������Ϣ) */
ostream& operator<<(ostream& cout, FormalWorker& f);