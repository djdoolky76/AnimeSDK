#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int EtherEyesHintInfoType_TypeDefinitionIndex = 53232;

	enum class EtherEyesHintInfoType : ::System::Int32
	{
		Fix = 6,
		BreakCoreFocus = 1,
		Empty = 0,
		None = -1,
		FindFocus = 3,
		FindHoldInteract = 4,
		FixFocus = 7,
		FixHoldInteract = 8,
		ShowFocus = 2,
		FixInteractFinish = 9,
		FindInteractFinish = 5,
	};
}
