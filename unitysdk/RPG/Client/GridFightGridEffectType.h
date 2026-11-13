#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGridEffectType_TypeDefinitionIndex = 66376;

	enum class GridFightGridEffectType : ::System::Int32
	{
		None = 0,
		SPSlot = 1,
		EnhancedGrid = 2,
		Pandora = 3,
		Cyrene = 4,
		Elation = 5,
		MortenaxBlade = 6,
		BandRole = 7,
		ChangeRoleByRandomPos = 8,
		ComboSlot = 9,
	};
}
