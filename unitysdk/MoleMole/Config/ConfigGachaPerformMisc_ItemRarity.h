#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformMisc_ItemRarity_TypeDefinitionIndex = 41175;

	enum class ConfigGachaPerformMisc_ItemRarity : ::System::Int32
	{
		B = 2,
		S = 4,
		Unknown = -1,
		A = 3,
	};
}
