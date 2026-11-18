#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowSystemUIState_TypeDefinitionIndex = 11672;

	enum class EHollowSystemUIState : ::System::Int16
	{
		Brighten = 2,
		Normal = 0,
		Close = 1,
	};
}
