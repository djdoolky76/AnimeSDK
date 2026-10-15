#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Formats::Alembic::Sdk
{
	enum class NormalsMode : ::System::Int32
	{
		CalculateIfMissing = 1,
		AlwaysCalculate = 2,
	};
}
