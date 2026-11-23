#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerBase.h"

#define AKTRIGGERMOUSEUP_E4BFB2DE24502DB1_OFFSET UNITYSDK_OFFSET(0x2927A50)
#define AKTRIGGERMOUSEUP__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

inline static constexpr unsigned int AkTriggerMouseUp_TypeDefinitionIndex = 20435;

class AkTriggerMouseUp : public ::AkTriggerBase
{
public:
	::System::Void E4BFB2DE24502DB1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERMOUSEUP_E4BFB2DE24502DB1_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERMOUSEUP__CTOR_OFFSET))(this);
	}
};
