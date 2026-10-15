#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngineInternal
{
	enum class TypeInferenceRules : ::System::Int32
	{
		TypeReferencedByFirstArgument = 0,
		TypeReferencedBySecondArgument = 1,
		ArrayOfTypeReferencedByFirstArgument = 2,
		TypeOfFirstArgument = 3,
	};
}
