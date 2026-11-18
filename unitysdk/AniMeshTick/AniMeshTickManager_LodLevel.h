#pragma once
#include "unitysdk/unitysdk.h"

namespace AniMeshTick
{
	inline static constexpr unsigned int AniMeshTickManager_LodLevel_TypeDefinitionIndex = 84756;

	enum class AniMeshTickManager_LodLevel : ::System::Int32
	{
		Near = 0,
		Fallback = 4,
		Medium = 1,
		VeryFar = 3,
		Far = 2,
	};
}
