#pragma once
#include "unitysdk/unitysdk.h"

class AOKNFPPGDEJ;

#define PHCAHJHIFEJ_ABDCJKILDFF_OFFSET UNITYSDK_OFFSET(0x1F5BC290)
#define PHCAHJHIFEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5BC3C0)

inline static constexpr unsigned int PHCAHJHIFEJ_TypeDefinitionIndex = 95011;

class PHCAHJHIFEJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCAHJHIFEJ__CTOR_OFFSET))(this);
	}

	::System::Void ABDCJKILDFF(::AOKNFPPGDEJ* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::AOKNFPPGDEJ*))((::PBYTE)hIl2Cpp + PHCAHJHIFEJ_ABDCJKILDFF_OFFSET))(this, AAOCANGHBDG);
	}
};
