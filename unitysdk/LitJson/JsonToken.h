#pragma once
#include "unitysdk/unitysdk.h"

namespace LitJson
{
	inline static constexpr unsigned int JsonToken_TypeDefinitionIndex = 8000;

	enum class JsonToken : ::System::Int32
	{
		ObjectStart = 1,
		Null = 12,
		String = 9,
		Double = 8,
		PropertyName = 2,
		ArrayEnd = 5,
		ObjectEnd = 3,
		Long = 7,
		Comment = 11,
		ArrayStart = 4,
		Boolean = 10,
		None = 0,
		Int = 6,
	};
}
