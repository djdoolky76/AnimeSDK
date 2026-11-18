#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ButtonPressType.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/System/ValueType.h"

#define BDEEDKHDJEK__CTOR_OFFSET UNITYSDK_OFFSET(0x2E4140)

inline static constexpr unsigned int BDEEDKHDJEK_TypeDefinitionIndex = 55048;

struct alignas(4) BDEEDKHDJEK
{
	::MoleMole::InputLogicEventType OJNDBBENCJO; // 0x10
	::MoleMole::ButtonPressType CHMJHEEGDOH; // 0x14

	::System::Void _ctor(::MoleMole::InputLogicEventType KBEPAHIFCMA, ::MoleMole::ButtonPressType JDECLILGJBM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InputLogicEventType, ::MoleMole::ButtonPressType))((::PBYTE)hIl2Cpp + BDEEDKHDJEK__CTOR_OFFSET))(this, KBEPAHIFCMA, JDECLILGJBM);
	}
};
