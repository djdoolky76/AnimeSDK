#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AnimStatic_DieWay_TypeDefinitionIndex = 64175;

	enum class AnimStatic_DieWay : ::System::Int32
	{
		DieHitFlyFront = 2,
		DieHitFlyBack = 3,
		DieGround = 0,
		DieHitDown = 4,
		DieHitThrow = 1,
		Count = 5,
	};
}
