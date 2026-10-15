#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Reflection
{
	enum class AssemblyNameFlags : ::System::Int32
	{
		None = 0,
		PublicKey = 1,
		EnableJITcompileOptimizer = 16384,
		EnableJITcompileTracking = 32768,
		Retargetable = 256,
	};
}
