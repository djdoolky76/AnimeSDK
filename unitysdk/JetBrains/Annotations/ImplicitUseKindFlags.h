#pragma once
#include "unitysdk/unitysdk.h"

namespace JetBrains::Annotations
{
	enum class ImplicitUseKindFlags : ::System::Int32
	{
		Default = 7,
		Access = 1,
		Assign = 2,
		InstantiatedWithFixedConstructorSignature = 4,
		InstantiatedNoFixedConstructorSignature = 8,
	};
}
