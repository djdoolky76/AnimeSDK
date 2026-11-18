#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/PCBJHAOEOEN.h"
#include "unitysdk/System/Object.h"

#define GKPHPHGJOME_OCDPGAKCAFH_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x14CF9270)
#define GKPHPHGJOME_OCDPGAKCAFH__CTOR_OFFSET UNITYSDK_OFFSET(0x14CF8F10)

inline static constexpr unsigned int GKPHPHGJOME_OCDPGAKCAFH_TypeDefinitionIndex = 66357;

class GKPHPHGJOME_OCDPGAKCAFH : public ::System::Object
{
public:
	::HOCDHMEPPEG BPKGJEDCGJE; // 0x10
	::HOCDHMEPPEG LPJKDNCAGBM; // 0x40
	::HOCDHMEPPEG EIBNDDFLHMG; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKPHPHGJOME_OCDPGAKCAFH__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL(::PCBJHAOEOEN KOBGAHDCAMA)
	{
		return ((::System::Void(*)(::PVOID, ::PCBJHAOEOEN))((::PBYTE)hIl2Cpp + GKPHPHGJOME_OCDPGAKCAFH_LIDNPLMPHAL_OFFSET))(this, KOBGAHDCAMA);
	}
};
