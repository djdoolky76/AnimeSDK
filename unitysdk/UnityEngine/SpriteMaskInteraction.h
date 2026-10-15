#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class SpriteMaskInteraction : ::System::Int32
	{
		None = 0,
		VisibleInsideMask = 1,
		VisibleOutsideMask = 2,
	};
}
