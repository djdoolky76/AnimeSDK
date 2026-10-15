#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Diagnostics
{
	enum class ForcedCrashCategory : ::System::Int32
	{
		AccessViolation = 0,
		FatalError = 1,
		Abort = 2,
		PureVirtualFunction = 3,
	};
}
