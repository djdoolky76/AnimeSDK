#pragma once
#include "unitysdk/unitysdk.h"

class AOKNFPPGDEJ;

#define FOJLOPBAKAB_ABDCJKILDFF_OFFSET UNITYSDK_OFFSET(0x1EEE4D90)
#define FOJLOPBAKAB__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEE4F00)

inline static constexpr unsigned int FOJLOPBAKAB_TypeDefinitionIndex = 94954;

class FOJLOPBAKAB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJLOPBAKAB__CTOR_OFFSET))(this);
	}

	::System::Void ABDCJKILDFF(::AOKNFPPGDEJ* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::AOKNFPPGDEJ*))((::PBYTE)hIl2Cpp + FOJLOPBAKAB_ABDCJKILDFF_OFFSET))(this, AAOCANGHBDG);
	}
};
