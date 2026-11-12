#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitParamSource_TypeDefinitionIndex = 13783;

	enum class GridFightTraitParamSource : ::System::Int32
	{
		Default = 0,
		TraitMazeBuff = 1,
		TraitMazeBuffPlus = 2,
	};
}
