#pragma once
#include "unitysdk/unitysdk.h"

namespace JetBrains::Annotations
{
	enum class ImplicitUseTargetFlags : ::System::Int32
	{
		Default = 1,
		Itself = 1,
		Members = 2,
		WithMembers = 3,
	};
}
