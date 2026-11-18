#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AdvancedCollisionConfigData_ResolutionStrategy_TypeDefinitionIndex = 75965;

	enum class AdvancedCollisionConfigData_ResolutionStrategy : ::System::Int32
	{
		PreserveCameraDistance = 2,
		PullCameraForward = 0,
		PreserveCameraHeight = 1,
	};
}
