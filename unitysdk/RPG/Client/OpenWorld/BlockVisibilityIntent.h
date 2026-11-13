#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int BlockVisibilityIntent_TypeDefinitionIndex = 76046;

	enum class BlockVisibilityIntent : ::System::Int32
	{
		Hide = 0,
		Show = 1,
	};
}
