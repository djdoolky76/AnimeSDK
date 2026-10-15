#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics
{
	enum class Process_StreamReadMode : ::System::Int32
	{
		undefined = 0,
		syncMode = 1,
		asyncMode = 2,
	};
}
