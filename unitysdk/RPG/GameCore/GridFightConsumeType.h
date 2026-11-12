#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightConsumeType_TypeDefinitionIndex = 13513;

	enum class GridFightConsumeType : ::System::Int32
	{
		Remove = 0,
		Roll = 1,
		Upgrade = 2,
		Copy = 3,
		GainRecommendEquip = 4,
		UpgradeByRefresh = 5,
		SpotLight = 6,
		UpgradeChimera = 7,
		CopyChimera = 8,
	};
}
