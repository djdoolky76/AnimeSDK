#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class AnimationEventSource : ::System::Int32
	{
		NoSource = 0,
		Legacy = 1,
		Animator = 2,
	};
}
