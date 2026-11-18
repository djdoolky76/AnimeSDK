#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int FocusCameraTargetActivePolicy_TypeDefinitionIndex = 91179;

	enum class FocusCameraTargetActivePolicy : ::System::Int32
	{
		ByRadius2D = 1,
		Always = 2,
		None = 0,
	};
}
