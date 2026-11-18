#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PopulationTemplateRefItem_TypeDefinitionIndex = 49049;

	struct alignas(4) PopulationTemplateRefItem
	{
		::System::Int32 populationID; // 0x10
	};
}
