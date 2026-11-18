#pragma once
#include "unitysdk/unitysdk.h"

namespace SimpleJSON
{
	inline static constexpr unsigned int JSONBinaryTag_TypeDefinitionIndex = 7903;

	enum class JSONBinaryTag : ::System::Int32
	{
		Class = 2,
		DoubleValue = 5,
		FloatValue = 7,
		Array = 1,
		IntValue = 4,
		Value = 3,
		BoolValue = 6,
		LongValue = 8,
	};
}
