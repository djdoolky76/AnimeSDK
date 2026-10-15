#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics::Tracing
{
	enum class EventSourceSettings : ::System::Int32
	{
		Default = 0,
		ThrowOnEventWriteErrors = 1,
		EtwManifestEventFormat = 4,
		EtwSelfDescribingEventFormat = 8,
	};
}
