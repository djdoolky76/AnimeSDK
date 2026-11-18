#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GBINEPNHKKO;

#define MBODLFKOJOP_KBONGBECLFK_OFFSET UNITYSDK_OFFSET(0x14D5EAB0)
#define MBODLFKOJOP_LOHDHEEKNJK_OFFSET UNITYSDK_OFFSET(0x14D5EAA0)
#define MBODLFKOJOP__CTOR_OFFSET UNITYSDK_OFFSET(0x14D5EA90)

inline static constexpr unsigned int MBODLFKOJOP_TypeDefinitionIndex = 81691;

class MBODLFKOJOP : public ::System::Object
{
public:
	::GBINEPNHKKO* JMINOGAOFIL; // 0x10
	::System::Boolean _NDEFKOJNEBL_k__BackingField; // 0x18

	::System::Void _ctor(::GBINEPNHKKO* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::GBINEPNHKKO*))((::PBYTE)hIl2Cpp + MBODLFKOJOP__CTOR_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Boolean LOHDHEEKNJK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MBODLFKOJOP_LOHDHEEKNJK_OFFSET))(this);
	}

	::System::Void KBONGBECLFK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MBODLFKOJOP_KBONGBECLFK_OFFSET))(this, EGEGIMGMJHN);
	}
};
