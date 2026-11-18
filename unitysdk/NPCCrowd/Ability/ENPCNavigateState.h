#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int ENPCNavigateState_TypeDefinitionIndex = 90156;

	enum class ENPCNavigateState : ::System::Int32
	{
		NavmeshToPathFollow = 2,
		PathFollow = 0,
		Navmesh = 1,
	};
}
