#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerBase.h"

#define AKTRIGGERMOUSEENTER_CTOR_OFFSET UNITYSDK_OFFSET(0x208C9090)

inline static constexpr unsigned int AkTriggerMouseEnter_TypeDefinitionIndex = 46045;

	class AkTriggerMouseEnter : public ::AkTriggerBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERMOUSEENTER_CTOR_OFFSET))(this);
		}

	};
