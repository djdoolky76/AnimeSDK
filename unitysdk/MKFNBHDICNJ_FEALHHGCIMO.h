#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MKFNBHDICNJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MKFNBHDICNJ_FEALHHGCIMO_FOEOEAFBLOI_OFFSET UNITYSDK_OFFSET(0x174A04B0)
#define MKFNBHDICNJ_FEALHHGCIMO_JIEIFBNOIEF_OFFSET UNITYSDK_OFFSET(0x174A0300)
#define MKFNBHDICNJ_FEALHHGCIMO__CTOR_OFFSET UNITYSDK_OFFSET(0x174A02F0)

inline static constexpr unsigned int MKFNBHDICNJ_FEALHHGCIMO_TypeDefinitionIndex = 61407;

class MKFNBHDICNJ_FEALHHGCIMO : public ::System::Object
{
public:
	::MKFNBHDICNJ* KLHPEBKNIFB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* GLLBPJMGHBF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_FEALHHGCIMO__CTOR_OFFSET))(this);
	}

	::System::Void JIEIFBNOIEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_FEALHHGCIMO_JIEIFBNOIEF_OFFSET))(this);
	}

	::System::Void FOEOEAFBLOI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_FEALHHGCIMO_FOEOEAFBLOI_OFFSET))(this);
	}
};
