#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AdaptorShowType_TypeDefinitionIndex = 39082;

	enum class AdaptorShowType : ::System::Int32
	{
		MobileConsole = 3,
		Console = 2,
		Mobile = 0,
		PC = 1,
	};
}
