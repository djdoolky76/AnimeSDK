#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerBase.h"

#define AKTRIGGERMOUSEEXIT_A8FB63E3E2469137_OFFSET UNITYSDK_OFFSET(0x2927A50)
#define AKTRIGGERMOUSEEXIT__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

inline static constexpr unsigned int AkTriggerMouseExit_TypeDefinitionIndex = 20457;

class AkTriggerMouseExit : public ::AkTriggerBase
{
public:
	::System::Void A8FB63E3E2469137()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERMOUSEEXIT_A8FB63E3E2469137_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERMOUSEEXIT__CTOR_OFFSET))(this);
	}
};
