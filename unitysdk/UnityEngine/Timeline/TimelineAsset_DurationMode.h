#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Timeline
{
	enum class TimelineAsset_DurationMode : ::System::Int32
	{
		BasedOnClips = 0,
		FixedLength = 1,
		BasedOnCameraClip = 2,
	};
}
