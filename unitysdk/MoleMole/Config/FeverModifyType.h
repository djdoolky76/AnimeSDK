#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int FeverModifyType_TypeDefinitionIndex = 72191;

	enum class FeverModifyType : ::System::Int32
	{
		StunResetOther2 = 4,
		Ability = 9,
		KillOther = 7,
		Other = 11,
		StunResetOther3 = 5,
		StunResetOther1 = 3,
		QTE = 6,
		HitOther = 1,
		ReduceByTime = 0,
		DodgeSuccess = 8,
		StunDestroyOther = 2,
		BeingHit = 10,
	};
}
