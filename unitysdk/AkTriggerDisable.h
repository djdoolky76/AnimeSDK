#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerBase.h"

#define AKTRIGGERDISABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBC25B0)
#define AKTRIGGERDISABLE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1EBC2550)

inline static constexpr unsigned int AkTriggerDisable_TypeDefinitionIndex = 46038;

	class AkTriggerDisable : public ::AkTriggerBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERDISABLE_CTOR_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERDISABLE_ONDISABLE_OFFSET))(this);
		}

	};
