#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

class DACCMMPOFCH_HOIBJPKHINI;
class EMADFJAKIBG;

#define DACCMMPOFCH_BFCMKAIEKNM_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x193F4AF0)
#define DACCMMPOFCH_BFCMKAIEKNM__CTOR_OFFSET UNITYSDK_OFFSET(0x193F3440)

inline static constexpr unsigned int DACCMMPOFCH_BFCMKAIEKNM_TypeDefinitionIndex = 42815;

class DACCMMPOFCH_BFCMKAIEKNM : public ::System::Object
{
public:
	::DACCMMPOFCH_HOIBJPKHINI* FGBNBFHOKAA; // 0x10
	::HOCDHMEPPEG MMCKPLBLCIL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DACCMMPOFCH_BFCMKAIEKNM__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL(::EMADFJAKIBG* PJMOJNFEHLF)
	{
		return ((::System::Void(*)(::PVOID, ::EMADFJAKIBG*))((::PBYTE)hIl2Cpp + DACCMMPOFCH_BFCMKAIEKNM_LIDNPLMPHAL_OFFSET))(this, PJMOJNFEHLF);
	}
};
