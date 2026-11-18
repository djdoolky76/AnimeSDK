#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MELFFONPBBD;
class MKFNBHDICNJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MKFNBHDICNJ_HBDJLGCGFAF_GABILMOLBKE_OFFSET UNITYSDK_OFFSET(0x1A6958E0)
#define MKFNBHDICNJ_HBDJLGCGFAF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A693410)

inline static constexpr unsigned int MKFNBHDICNJ_HBDJLGCGFAF_TypeDefinitionIndex = 61398;

class MKFNBHDICNJ_HBDJLGCGFAF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MELFFONPBBD*>* EAAJHJCODAF; // 0x10
	::MKFNBHDICNJ* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_HBDJLGCGFAF__CTOR_OFFSET))(this);
	}

	::System::Void GABILMOLBKE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_HBDJLGCGFAF_GABILMOLBKE_OFFSET))(this);
	}
};
