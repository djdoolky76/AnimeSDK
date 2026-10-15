#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class EnabledOrientation : ::System::Int32
	{
		kAutorotateToPortrait = 1,
		kAutorotateToPortraitUpsideDown = 2,
		kAutorotateToLandscapeLeft = 4,
		kAutorotateToLandscapeRight = 8,
	};
}
