#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class IdleLiveUIType : ::System::Int32
	{
		None = 0,
		LightHud = 1,
		DarkHud = 2,
		TeamList = 4,
		RightTab = 8,
		Danmu = 16,
		DmgText = 32,
		DmgTextAndDanmu = 48,
		DmgTextAndDanmuAndTeamList = 52,
		DmgTextAndDanmuAndTeamListAndRightTab = 60,
		All = 63,
	};
}
