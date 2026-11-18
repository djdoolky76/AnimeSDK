#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBFPNONDKFG.h"

class KMNEAGCNPEF;

#define PADPPPJIOOB_ABDCJKILDFF_OFFSET UNITYSDK_OFFSET(0x1FB88B30)
#define PADPPPJIOOB_GNLJIHOBBKD_OFFSET UNITYSDK_OFFSET(0x1FB88D60)
#define PADPPPJIOOB__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB88CD0)

inline static constexpr unsigned int PADPPPJIOOB_TypeDefinitionIndex = 95039;

class PADPPPJIOOB : public ::EBFPNONDKFG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PADPPPJIOOB__CTOR_OFFSET))(this);
	}

	::System::Void ABDCJKILDFF(::KMNEAGCNPEF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::KMNEAGCNPEF*))((::PBYTE)hIl2Cpp + PADPPPJIOOB_ABDCJKILDFF_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void GNLJIHOBBKD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PADPPPJIOOB_GNLJIHOBBKD_OFFSET))(this);
	}
};
