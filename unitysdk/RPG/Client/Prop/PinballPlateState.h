#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	enum class PinballPlateState : ::System::Int32
	{
		Close0 = 0,
		Open0 = 1,
		Open1 = 2,
		Close1 = 3,
	};
}
