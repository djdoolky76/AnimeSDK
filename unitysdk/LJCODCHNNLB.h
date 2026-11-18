#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;

#define LJCODCHNNLB_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x158E5960)
#define LJCODCHNNLB__CTOR_OFFSET UNITYSDK_OFFSET(0x158E5AC0)

inline static constexpr unsigned int LJCODCHNNLB_TypeDefinitionIndex = 88998;

class LJCODCHNNLB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJCODCHNNLB__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::BPHGNMNLLHF* FFKBEGIHIGG, ::BPHGNMNLLHF* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::BPHGNMNLLHF*, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + LJCODCHNNLB_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
