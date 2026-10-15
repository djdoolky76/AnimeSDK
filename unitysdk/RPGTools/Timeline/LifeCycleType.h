#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::Timeline
{
	enum class LifeCycleType : ::System::Int32
	{
		OnBehaviourPlay = 0,
		OnBehaviourPause = 1,
		OnGraphStart = 2,
		OnGraphStop = 3,
	};
}
