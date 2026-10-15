#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class WaitBatchItemType : ::System::Int32
	{
		Condition = 0,
		Task = 1,
		CustomString = 2,
		Event = 3,
		Notify = 4,
		Unknown = 5,
	};
}
