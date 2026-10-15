#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class GameEntityPosAdaptionResultFlag : ::System::Int32
	{
		Invalid = 1,
		PosChanged = 2,
		Blocked = 4,
	};
}
