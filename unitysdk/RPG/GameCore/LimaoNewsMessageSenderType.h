#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class LimaoNewsMessageSenderType : ::System::Int32
	{
		None = 0,
		Limao = 1,
		PlayerOption = 2,
		PlayerAuto = 3,
		System = 4,
	};
}
