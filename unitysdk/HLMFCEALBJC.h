#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBFPNONDKFG.h"

class KMNEAGCNPEF;

#define HLMFCEALBJC_ABDCJKILDFF_OFFSET UNITYSDK_OFFSET(0x1F68E500)
#define HLMFCEALBJC_GNLJIHOBBKD_OFFSET UNITYSDK_OFFSET(0x1F68E730)
#define HLMFCEALBJC__CTOR_OFFSET UNITYSDK_OFFSET(0x1F68E6A0)

inline static constexpr unsigned int HLMFCEALBJC_TypeDefinitionIndex = 95114;

class HLMFCEALBJC : public ::EBFPNONDKFG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMFCEALBJC__CTOR_OFFSET))(this);
	}

	::System::Void ABDCJKILDFF(::KMNEAGCNPEF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::KMNEAGCNPEF*))((::PBYTE)hIl2Cpp + HLMFCEALBJC_ABDCJKILDFF_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void GNLJIHOBBKD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMFCEALBJC_GNLJIHOBBKD_OFFSET))(this);
	}
};
