#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Timeline
{
	enum class AppliedOffsetMode : ::System::Int32
	{
		NoRootTransform = 0,
		TransformOffset = 1,
		SceneOffset = 2,
		TransformOffsetLegacy = 3,
		SceneOffsetLegacy = 4,
		SceneOffsetEditor = 5,
		SceneOffsetLegacyEditor = 6,
	};
}
