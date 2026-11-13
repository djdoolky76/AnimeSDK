#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightNodePlugInType_TypeDefinitionIndex = 13761;

	enum class GridFightNodePlugInType : ::System::Int32
	{
		Hex = 1,
		Bonfire = 2,
	};
}
