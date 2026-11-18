#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MiniGame::TartarusHounds
{
	inline static constexpr unsigned int HoundPlayerAddedTextureStatus_TypeDefinitionIndex = 63576;

	enum class HoundPlayerAddedTextureStatus : ::System::Int32
	{
		WearWoolLoop = 2,
		WearWoolEnd = 3,
		Max = 4,
		None = 0,
		WearWoolStart = 1,
	};
}
