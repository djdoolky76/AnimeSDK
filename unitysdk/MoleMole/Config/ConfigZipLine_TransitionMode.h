#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_TransitionMode_TypeDefinitionIndex = 54285;

	enum class ConfigZipLine_TransitionMode : ::System::Int32
	{
		FloatTargetPoint = 1,
		PredicateTargetPoint = 2,
		MixedMode = 3,
		FixedTargetPoint = 0,
	};
}
