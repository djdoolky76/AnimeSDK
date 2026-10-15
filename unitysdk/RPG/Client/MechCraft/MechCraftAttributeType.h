#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::MechCraft
{
	enum class MechCraftAttributeType : ::System::Int32
	{
		None = 0,
		Intelligence = 1,
		Energy = 2,
		Charm = 3,
		Strength = 4,
		Speed = 5,
	};
}
