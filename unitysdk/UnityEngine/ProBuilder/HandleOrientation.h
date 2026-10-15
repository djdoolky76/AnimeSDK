#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder
{
	enum class HandleOrientation : ::System::Int32
	{
		World = 0,
		ActiveObject = 1,
		ActiveElement = 2,
	};
}
