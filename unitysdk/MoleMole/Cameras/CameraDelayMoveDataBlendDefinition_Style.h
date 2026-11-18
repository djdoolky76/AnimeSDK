#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraDelayMoveDataBlendDefinition_Style_TypeDefinitionIndex = 51573;

	enum class CameraDelayMoveDataBlendDefinition_Style : ::System::Int32
	{
		EaseOut = 3,
		HardOut = 5,
		EaseInOut = 1,
		Linear = 6,
		Cut = 0,
		HardIn = 4,
		Custom = 7,
		EaseIn = 2,
	};
}
