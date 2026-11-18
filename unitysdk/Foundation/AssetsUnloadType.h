#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int AssetsUnloadType_TypeDefinitionIndex = 7999;

	enum class AssetsUnloadType : ::System::Int32
	{
		Normal = 0,
		UnloadOnNextRestart = 1,
		NeverUnload = 2,
	};
}
