#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JJEAFFDIDAP;
namespace System { class Action; }

#define JJEAFFDIDAP_BANKODEDBDO_OJCIFKGFKAC_OFFSET UNITYSDK_OFFSET(0x15582070)
#define JJEAFFDIDAP_BANKODEDBDO__CTOR_OFFSET UNITYSDK_OFFSET(0x15582060)

inline static constexpr unsigned int JJEAFFDIDAP_BANKODEDBDO_TypeDefinitionIndex = 72519;

class JJEAFFDIDAP_BANKODEDBDO : public ::System::Object
{
public:
	::System::Action* HJCFPGNOMBM; // 0x10
	::JJEAFFDIDAP* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJEAFFDIDAP_BANKODEDBDO__CTOR_OFFSET))(this);
	}

	::System::Void OJCIFKGFKAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJEAFFDIDAP_BANKODEDBDO_OJCIFKGFKAC_OFFSET))(this);
	}
};
