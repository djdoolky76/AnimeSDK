#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class RtDirSourceType : ::System::Int32
	{
		None = 0,
		TargetFaceDir = 1,
		TwoTargetLinkDir = 2,
	};
}
