#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerBase.h"

#define AKTRIGGERMOUSEDOWN_AC916270D26B0DFB_OFFSET UNITYSDK_OFFSET(0x2927A50)
#define AKTRIGGERMOUSEDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

inline static constexpr unsigned int AkTriggerMouseDown_TypeDefinitionIndex = 20461;

class AkTriggerMouseDown : public ::AkTriggerBase
{
public:
	::System::Void AC916270D26B0DFB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERMOUSEDOWN_AC916270D26B0DFB_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERMOUSEDOWN__CTOR_OFFSET))(this);
	}
};
