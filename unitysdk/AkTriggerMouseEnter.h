#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerBase.h"

#define AKTRIGGERMOUSEENTER_B2E030CD193A3897_OFFSET UNITYSDK_OFFSET(0x2927A50)
#define AKTRIGGERMOUSEENTER__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

inline static constexpr unsigned int AkTriggerMouseEnter_TypeDefinitionIndex = 20450;

class AkTriggerMouseEnter : public ::AkTriggerBase
{
public:
	::System::Void B2E030CD193A3897()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERMOUSEENTER_B2E030CD193A3897_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERMOUSEENTER__CTOR_OFFSET))(this);
	}
};
