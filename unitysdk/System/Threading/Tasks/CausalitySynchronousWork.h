#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Threading::Tasks
{
	enum class CausalitySynchronousWork : ::System::Int32
	{
		CompletionNotification = 0,
		ProgressNotification = 1,
		Execution = 2,
	};
}
