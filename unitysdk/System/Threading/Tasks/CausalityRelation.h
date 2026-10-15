#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Threading::Tasks
{
	enum class CausalityRelation : ::System::Int32
	{
		AssignDelegate = 0,
		Join = 1,
		Choice = 2,
		Cancel = 3,
		Error = 4,
	};
}
