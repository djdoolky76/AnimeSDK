#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKMJPMFCNBK.h"

#define MEKGNJMBGHE_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x1404BDE0)
#define MEKGNJMBGHE_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x1404BEE0)
#define MEKGNJMBGHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1404BE70)

inline static constexpr unsigned int MEKGNJMBGHE_TypeDefinitionIndex = 90938;

class MEKGNJMBGHE : public ::PKMJPMFCNBK
{
public:
	::System::Int32 KFAJBJFKHJL; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKGNJMBGHE__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKGNJMBGHE_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKGNJMBGHE_KHJELIBOECB_OFFSET))(this);
	}
};
