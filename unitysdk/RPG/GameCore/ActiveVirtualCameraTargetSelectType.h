#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ActiveVirtualCameraTargetSelectType : ::System::Int32
	{
		UniqueName = 0,
		Anchor = 1,
		Target = 2,
	};
}
