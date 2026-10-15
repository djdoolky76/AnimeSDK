#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG
{
	enum class AutoReleaseReferenceState : ::System::Int32
	{
		Allocated = 0,
		Recycled = 1,
		ManualRelease = 2,
	};
}
