#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Policy
{
	enum class PolicyStatementAttribute : ::System::Int32
	{
		Nothing = 0,
		Exclusive = 1,
		LevelFinal = 2,
		All = 3,
	};
}
