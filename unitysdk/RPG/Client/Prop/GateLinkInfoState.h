#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	enum class GateLinkInfoState : ::System::Int32
	{
		None = 0,
		Link = 1,
		LinkInverse = 2,
	};
}
