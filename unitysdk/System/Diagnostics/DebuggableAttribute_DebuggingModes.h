#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics
{
	enum class DebuggableAttribute_DebuggingModes : ::System::Int32
	{
		None = 0,
		Default = 1,
		DisableOptimizations = 256,
		IgnoreSymbolStoreSequencePoints = 2,
		EnableEditAndContinue = 4,
	};
}
