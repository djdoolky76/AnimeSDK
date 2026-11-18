#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdLodManager_LODRenderRulePriority_TypeDefinitionIndex = 66190;

	enum class NPCCrowdLodManager_LODRenderRulePriority : ::System::Int32
	{
		Lowest = 0,
		Normal = 200,
		SpawnPathGraph = 250,
		High = 300,
		Low = 100,
		Highest = 400,
	};
}
