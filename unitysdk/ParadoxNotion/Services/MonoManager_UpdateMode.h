#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion::Services
{
	inline static constexpr unsigned int MonoManager_UpdateMode_TypeDefinitionIndex = 29961;

	enum class MonoManager_UpdateMode : ::System::Int32
	{
		NormalUpdate = 0,
		LateUpdate = 1,
		FixedUpdate = 2,
	};
}
