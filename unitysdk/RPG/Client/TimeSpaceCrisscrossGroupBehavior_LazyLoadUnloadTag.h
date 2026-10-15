#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TimeSpaceCrisscrossGroupBehavior_LazyLoadUnloadTag_TypeDefinitionIndex = 70202;

	enum class TimeSpaceCrisscrossGroupBehavior_LazyLoadUnloadTag : ::System::Byte
	{
		None = 0,
		NeedEnable = 1,
		NeedDisable = 2,
	};
}
