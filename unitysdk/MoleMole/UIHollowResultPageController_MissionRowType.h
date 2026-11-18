#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowResultPageController_MissionRowType_TypeDefinitionIndex = 71568;

	enum class UIHollowResultPageController_MissionRowType : ::System::Int32
	{
		Empty = 2,
		CompleteItem = 5,
		Mission = 0,
		Custom = 6,
		AbyssPeriod = 3,
		TheGun = 7,
		Statistics = 1,
		Challenge = 4,
	};
}
