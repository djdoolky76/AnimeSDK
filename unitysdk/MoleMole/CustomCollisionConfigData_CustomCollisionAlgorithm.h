#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int CustomCollisionConfigData_CustomCollisionAlgorithm_TypeDefinitionIndex = 46907;

	enum class CustomCollisionConfigData_CustomCollisionAlgorithm : ::System::Int32
	{
		Volumetric = 2,
		Spherical = 1,
		Simple = 0,
	};
}
