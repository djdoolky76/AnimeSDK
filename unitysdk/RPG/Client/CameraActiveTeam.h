#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class CameraActiveTeam : ::System::Int32
	{
		All = 0,
		TeamLight = 1,
		TeamDark = 2,
	};
}
