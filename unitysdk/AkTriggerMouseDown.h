#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerBase.h"

#define AKTRIGGERMOUSEDOWN_ONMOUSEDOWN_OFFSET UNITYSDK_OFFSET(0x1D9763D0)
#define AKTRIGGERMOUSEDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9763F0)

inline static constexpr unsigned int AkTriggerMouseDown_TypeDefinitionIndex = 33373;

class AkTriggerMouseDown : public ::AkTriggerBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERMOUSEDOWN__CTOR_OFFSET))(this);
	}

	::System::Void OnMouseDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERMOUSEDOWN_ONMOUSEDOWN_OFFSET))(this);
	}
};
