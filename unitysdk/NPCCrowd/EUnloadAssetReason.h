#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd
{
	inline static constexpr unsigned int EUnloadAssetReason_TypeDefinitionIndex = 70040;

	enum class EUnloadAssetReason : ::System::Int32
	{
		OptimizeMemory = 2,
		None = 0,
		OnDestroy = 1,
	};
}
