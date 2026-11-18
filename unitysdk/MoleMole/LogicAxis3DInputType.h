#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int LogicAxis3DInputType_TypeDefinitionIndex = 92095;

	enum class LogicAxis3DInputType : ::System::Int32
	{
		Accelerometer = 1,
		None = -1,
		Attitude = 3,
		RawAttitude = 5,
		RawGyroscope = 2,
		Gyroscope = 0,
		LinerAccelerometer = 4,
	};
}
