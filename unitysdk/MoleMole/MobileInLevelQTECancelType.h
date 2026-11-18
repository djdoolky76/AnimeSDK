#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int MobileInLevelQTECancelType_TypeDefinitionIndex = 52923;

	enum class MobileInLevelQTECancelType : ::System::Int32
	{
		DoubleClick = 2,
		SingleClick = 3,
		None = 0,
		NoCancel = 1,
	};
}
