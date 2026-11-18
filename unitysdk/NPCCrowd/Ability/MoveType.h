#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int MoveType_TypeDefinitionIndex = 89343;

	enum class MoveType : ::System::Int32
	{
		Navmesh = 1,
		Default = 0,
	};
}
