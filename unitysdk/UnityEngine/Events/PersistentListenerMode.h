#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Events
{
	enum class PersistentListenerMode : ::System::Int32
	{
		EventDefined = 0,
		Void = 1,
		Object = 2,
		Int = 3,
		Float = 4,
		String = 5,
		Bool = 6,
	};
}
