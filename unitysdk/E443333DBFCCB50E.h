#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E9F68A58DDE88B4D.h"

class A099F9C949937F0F;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }

#define E443333DBFCCB50E_B0802F70E82DF265_OFFSET UNITYSDK_OFFSET(0x1708410)
#define E443333DBFCCB50E_FEBA495D7EBB1A54_OFFSET UNITYSDK_OFFSET(0x1708690)
#define E443333DBFCCB50E__CTOR_OFFSET UNITYSDK_OFFSET(0x17086F0)

inline static constexpr unsigned int E443333DBFCCB50E_TypeDefinitionIndex = 650;

class E443333DBFCCB50E : public ::E9F68A58DDE88B4D
{
public:
	::ABC::Collections::Pooled::PooledList_1<::A099F9C949937F0F*>* EFEAEBFC04D01D36; // 0x18
	::A099F9C949937F0F* AA9D5462999DEABF; // 0x20

	::System::Boolean B0802F70E82DF265()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + E443333DBFCCB50E_B0802F70E82DF265_OFFSET))(this);
	}

	::System::Boolean FEBA495D7EBB1A54()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + E443333DBFCCB50E_FEBA495D7EBB1A54_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E443333DBFCCB50E__CTOR_OFFSET))(this);
	}
};
