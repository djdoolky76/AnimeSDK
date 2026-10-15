#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Formats::Alembic::Util
{
	enum class ExportScope : ::System::Int32
	{
		EntireScene = 0,
		TargetBranch = 1,
	};
}
