#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerBase.h"

#define AKTRIGGERDISABLE_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x2927A50)
#define AKTRIGGERDISABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

inline static constexpr unsigned int AkTriggerDisable_TypeDefinitionIndex = 20441;

class AkTriggerDisable : public ::AkTriggerBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERDISABLE__CTOR_OFFSET))(this);
	}

	::System::Void A28D6A0C3E793E7D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERDISABLE_A28D6A0C3E793E7D_OFFSET))(this);
	}
};
