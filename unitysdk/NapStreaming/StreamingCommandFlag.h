#pragma once
#include "unitysdk/unitysdk.h"

namespace NapStreaming
{
	inline static constexpr unsigned int StreamingCommandFlag_TypeDefinitionIndex = 87047;

	enum class StreamingCommandFlag : ::System::Int32
	{
		UNLOAD_OBJECT = 2,
		LOAD_HLOD = 1,
		UNLOAD_ALL = 4,
		UNLOAD_HLOD = 3,
		LOAD_OBJECT = 0,
	};
}
