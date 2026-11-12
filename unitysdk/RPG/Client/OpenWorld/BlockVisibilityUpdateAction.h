#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int BlockVisibilityUpdateAction_TypeDefinitionIndex = 76051;

	enum class BlockVisibilityUpdateAction : ::System::Int32
	{
		Skip = 0,
		MarkDirty = 1,
		Apply = 2,
	};
}
