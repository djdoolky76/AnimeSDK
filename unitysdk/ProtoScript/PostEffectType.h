#pragma once
#include "unitysdk/unitysdk.h"

namespace ProtoScript
{
	inline static constexpr unsigned int PostEffectType_TypeDefinitionIndex = 21071;

	enum class PostEffectType : ::System::Int32
	{
		POST_EFFECT_TYPE_NONE = 0,
		VIGNETTE_EFFECT = 2,
		SCREEN_EFFECT = 3,
		GLITCH = 1,
		RADIAL_BLUR = 4,
		COLOR_ADJUSTMENTS = 5,
	};
}
