#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightManager_GridFightCustomValue_ValueClassify_TypeDefinitionIndex = 57386;

	enum class GridFightManager_GridFightCustomValue_ValueClassify : ::System::Int32
	{
		Default = 0,
		Role = 1,
		Trait = 2,
	};
}
