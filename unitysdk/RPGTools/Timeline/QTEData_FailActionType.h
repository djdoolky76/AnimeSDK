#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::Timeline
{
	enum class QTEData_FailActionType : ::System::Int32
	{
		DoNothing = 0,
		JumpToStart = 1,
		FinishiTimeline = 2,
	};
}
