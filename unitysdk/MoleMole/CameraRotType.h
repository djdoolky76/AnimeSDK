#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int CameraRotType_TypeDefinitionIndex = 42150;

	enum class CameraRotType : ::System::Int32
	{
		Normal = 0,
		Clockwise = 1,
		Anticlockwise = 2,
	};
}
