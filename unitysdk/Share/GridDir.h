#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int GridDir_TypeDefinitionIndex = 11124;

	enum class GridDir : ::System::Int32
	{
		Down = 1,
		Up = 0,
		None = -1,
		Transfer = 99,
		Right = 3,
		Left = 2,
		All = 4,
	};
}
