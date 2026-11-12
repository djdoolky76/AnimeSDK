#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int BlockVisibilityHideScope_TypeDefinitionIndex = 76049;

	enum class BlockVisibilityHideScope : ::System::Int32
	{
		ContentOnly = 0,
		WholeBlock = 1,
	};
}
