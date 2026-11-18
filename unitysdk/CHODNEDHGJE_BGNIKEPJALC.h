#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPBIMDNDPLK.h"
#include "unitysdk/System/Object.h"

#define CHODNEDHGJE_BGNIKEPJALC_GBECIDLLHOE_OFFSET UNITYSDK_OFFSET(0x159DA510)
#define CHODNEDHGJE_BGNIKEPJALC__CTOR_OFFSET UNITYSDK_OFFSET(0x159DA500)

inline static constexpr unsigned int CHODNEDHGJE_BGNIKEPJALC_TypeDefinitionIndex = 88594;

class CHODNEDHGJE_BGNIKEPJALC : public ::System::Object
{
public:
	::HPBIMDNDPLK NFNBKDIPIAP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHODNEDHGJE_BGNIKEPJALC__CTOR_OFFSET))(this);
	}

	::System::Void GBECIDLLHOE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHODNEDHGJE_BGNIKEPJALC_GBECIDLLHOE_OFFSET))(this);
	}
};
