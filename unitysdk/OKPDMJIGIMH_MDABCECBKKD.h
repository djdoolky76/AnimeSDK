#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }

#define OKPDMJIGIMH_MDABCECBKKD_KGAKJIHCCHG_OFFSET UNITYSDK_OFFSET(0x12943870)
#define OKPDMJIGIMH_MDABCECBKKD__CTOR_OFFSET UNITYSDK_OFFSET(0x12943860)

inline static constexpr unsigned int OKPDMJIGIMH_MDABCECBKKD_TypeDefinitionIndex = 70748;

class OKPDMJIGIMH_MDABCECBKKD : public ::System::Object
{
public:
	::MoleMole::UIBaseController* AEJBCMBCDJE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPDMJIGIMH_MDABCECBKKD__CTOR_OFFSET))(this);
	}

	::System::Void KGAKJIHCCHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPDMJIGIMH_MDABCECBKKD_KGAKJIHCCHG_OFFSET))(this);
	}
};
