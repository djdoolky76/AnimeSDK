#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Immutable
{
	enum class ImmutableDictionary_2_OperationResult : ::System::Int32
	{
		AppliedWithoutSizeChange = 0,
		SizeChanged = 1,
		NoChangeRequired = 2,
	};
}
