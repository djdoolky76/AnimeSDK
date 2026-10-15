#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Formats::Alembic::Sdk
{
	enum class aiTopologyVariance : ::System::Int32
	{
		Constant = 0,
		Homogeneous = 1,
		Heterogeneous = 2,
	};
}
