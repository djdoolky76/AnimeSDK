#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityPosAdaptionOption_TypeDefinitionIndex = 24498;

	enum class EntityPosAdaptionOption : ::System::UInt32
	{
		None = 0,
		RayCastCheck = 1,
		GroundCheck = 2,
		NavMeshCheck = 4,
		PathCheck = 8,
		AvoidanceCheck = 16,
		StepGroundCheck = 32,
		NavMeshEdgeAvoidance = 64,
		Default = 32,
		CharacterDefault = 30,
	};
}
