#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPFNHGIBGAJ.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int MultiInputKeyData_TypeDefinitionIndex = 57622;

	struct alignas(4) MultiInputKeyData
	{
		::DPFNHGIBGAJ SpaceType; // 0x10
		::MoleMole::LogicButtonInputType InputType; // 0x14
	};
}
