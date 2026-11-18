#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ComponentMask_TypeDefinitionIndex = 26214;

	enum class ComponentMask : ::System::Int32
	{
		Scene = 1,
		All = 0,
		Character = 2,
	};
}
