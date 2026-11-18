#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJBPFFLIECG.h"

#define BODNHFPEEIJ_KIMJCGJHJAC_OFFSET UNITYSDK_OFFSET(0x18DB1200)
#define BODNHFPEEIJ_ONSTART_OFFSET UNITYSDK_OFFSET(0x18DB11C0)
#define BODNHFPEEIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18DB1240)

inline static constexpr unsigned int BODNHFPEEIJ_TypeDefinitionIndex = 46039;

class BODNHFPEEIJ : public ::DJBPFFLIECG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BODNHFPEEIJ__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BODNHFPEEIJ_ONSTART_OFFSET))(this);
	}

	::System::Void KIMJCGJHJAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BODNHFPEEIJ_KIMJCGJHJAC_OFFSET))(this);
	}
};
