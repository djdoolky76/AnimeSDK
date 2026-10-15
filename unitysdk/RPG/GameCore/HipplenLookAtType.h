#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class HipplenLookAtType : ::System::Int32
	{
		None = 0,
		Camera = 1,
		InteractProp = 2,
		AttachPoint = 3,
		Butterfly = 4,
	};
}
