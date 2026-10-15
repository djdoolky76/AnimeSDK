#pragma once
#include "unitysdk/unitysdk.h"

namespace Cinemachine
{
	enum class CinemachineTriggerAction_ActionSettings_TimeMode : ::System::Int32
	{
		FromStart = 0,
		FromEnd = 1,
		BeforeNow = 2,
		AfterNow = 3,
	};
}
