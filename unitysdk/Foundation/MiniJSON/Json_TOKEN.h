#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::MiniJSON
{
	inline static constexpr unsigned int Json_TOKEN_TypeDefinitionIndex = 8023;

	enum class Json_TOKEN : ::System::Int32
	{
		TRUE = 9,
		NUMBER = 8,
		SQUARED_CLOSE = 4,
		NONE = 0,
		CURLY_CLOSE = 2,
		COMMA = 6,
		COLON = 5,
		CURLY_OPEN = 1,
		STRING = 7,
		FALSE = 10,
		SQUARED_OPEN = 3,
		NULL = 11,
	};
}
