#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Coroutine
{
	inline static constexpr unsigned int Segment_TypeDefinitionIndex = 8261;

	enum class Segment : ::System::Int32
	{
		Invalid = -1,
		LateUpdate = 2,
		FixedUpdate = 1,
		SlowUpdate = 3,
		Update = 0,
	};
}
