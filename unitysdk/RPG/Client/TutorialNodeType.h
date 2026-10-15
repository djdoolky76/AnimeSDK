#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class TutorialNodeType : ::System::Int32
	{
		UI2D = 0,
		UI3D = 1,
		Scene3D = 2,
		Custom = 3,
	};
}
