#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowGridLink_TypeDefinitionIndex = 13298;

	enum class EHollowGridLink : ::System::Byte
	{
		Down = 2,
		Right = 4,
		Left = 8,
		Up = 1,
		None = 0,
		All = 15,
	};
}
