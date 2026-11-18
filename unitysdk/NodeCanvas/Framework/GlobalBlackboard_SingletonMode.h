#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int GlobalBlackboard_SingletonMode_TypeDefinitionIndex = 29401;

	enum class GlobalBlackboard_SingletonMode : ::System::Int32
	{
		DestroyEntireGameObject = 1,
		DestroyComponentOnly = 0,
	};
}
