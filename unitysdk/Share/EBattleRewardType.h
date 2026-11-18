#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EBattleRewardType_TypeDefinitionIndex = 13572;

	enum class EBattleRewardType : ::System::Int16
	{
		Challenge = 5,
		BattleEvt = 2,
		Client = 1,
		Ext = 3,
		Fight = 4,
	};
}
