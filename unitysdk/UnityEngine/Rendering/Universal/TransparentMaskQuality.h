#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int TransparentMaskQuality_TypeDefinitionIndex = 26958;

	enum class TransparentMaskQuality : ::System::Int32
	{
		OnlyDither = 1,
		None = 0,
		DitherAndOffScreenParticles = 2,
	};
}
