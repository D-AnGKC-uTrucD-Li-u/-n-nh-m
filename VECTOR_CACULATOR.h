#pragma once
#include <iostream>
using namespace std;
#define max 50
static int n;

class VECTOR_CACULATOR
{
	private:
		float v[max];
		
		
		
	public:
		VECTOR_CACULATOR();
		void  nhapsl();
		void  caculator();
		void insl()
		{
			for (int i = 1; i <= n; i++)
			{
				cout << " " << v[i];
			}
			cout << endl;
		}
		VECTOR_CACULATOR cong(VECTOR_CACULATOR b, VECTOR_CACULATOR c)
		{
			VECTOR_CACULATOR d;
		
			for (int i = 1; i <= n; i++)
			
			{
				d.v[i] += c.v[i] + b.v[i];
				cout << d.v[i];
			}
			
			return d;
		}
		VECTOR_CACULATOR hieu(VECTOR_CACULATOR b, VECTOR_CACULATOR c)
		{
			VECTOR_CACULATOR d;
			for (int i = 1; i <= n; i++)
			{
				d.v[i] += c.v[i] - b.v[i];
			}
			return d;
		}
		VECTOR_CACULATOR nhan(VECTOR_CACULATOR b, VECTOR_CACULATOR c)
		{
			VECTOR_CACULATOR d;
			for (int i = 1; i <= n; i++)
			{
				d.v[i] += c.v[i] * b.v[i];
			}
			return d;
		}
	};


