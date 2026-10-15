#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	enum class VolumeProxy_State : ::System::Int32
	{
		None = 0,
		Pending = 1,
		Finished = 2,
	};
}
