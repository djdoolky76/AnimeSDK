#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int CharacterSimplifyMode_TypeDefinitionIndex = 26488;

	enum class CharacterSimplifyMode : ::System::Int32
	{
		Battle = 1,
		FrontendGame = 0,
		Count = 4,
		BlackCurtain = 3,
		LightDirectionFromCamera = 2,
	};
}
