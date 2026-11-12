#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int AnimationCullingType_TypeDefinitionIndex = 5746;

	enum class AnimationCullingType : ::System::Int32
	{
		AlwaysAnimate = 0,
		BasedOnRenderers = 1,
		BasedOnClipBounds = 2,
		BasedOnUserBounds = 3,
	};
}
