#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNCIGAHEFLF.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int GamepadNavDirConfig_TypeDefinitionIndex = 50827;

	struct alignas(4) GamepadNavDirConfig
	{
		::MoleMole::InputLogicEventType logicEvent; // 0x10
		::MNCIGAHEFLF navDir; // 0x14
	};
}
