#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorHitEffect_TypeDefinitionIndex = 69739;

	enum class AnimatorHitEffect : ::System::Int32
	{
		HitFloor = 2,
		HitSky = 1,
		Mute = -2,
		Shake = -1,
		HitGround = 0,
	};
}
