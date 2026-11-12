#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModifierEffectType_TypeDefinitionIndex = 66592;

	enum class GridFightModifierEffectType : ::System::Int32
	{
		None = 0,
		ChangeRole = 1,
		EnhancedGrid = 2,
		SellRole = 3,
		UpgradeRole = 4,
		InsertNode = 5,
		NpcBonus = 6,
		UpgradeEquipByRole = 7,
		SnapshotRoleAndAddLater = 8,
		ChangeRoleByRandomPos = 9,
	};
}
