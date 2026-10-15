#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Timeline
{
	enum class NotificationFlags : ::System::Int16
	{
		TriggerInEditMode = 1,
		Retroactive = 2,
		TriggerOnce = 4,
	};
}
