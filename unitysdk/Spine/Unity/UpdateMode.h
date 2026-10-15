#pragma once
#include "unitysdk/unitysdk.h"

namespace Spine::Unity
{
	enum class UpdateMode : ::System::Int32
	{
		Nothing = 0,
		OnlyAnimationStatus = 1,
		OnlyEventTimelines = 4,
		EverythingExceptMesh = 2,
		FullUpdate = 3,
	};
}
