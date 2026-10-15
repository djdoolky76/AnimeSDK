#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ServantSelectType : ::System::Int32
	{
		Forbidden = 0,
		Allow = 1,
		AllowWhenSummonerUnselectable = 2,
	};
}
