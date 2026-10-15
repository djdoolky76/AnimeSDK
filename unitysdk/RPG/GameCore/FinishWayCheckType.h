#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class FinishWayCheckType : ::System::Int32
	{
		None = 0,
		SubmissionNotFinish = 1,
		QuestNotFinish = 2,
	};
}
