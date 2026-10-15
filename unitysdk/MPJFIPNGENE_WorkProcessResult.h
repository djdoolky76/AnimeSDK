#pragma once
#include "unitysdk/unitysdk.h"
	enum class MPJFIPNGENE_WorkProcessResult : ::System::Int32
	{
		Blocked = 0,
		InProgress = 1,
		QueuedOnWorkerThread = 2,
		Finished = 3,
	};
