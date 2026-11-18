#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int AudioRolloffMode_TypeDefinitionIndex = 17906;

	enum class AudioRolloffMode : ::System::Int32
	{
		Logarithmic = 0,
		Linear = 1,
		Custom = 2,
	};
}
