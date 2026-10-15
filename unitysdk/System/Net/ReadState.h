#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	enum class ReadState : ::System::Int32
	{
		None = 0,
		Status = 1,
		Headers = 2,
		Content = 3,
		Aborted = 4,
	};
}
