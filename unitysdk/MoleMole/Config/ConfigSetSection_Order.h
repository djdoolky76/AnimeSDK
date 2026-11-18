#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSetSection_Order_TypeDefinitionIndex = 53981;

	enum class ConfigSetSection_Order : ::System::Int32
	{
		Prv = 1,
		Cur = 0,
		Temp = 2,
	};
}
