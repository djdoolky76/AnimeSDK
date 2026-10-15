#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class AnimatorUpdateMode : ::System::Int32
	{
		Normal = 0,
		AnimatePhysics = 1,
		UnscaledTime = 2,
	};
}
