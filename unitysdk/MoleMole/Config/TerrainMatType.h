#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int TerrainMatType_TypeDefinitionIndex = 72784;

	enum class TerrainMatType : ::System::Int32
	{
		Grass = 1,
		Sand = 2,
		Carpet = 6,
		Default = -1,
		Concrete = 0,
		Water = 3,
		Wood = 4,
		Metal = 5,
	};
}
