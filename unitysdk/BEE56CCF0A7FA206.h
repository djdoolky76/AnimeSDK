#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F2455BDE35B7F9B3.h"
#include "unitysdk/System/Object.h"

class AB642D1382756991;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BEE56CCF0A7FA206_AF8178D479E067EC_OFFSET UNITYSDK_OFFSET(0x17D46E0)
#define BEE56CCF0A7FA206_BD35B438DBFC126A_OFFSET UNITYSDK_OFFSET(0x17D5290)
#define BEE56CCF0A7FA206_F22559323A9F9347_OFFSET UNITYSDK_OFFSET(0x17D52E0)
#define BEE56CCF0A7FA206__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BEE56CCF0A7FA206_TypeDefinitionIndex = 989;

class BEE56CCF0A7FA206 : public ::System::Object
{
public:
	::System::Int32 A63B979A53D8D9F5; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::F2455BDE35B7F9B3>* BF10C7DC07D2B61F; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEE56CCF0A7FA206__CTOR_OFFSET))(this);
	}

	::System::Void AF8178D479E067EC(::System::Collections::Generic::List_1<::AB642D1382756991*>*& F4242D32F4411AAA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::AB642D1382756991*>*&))((::PBYTE)hIl2Cpp + BEE56CCF0A7FA206_AF8178D479E067EC_OFFSET))(this, F4242D32F4411AAA);
	}

	::System::Boolean BD35B438DBFC126A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEE56CCF0A7FA206_BD35B438DBFC126A_OFFSET))(this);
	}

	::System::Void F22559323A9F9347(::System::Int32 A7443E7D25D3D43B)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEE56CCF0A7FA206_F22559323A9F9347_OFFSET))(this, A7443E7D25D3D43B);
	}
};
