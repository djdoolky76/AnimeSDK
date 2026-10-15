#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::AI
{
	enum class CollectObjects : ::System::Int32
	{
		All = 0,
		Volume = 1,
		Children = 2,
	};
}
