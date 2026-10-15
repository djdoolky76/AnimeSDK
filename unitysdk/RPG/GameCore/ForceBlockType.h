#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ForceBlockType : ::System::Int32
	{
		None = 10000,
		Hide = 10,
		HLOD = 20,
	};
}
