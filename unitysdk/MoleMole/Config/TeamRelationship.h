#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int TeamRelationship_TypeDefinitionIndex = 48062;

	enum class TeamRelationship : ::System::Int32
	{
		Allied = 0,
		Enemy = 1,
		Neutral = 2,
	};
}
