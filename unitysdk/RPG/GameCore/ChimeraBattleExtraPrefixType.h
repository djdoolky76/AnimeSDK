#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ChimeraBattleExtraPrefixType : ::System::Int32
	{
		None = 0,
		Has = 1,
		SelfAtkGreaterThenWorkHP = 2,
		HasNoneAbilityMember = 3,
		NotFirstTurn = 4,
	};
}
