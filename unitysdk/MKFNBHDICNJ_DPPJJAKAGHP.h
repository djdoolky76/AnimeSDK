#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MKFNBHDICNJ_DPPJJAKAGHP_GPAIKBBIGNH_OFFSET UNITYSDK_OFFSET(0x16C938F0)
#define MKFNBHDICNJ_DPPJJAKAGHP__CTOR_OFFSET UNITYSDK_OFFSET(0x16C938E0)

inline static constexpr unsigned int MKFNBHDICNJ_DPPJJAKAGHP_TypeDefinitionIndex = 61355;

class MKFNBHDICNJ_DPPJJAKAGHP : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_DPPJJAKAGHP__CTOR_OFFSET))(this);
	}

	::System::Void GPAIKBBIGNH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_DPPJJAKAGHP_GPAIKBBIGNH_OFFSET))(this);
	}
};
