#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MKFNBHDICNJ_MJMKLPPGCDP_PBPPKFELBDO_OFFSET UNITYSDK_OFFSET(0x174A05E0)
#define MKFNBHDICNJ_MJMKLPPGCDP__CTOR_OFFSET UNITYSDK_OFFSET(0x174A05D0)

inline static constexpr unsigned int MKFNBHDICNJ_MJMKLPPGCDP_TypeDefinitionIndex = 61342;

class MKFNBHDICNJ_MJMKLPPGCDP : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_MJMKLPPGCDP__CTOR_OFFSET))(this);
	}

	::System::Void PBPPKFELBDO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_MJMKLPPGCDP_PBPPKFELBDO_OFFSET))(this);
	}
};
