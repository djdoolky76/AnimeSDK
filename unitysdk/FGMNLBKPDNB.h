#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NCCKMEOKAJK.h"

#define FGMNLBKPDNB_KNDMMHPDPIB_OFFSET UNITYSDK_OFFSET(0x191C2540)
#define FGMNLBKPDNB__CTOR_OFFSET UNITYSDK_OFFSET(0x191C2530)

inline static constexpr unsigned int FGMNLBKPDNB_TypeDefinitionIndex = 88294;

class FGMNLBKPDNB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMNLBKPDNB__CTOR_OFFSET))(this);
	}

	::System::Void KNDMMHPDPIB(::NCCKMEOKAJK& HBMGHPEPBNC)
	{
		return ((::System::Void(*)(::PVOID, ::NCCKMEOKAJK&))((::PBYTE)hIl2Cpp + FGMNLBKPDNB_KNDMMHPDPIB_OFFSET))(this, HBMGHPEPBNC);
	}
};
