#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HPEOAPPJILF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KADCICKDDID_ANPBCLAFCJB_OFFSET UNITYSDK_OFFSET(0x1748FE90)
#define KADCICKDDID__CTOR_OFFSET UNITYSDK_OFFSET(0x1748FDB0)

inline static constexpr unsigned int KADCICKDDID_TypeDefinitionIndex = 12435;

class KADCICKDDID : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Double>* DDIHMAEJEKN; // 0x10
	::System::Collections::Generic::List_1<::System::Double>* DHGMCEJBKFH; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* PLPHMLBNJBF; // 0x20
	::System::Collections::Generic::List_1<::System::Double>* KBGEPMGGDFG; // 0x28
	::System::Int32 IGNILNNJPJP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KADCICKDDID__CTOR_OFFSET))(this);
	}

	::System::Void ANPBCLAFCJB(::HPEOAPPJILF* LAOHOGEEBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HPEOAPPJILF*))((::PBYTE)hIl2Cpp + KADCICKDDID_ANPBCLAFCJB_OFFSET))(this, LAOHOGEEBCK);
	}
};
