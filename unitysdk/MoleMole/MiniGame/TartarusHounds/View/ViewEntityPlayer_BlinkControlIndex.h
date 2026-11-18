#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MiniGame::TartarusHounds::View
{
	inline static constexpr unsigned int ViewEntityPlayer_BlinkControlIndex_TypeDefinitionIndex = 54166;

	enum class ViewEntityPlayer_BlinkControlIndex : ::System::Int32
	{
		InvincibleLoop = 7,
		ImmuneSpecialHurt = 4,
		Struggle = 3,
		Wool = 1,
		AddLife = 5,
		InvincibleOut = 8,
		None = 0,
		DyingRespawn = 6,
		LowHP = 2,
	};
}
