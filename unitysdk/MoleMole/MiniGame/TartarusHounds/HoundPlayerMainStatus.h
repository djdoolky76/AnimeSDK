#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MiniGame::TartarusHounds
{
	inline static constexpr unsigned int HoundPlayerMainStatus_TypeDefinitionIndex = 58105;

	enum class HoundPlayerMainStatus : ::System::Int32
	{
		Push = 7,
		Max = 201,
		FallLanding = 110,
		None = 200,
		FallSlipRight = 92,
		Attack = 105,
		FallSlipLeft = 91,
		Dead = 1,
		Injured = 3,
		Move = 100,
		FakeJump = 108,
		ProtectAttack = 106,
		DivingFinish = 4,
		ClimbStart = 21,
		Climb = 20,
		Falling = 95,
		InjuredFinish = 15,
		Idle = 130,
		Respawn = 2,
		Diving = 5,
		PerformFall = 0,
		ClimbPre = 22,
		MoveAttack = 104,
	};
}
