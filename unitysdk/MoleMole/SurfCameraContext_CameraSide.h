#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int SurfCameraContext_CameraSide_TypeDefinitionIndex = 40998;

	enum class SurfCameraContext_CameraSide : ::System::Int32
	{
		Right = 3,
		Left = 0,
		LeftToRight = 1,
		RightToLeft = 2,
	};
}
