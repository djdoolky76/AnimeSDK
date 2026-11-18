#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ShaderCollectionType_TypeDefinitionIndex = 26409;

	enum class ShaderCollectionType : ::System::Int32
	{
		Scene = 2,
		Character = 1,
		Effect = 3,
		UI = 0,
	};
}
