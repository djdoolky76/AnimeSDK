#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::CakeRace
{
	enum class CakeRaceLoanPrepareType : ::System::Int32
	{
		FromFieldInfo = 0,
		FromInvited = 1,
		FromGameplayReturnMatch = 2,
	};
}
