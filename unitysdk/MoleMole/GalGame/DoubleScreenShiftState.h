#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int DoubleScreenShiftState_TypeDefinitionIndex = 63113;

	enum class DoubleScreenShiftState : ::System::Int32
	{
		None = 0,
		LeftExpand = 3,
		ToMiddle = 1,
		RightExpand = 2,
	};
}
