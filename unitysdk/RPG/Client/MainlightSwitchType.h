#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class MainlightSwitchType : ::System::Int32
	{
		TaskSyncMainLightAndCamera = 0,
		TaskSyncCharAndSceneLight = 1,
		TaskSetMainLightDir = 2,
		TimelineKMainLightDir = 3,
		UIMainLightDir = 4,
		DebugMainLight = 5,
	};
}
