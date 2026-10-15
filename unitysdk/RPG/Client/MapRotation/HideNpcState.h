#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::MapRotation
{
	enum class HideNpcState : ::System::Int32
	{
		None = 0,
		Logically = 1,
		Visually = 2,
	};
}
