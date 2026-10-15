#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class GeometryRegionTargetType : ::System::Int32
	{
		LocalPlayer = 1,
		FakeAvatarLocalPlayer = 2,
		TeamMemberLocalPlayer = 3,
		SingleNpc = 4,
	};
}
