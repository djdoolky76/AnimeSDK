#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerBase.h"

#define AKTRIGGERMOUSEEXIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBC3980)

inline static constexpr unsigned int AkTriggerMouseExit_TypeDefinitionIndex = 46046;

	class AkTriggerMouseExit : public ::AkTriggerBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERMOUSEEXIT_CTOR_OFFSET))(this);
		}

	};
