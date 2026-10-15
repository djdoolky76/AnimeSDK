#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerBase.h"

#define AKTRIGGERMOUSEUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5EB980)

inline static constexpr unsigned int AkTriggerMouseUp_TypeDefinitionIndex = 44972;

	class AkTriggerMouseUp : public ::AkTriggerBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERMOUSEUP_CTOR_OFFSET))(this);
		}

	};
