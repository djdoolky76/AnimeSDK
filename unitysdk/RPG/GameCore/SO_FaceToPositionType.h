#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class SO_FaceToPositionType : ::System::Int32
	{
		AnchorPoint = 0,
		Entity = 1,
		LocalPlayer = 2,
	};
}
