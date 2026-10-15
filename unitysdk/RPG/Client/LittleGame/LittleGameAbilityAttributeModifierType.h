#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	enum class LittleGameAbilityAttributeModifierType : ::System::Int32
	{
		Add = 0,
		Sub = 1,
		Mul = 2,
		Div = 3,
	};
}
