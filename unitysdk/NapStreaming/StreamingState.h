#pragma once
#include "unitysdk/unitysdk.h"

namespace NapStreaming
{
	inline static constexpr unsigned int StreamingState_TypeDefinitionIndex = 41838;

	enum class StreamingState : ::System::Int32
	{
		LOADING_HLOD = 20,
		LOADING_OBJECT = 30,
		OBJECT = 31,
		UNLOAD_DISTANCE = 10,
		UNLOAD_CULLED = 11,
		INITED = 0,
		UNLOAD_LAYER = 12,
		HLOD = 21,
	};
}
