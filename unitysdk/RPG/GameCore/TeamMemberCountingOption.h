#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class TeamMemberCountingOption : ::System::UInt32
	{
		None = 0,
		IgnoreRemoving = 1,
		IgnoreServant = 2,
		IgnoreRemovingExceptTarget = 4,
		IgnoreTempLeave = 8,
		IgnoreWillUnstage = 16,
		IgnoreServantWhenSummonerSelectable = 32,
		IgnoreStealthForWaveEndCheck = 64,
		IgnoreExcludeInMultiCharacter = 128,
		IgnorePuppetCharacter = 256,
	};
}
