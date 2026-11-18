#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorAirHitType_TypeDefinitionIndex = 75642;

	enum class AnimatorAirHitType : ::System::Int32
	{
		Wall = 99,
		InAir = 2,
		ThrowLow = 0,
		ThrowHigh = 4,
		Fly = 1,
		Knock = 3,
	};
}
