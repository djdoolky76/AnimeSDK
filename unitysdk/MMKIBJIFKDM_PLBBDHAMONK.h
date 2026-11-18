#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MMKIBJIFKDM_PLBBDHAMONK_BLNAAMAEALD_OFFSET UNITYSDK_OFFSET(0x16CA59E0)
#define MMKIBJIFKDM_PLBBDHAMONK__CTOR_OFFSET UNITYSDK_OFFSET(0x16CA59D0)

inline static constexpr unsigned int MMKIBJIFKDM_PLBBDHAMONK_TypeDefinitionIndex = 53935;

class MMKIBJIFKDM_PLBBDHAMONK : public ::System::Object
{
public:
	::System::UInt32 FIOCHBBFGLA; // 0x10
	::System::UInt32 CDONJOHFOMM; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKIBJIFKDM_PLBBDHAMONK__CTOR_OFFSET))(this);
	}

	::System::Void BLNAAMAEALD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKIBJIFKDM_PLBBDHAMONK_BLNAAMAEALD_OFFSET))(this);
	}
};
