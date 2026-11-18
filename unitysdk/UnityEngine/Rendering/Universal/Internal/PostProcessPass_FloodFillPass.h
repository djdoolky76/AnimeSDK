#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PostProcessPass_FloodFillPass_TypeDefinitionIndex = 26469;

	enum class PostProcessPass_FloodFillPass : ::System::Int32
	{
		IterPass1 = 3,
		Init = 1,
		IterPass0 = 2,
		StatRegionData_Group = 5,
		IterPass1_GetRegion = 4,
		ColorConvert = 0,
		GenerateSprites = 6,
	};
}
