#pragma once
#include "unitysdk/unitysdk.h"

namespace MessagePack
{
	inline static constexpr unsigned int TinyJsonToken_TypeDefinitionIndex = 30663;

	enum class TinyJsonToken : ::System::Int32
	{
		Number = 5,
		StartArray = 3,
		StartObject = 1,
		True = 7,
		Null = 9,
		String = 6,
		EndObject = 2,
		False = 8,
		EndArray = 4,
		None = 0,
	};
}
