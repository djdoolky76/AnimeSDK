#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int RedirectType_TypeDefinitionIndex = 26540;

	enum class RedirectType : ::System::Int32
	{
		Component = 2,
		GameObject = 1,
		Null = 0,
	};
}
