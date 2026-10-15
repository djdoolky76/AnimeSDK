#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	enum class ClearFlag : ::System::Int32
	{
		None = 0,
		Color = 1,
		Depth = 2,
		All = 3,
	};
}
