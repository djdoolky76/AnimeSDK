#pragma once
#include "unitysdk/unitysdk.h"

namespace Spine::Unity
{
	enum class UpdateTiming : ::System::Int32
	{
		ManualUpdate = 0,
		InUpdate = 1,
		InFixedUpdate = 2,
	};
}
