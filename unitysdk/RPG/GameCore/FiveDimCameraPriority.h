#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class FiveDimCameraPriority : ::System::Int32
	{
		Default = 0,
		SurfaceCamera = 1,
		GravityBoardCamera = 2,
		PipePortalCamera = 3,
		TaskCamera = 4,
		Count = 5,
	};
}
