#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	enum class CriAtomConfig_InGamePreviewSwitchMode : ::System::Int32
	{
		Disable = 0,
		Enable = 1,
		FollowBuildSetting = 2,
		Default = 3,
	};
}
