#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ST_AIEventType : ::System::Int32
	{
		None = 0,
		InteractWithNpcMonster = 1,
		ReceiveStimulus = 2,
	};
}
