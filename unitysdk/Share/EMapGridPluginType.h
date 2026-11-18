#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EMapGridPluginType_TypeDefinitionIndex = 13062;

	enum class EMapGridPluginType : ::System::Int16
	{
		None = 0,
		RebuildStartEnd = 2,
		MainPathBendControl = 1,
		SetPathLayer = 3,
	};
}
