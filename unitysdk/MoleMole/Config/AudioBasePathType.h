#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AudioBasePathType_TypeDefinitionIndex = 89523;

	enum class AudioBasePathType : ::System::Int32
	{
		Streaming = 0,
		Bare = 3,
		AppData = 2,
		Persistent = 1,
	};
}
