#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBGGDKBCNMO.h"
#include "unitysdk/NFAPDCFMANE.h"

#define OMNOMLLIALD_GIHKAABJAFI_OFFSET UNITYSDK_OFFSET(0xFB9B050)
#define OMNOMLLIALD__CTOR_OFFSET UNITYSDK_OFFSET(0xFB9B060)

inline static constexpr unsigned int OMNOMLLIALD_TypeDefinitionIndex = 78888;

class OMNOMLLIALD : public ::NFAPDCFMANE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNOMLLIALD__CTOR_OFFSET))(this);
	}

	::JBGGDKBCNMO GIHKAABJAFI()
	{
		return ((::JBGGDKBCNMO(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNOMLLIALD_GIHKAABJAFI_OFFSET))(this);
	}
};
