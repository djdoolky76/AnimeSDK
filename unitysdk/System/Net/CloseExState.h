#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	enum class CloseExState : ::System::Int32
	{
		Normal = 0,
		Abort = 1,
		Silent = 2,
	};
}
