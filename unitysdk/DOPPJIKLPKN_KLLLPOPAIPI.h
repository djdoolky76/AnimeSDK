#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPNMOPAGMDD;

#define DOPPJIKLPKN_KLLLPOPAIPI_JPINAFCDMPD_OFFSET UNITYSDK_OFFSET(0x148BE3E0)
#define DOPPJIKLPKN_KLLLPOPAIPI__CTOR_OFFSET UNITYSDK_OFFSET(0x148BE3D0)

inline static constexpr unsigned int DOPPJIKLPKN_KLLLPOPAIPI_TypeDefinitionIndex = 64490;

class DOPPJIKLPKN_KLLLPOPAIPI : public ::System::Object
{
public:
	::BPNMOPAGMDD* DJCNCELJPOM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOPPJIKLPKN_KLLLPOPAIPI__CTOR_OFFSET))(this);
	}

	::System::Void JPINAFCDMPD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOPPJIKLPKN_KLLLPOPAIPI_JPINAFCDMPD_OFFSET))(this);
	}
};
