#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int EMainPageItemType_TypeDefinitionIndex = 45111;

	enum class EMainPageItemType : ::System::Int32
	{
		Buddy = 2,
		Avatar = 1,
		Invalid = 0,
		Skin = 3,
	};
}
