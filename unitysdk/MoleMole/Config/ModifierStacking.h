#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ModifierStacking_TypeDefinitionIndex = 57541;

	enum class ModifierStacking : ::System::Int32
	{
		MultipleAllRefreshNotReplace = 10,
		Refresh = 1,
		RefreshByLongTime = 7,
		ReplaceByLongTime = 9,
		MultipleRefresh = 4,
		Replace = 8,
		Prolong = 2,
		MultipleAllRefresh = 5,
		Unique = 0,
		Multiple = 3,
		GlobalUnique = 6,
	};
}
