#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ScreenSwitchType_TypeDefinitionIndex = 54122;

	enum class ScreenSwitchType : ::System::Int32
	{
		Open = 0,
		Switch = 1,
		Close = 2,
	};
}
