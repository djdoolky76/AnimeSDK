#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class CharacterResourceLoadOption : ::System::Int32
	{
		DefaultLoad = 0,
		DefaultUnload = 1,
		DynamicLoadOnAction = 2,
	};
}
