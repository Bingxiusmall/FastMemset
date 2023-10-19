#ifndef FASTMEMSET_HPP
#define FASTMEMSET_HPP 
#if __cplusplus < 201103L
#include<bits/c++0x_warning.h>
#else
template<typename T,unsigned long long n>
class fastmemset{
	public:
		typedef unsigned long long size_t;
		typedef unsigned long long time_t;
		const size_t len=n;
	private:
		time_t t,k;
		T mem;
		class data{
			private:
				fastmemset *f;
				T val;
				time_t valt;
				friend class fastmemset;
				data(){}
			public:
				data &operator=(const T other){++f->k,valt=f->k,val=other;return *this;}
				operator T(){return valt<f->t?f->mem:val;}
		};
		data datas[n];
	public:
		fastmemset(T init_val=T()):t(0),k(1){for(size_t i=0;i<n;++i) datas[i].val=init_val,datas[i].valt=1,datas[i].f=this;}
		data &operator[](size_t ind){return datas[ind];}
		fastmemset &set(T val){++k,t=k,mem=val;return *this;}
};
#endif
#endif
