#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EMainCityQuestScriptExecType_TypeDefinitionIndex = 10717;

	enum class EMainCityQuestScriptExecType : ::System::Int16
	{
		EnumCount = 2,
		Immediately = 1,
		WhenEnterScene = 0,
	};
}
