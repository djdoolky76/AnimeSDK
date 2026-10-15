#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	enum class EnvironmentVariableTarget : ::System::Int32
	{
		Process = 0,
		User = 1,
		Machine = 2,
	};
}
