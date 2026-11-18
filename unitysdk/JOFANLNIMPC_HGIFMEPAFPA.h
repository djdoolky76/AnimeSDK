#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JOFANLNIMPC.h"

#define JOFANLNIMPC_HGIFMEPAFPA_ANMILIONGKA_OFFSET UNITYSDK_OFFSET(0x157D4870)
#define JOFANLNIMPC_HGIFMEPAFPA__CTOR_OFFSET UNITYSDK_OFFSET(0x157D4860)

inline static constexpr unsigned int JOFANLNIMPC_HGIFMEPAFPA_TypeDefinitionIndex = 54092;

class JOFANLNIMPC_HGIFMEPAFPA : public ::System::Object
{
public:
	::System::Single IMEDAEEHLHB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFANLNIMPC_HGIFMEPAFPA__CTOR_OFFSET))(this);
	}

	::System::Void ANMILIONGKA(::JOFANLNIMPC& LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::JOFANLNIMPC&))((::PBYTE)hIl2Cpp + JOFANLNIMPC_HGIFMEPAFPA_ANMILIONGKA_OFFSET))(this, LJBPECKCCEA);
	}
};
