#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class FloatMessageType : ::System::Int32
	{
		All = -1,
		Default = 0,
		MiniToast = 1,
		SilverWolf999NormalKillHint = 2,
		SilverWolf999SpeicalKillHint = 3,
	};
}
