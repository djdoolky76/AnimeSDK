#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int TimestampType_TypeDefinitionIndex = 8083;

	enum class TimestampType : ::System::Int32
	{
		UnixTimeMilliseconds = 1,
		UtcTicks = 0,
		UnixTimeSeconds = 2,
	};
}
