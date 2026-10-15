#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics
{
	enum class DebuggerBrowsableState : ::System::Int32
	{
		Never = 0,
		Collapsed = 2,
		RootHidden = 3,
	};
}
