#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics::Tracing
{
	enum class EventCommand : ::System::Int32
	{
		Update = 0,
		SendManifest = -1,
		Enable = -2,
		Disable = -3,
	};
}
