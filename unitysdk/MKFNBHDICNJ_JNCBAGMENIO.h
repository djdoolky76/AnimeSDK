#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MKFNBHDICNJ;
namespace System { class Action; }

#define MKFNBHDICNJ_JNCBAGMENIO_HOEPNGNAPGL_OFFSET UNITYSDK_OFFSET(0x16C93910)
#define MKFNBHDICNJ_JNCBAGMENIO__CTOR_OFFSET UNITYSDK_OFFSET(0x16C93900)

inline static constexpr unsigned int MKFNBHDICNJ_JNCBAGMENIO_TypeDefinitionIndex = 61327;

class MKFNBHDICNJ_JNCBAGMENIO : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::MKFNBHDICNJ* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_JNCBAGMENIO__CTOR_OFFSET))(this);
	}

	::System::Void HOEPNGNAPGL(::System::Boolean GANFPOOKOPH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_JNCBAGMENIO_HOEPNGNAPGL_OFFSET))(this, GANFPOOKOPH);
	}
};
