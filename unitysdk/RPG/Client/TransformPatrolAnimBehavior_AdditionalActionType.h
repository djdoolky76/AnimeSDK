#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class TransformPatrolAnimBehavior_AdditionalActionType : ::System::Int32
	{
		None = 0,
		RelativeTransform = 1,
		LookAt = 2,
		TriggerNode = 4,
	};
}
