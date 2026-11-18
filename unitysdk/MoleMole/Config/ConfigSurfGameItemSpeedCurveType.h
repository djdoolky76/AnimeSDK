#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameItemSpeedCurveType_TypeDefinitionIndex = 72428;

	enum class ConfigSurfGameItemSpeedCurveType : ::System::Int32
	{
		Acceleration = 1,
		None = 0,
		Deceleration = 2,
	};
}
