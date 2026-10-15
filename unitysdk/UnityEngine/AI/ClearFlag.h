#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::AI
{
	enum class ClearFlag : ::System::Int32
	{
		Agent = 1,
		Obstacle = 2,
		All = 3,
	};
}
