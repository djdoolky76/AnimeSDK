#pragma once
#include "unitysdk/unitysdk.h"

namespace SuperScrollView
{
	enum class SnapStatus : ::System::Int32
	{
		NoTargetSet = 0,
		TargetHasSet = 1,
		SnapMoving = 2,
		SnapMoveFinish = 3,
	};
}
