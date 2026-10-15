#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics
{
	enum class Process_State : ::System::Int32
	{
		HaveId = 1,
		IsLocal = 2,
		IsNt = 4,
		HaveProcessInfo = 8,
		Exited = 16,
		Associated = 32,
		IsWin2k = 64,
		HaveNtProcessInfo = 12,
	};
}
