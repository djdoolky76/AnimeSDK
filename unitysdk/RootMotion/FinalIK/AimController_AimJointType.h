#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int AimController_AimJointType_TypeDefinitionIndex = 36876;

	enum class AimController_AimJointType : ::System::Int32
	{
		HingerYawPitch = 2,
		Spherical = 1,
		None = 0,
	};
}
