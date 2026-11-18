#pragma once
#include "unitysdk/unitysdk.h"

namespace MonoNotRelateGameLogic
{
	inline static constexpr unsigned int DeviceCarType_TypeDefinitionIndex = 86640;

	enum class DeviceCarType : ::System::Int32
	{
		Small = 1,
		Motorcycle = 4,
		Middle = 2,
		Large = 3,
	};
}
