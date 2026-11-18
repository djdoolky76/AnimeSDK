#pragma once
#include "unitysdk/unitysdk.h"

class AOKNFPPGDEJ;

#define NPDPFEAKJDO_ABDCJKILDFF_OFFSET UNITYSDK_OFFSET(0x1F1339F0)
#define NPDPFEAKJDO__CTOR_OFFSET UNITYSDK_OFFSET(0x1F133B50)

inline static constexpr unsigned int NPDPFEAKJDO_TypeDefinitionIndex = 95083;

class NPDPFEAKJDO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPDPFEAKJDO__CTOR_OFFSET))(this);
	}

	::System::Void ABDCJKILDFF(::AOKNFPPGDEJ* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::AOKNFPPGDEJ*))((::PBYTE)hIl2Cpp + NPDPFEAKJDO_ABDCJKILDFF_OFFSET))(this, AAOCANGHBDG);
	}
};
