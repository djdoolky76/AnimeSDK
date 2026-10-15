#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class IsometricNotifyType : ::System::Int32
	{
		ReportStartIsometric = 0,
		ReportEndIsometric = 1,
		ReportMovePlatform = 2,
		ReportRotatePlatform = 3,
		InteractIsometric = 4,
		InteractPlatform = 5,
	};
}
