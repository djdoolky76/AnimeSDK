#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePVERowWidgetController_Data_EState_TypeDefinitionIndex = 77420;

	enum class UIAutoBattlePVERowWidgetController_Data_EState : ::System::Int32
	{
		NotFinished = 2,
		Finished = 3,
		Empty = 0,
		Lock = 1,
	};
}
