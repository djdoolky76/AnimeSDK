#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventChannel_TypeDefinitionIndex = 1715;

	enum class EventChannel : ::System::Byte
	{
		None = 0,
		Admin = 16,
		Operational = 17,
		Analytic = 18,
		Debug = 19,
	};
}
