#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class EFootIKMode : ::System::Int32
	{
		Default = 0,
		LockLeftFoot = 1,
		LockRightFoot = 2,
		LockFoot = 3,
		DisableIK = 4,
	};
}
