#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MGDOBCKEJOF.h"

#define NOAAEPMEMJK_PCEPOEIOFBN_OFFSET UNITYSDK_OFFSET(0x11F8D7E0)
#define NOAAEPMEMJK__CTOR_OFFSET UNITYSDK_OFFSET(0x11F8DB00)

inline static constexpr unsigned int NOAAEPMEMJK_TypeDefinitionIndex = 42049;

class NOAAEPMEMJK : public ::MGDOBCKEJOF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOAAEPMEMJK__CTOR_OFFSET))(this);
	}

	::System::Void PCEPOEIOFBN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOAAEPMEMJK_PCEPOEIOFBN_OFFSET))(this);
	}
};
