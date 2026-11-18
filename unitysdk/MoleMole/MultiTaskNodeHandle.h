#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class NPCBBDGEGPM;

namespace MoleMole
{
	inline static constexpr unsigned int MultiTaskNodeHandle_TypeDefinitionIndex = 73158;

	struct alignas(8) MultiTaskNodeHandle
	{
		::NPCBBDGEGPM* node; // 0x10
	};
}
