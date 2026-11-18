#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EEventNodeMode_TypeDefinitionIndex = 9505;

	enum class EEventNodeMode : ::System::Int16
	{
		EnumCount = 3,
		OnlyClient = 0,
		ClientRequest = 2,
		OnlyServer = 1,
	};
}
