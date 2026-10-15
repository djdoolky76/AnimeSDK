#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class SwordTrainingPerformanceType : ::System::Int32
	{
		None = 0,
		Normal = 1,
		ExamSuccess = 2,
		ExamFail = 3,
		Ending = 4,
	};
}
