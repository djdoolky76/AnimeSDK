#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int IndicatorLightPresetType_TypeDefinitionIndex = 48160;

	enum class IndicatorLightPresetType : ::System::Int32
	{
		PlayerOn = 6,
		Battle = 5,
		Brighten = 2,
		Visible = 1,
		Empty = 3,
		Normal = 4,
		None = 0,
	};
}
