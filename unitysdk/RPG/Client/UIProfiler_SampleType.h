#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class UIProfiler_SampleType : ::System::Int32
	{
		Load = 0,
		SetupView = 1,
		SwitchTab = 2,
	};
}
