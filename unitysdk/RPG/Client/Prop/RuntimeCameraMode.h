#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RuntimeCameraMode_TypeDefinitionIndex = 81563;

	enum class RuntimeCameraMode : ::System::Int32
	{
		Follow = 0,
		Fix = 1,
		DirectionFollow = 2,
	};
}
