#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int BlockVisibilityRefreshMode_TypeDefinitionIndex = 76050;

	enum class BlockVisibilityRefreshMode : ::System::Int32
	{
		Immediate = 0,
		Deferred = 1,
	};
}
