#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Bindings
{
	enum class StaticAccessorType : ::System::Int32
	{
		Dot = 0,
		Arrow = 1,
		DoubleColon = 2,
		ArrowWithDefaultReturnIfNull = 3,
	};
}
