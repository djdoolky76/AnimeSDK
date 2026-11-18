#pragma once
#include "unitysdk/unitysdk.h"

namespace AniMeshTick
{
	inline static constexpr unsigned int TickStage_TypeDefinitionIndex = 40982;

	enum class TickStage : ::System::Int32
	{
		Update = 0,
		FixedUpdate = 2,
		LateUpdate = 1,
	};
}
