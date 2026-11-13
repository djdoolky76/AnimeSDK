#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerBase.h"

#define AKTRIGGERENABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBC25C0)

inline static constexpr unsigned int AkTriggerEnable_TypeDefinitionIndex = 46039;

	class AkTriggerEnable : public ::AkTriggerBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERENABLE_CTOR_OFFSET))(this);
		}

	};
