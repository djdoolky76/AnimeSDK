#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EPostEffectType_TypeDefinitionIndex = 13823;

	enum class EPostEffectType : ::System::Int16
	{
		RadialBlur = 4,
		EnumCount = 5,
		ScreenEffect = 3,
		VignetteEffect = 2,
		Glitch = 1,
	};
}
