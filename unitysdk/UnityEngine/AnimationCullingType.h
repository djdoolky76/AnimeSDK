#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class AnimationCullingType : ::System::Int32
	{
		AlwaysAnimate = 0,
		BasedOnRenderers = 1,
		BasedOnClipBounds = 2,
		BasedOnUserBounds = 3,
	};
}
