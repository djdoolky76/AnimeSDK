#pragma once
#include "unitysdk/unitysdk.h"

namespace InfluxDB
{
	inline static constexpr unsigned int WritePrecision_TypeDefinitionIndex = 8084;

	enum class WritePrecision : ::System::Int32
	{
		Ms = 1,
		S = 2,
		Us = 3,
		Ns = 4,
	};
}
