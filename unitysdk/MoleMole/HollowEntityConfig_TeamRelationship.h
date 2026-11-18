#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int HollowEntityConfig_TeamRelationship_TypeDefinitionIndex = 57919;

	enum class HollowEntityConfig_TeamRelationship : ::System::Int32
	{
		Enemy = 1,
		Allied = 0,
		Neutral = 2,
	};
}
