#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MONOHOLLOWRESULTPAGECONFIG_BLINKCONFIGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x13C15DB0)

inline static constexpr unsigned int MonoHollowResultPageConfig_BlinkConfigInfo_TypeDefinitionIndex = 63414;

class MonoHollowResultPageConfig_BlinkConfigInfo : public ::System::Object
{
public:
	::System::Object* BlinkMatrix; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOHOLLOWRESULTPAGECONFIG_BLINKCONFIGINFO__CTOR_OFFSET))(this);
	}
};
