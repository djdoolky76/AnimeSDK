#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class GroupPropertySide : ::System::Int32
	{
		ClientOnly = 0,
		ServerOnly = 1,
		ServerClient = 2,
	};
}
