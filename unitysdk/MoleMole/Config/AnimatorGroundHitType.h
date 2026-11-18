#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorGroundHitType_TypeDefinitionIndex = 89906;

	enum class AnimatorGroundHitType : ::System::Int32
	{
		Light = 1,
		Knock = 3,
		Stay = 0,
		Heavy = 2,
	};
}
