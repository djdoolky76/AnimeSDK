#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::UI3DGame
{
	enum class MonopolyPlayerActionState : ::System::Int32
	{
		Ready = 0,
		Executing = 1,
		Finished = 2,
	};
}
