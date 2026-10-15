#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Formats::Alembic::Sdk
{
	enum class TimeSamplingType : ::System::Int32
	{
		Uniform = 0,
		Acyclic = 2,
	};
}
