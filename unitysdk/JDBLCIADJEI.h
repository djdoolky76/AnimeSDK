#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MPKBDIJDMAP.h"

class APOLLOBLGOE;

#define JDBLCIADJEI_JGEKEKBAFAM_OFFSET UNITYSDK_OFFSET(0x1659C260)
#define JDBLCIADJEI__CTOR_OFFSET UNITYSDK_OFFSET(0x1659C2A0)

inline static constexpr unsigned int JDBLCIADJEI_TypeDefinitionIndex = 91923;

class JDBLCIADJEI : public ::MPKBDIJDMAP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDBLCIADJEI__CTOR_OFFSET))(this);
	}

	::APOLLOBLGOE* JGEKEKBAFAM()
	{
		return ((::APOLLOBLGOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDBLCIADJEI_JGEKEKBAFAM_OFFSET))(this);
	}
};
