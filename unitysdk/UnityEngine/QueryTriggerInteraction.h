#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class QueryTriggerInteraction : ::System::Int32
	{
		UseGlobal = 0,
		Ignore = 1,
		Collide = 2,
	};
}
