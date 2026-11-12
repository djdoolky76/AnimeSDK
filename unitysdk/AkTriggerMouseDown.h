#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerBase.h"

#define AKTRIGGERMOUSEDOWN_CTOR_OFFSET UNITYSDK_OFFSET(0x208C9080)

inline static constexpr unsigned int AkTriggerMouseDown_TypeDefinitionIndex = 46044;

	class AkTriggerMouseDown : public ::AkTriggerBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERMOUSEDOWN_CTOR_OFFSET))(this);
		}

	};
