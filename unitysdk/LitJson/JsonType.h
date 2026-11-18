#pragma once
#include "unitysdk/unitysdk.h"

namespace LitJson
{
	inline static constexpr unsigned int JsonType_TypeDefinitionIndex = 8455;

	enum class JsonType : ::System::Int32
	{
		Int = 4,
		Double = 6,
		None = 0,
		Long = 5,
		String = 3,
		Boolean = 7,
		Array = 2,
		Object = 1,
	};
}
