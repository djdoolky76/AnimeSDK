#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_Input_PositionType_TypeDefinitionIndex = 84702;

	enum class ConfigUICommon_Input_PositionType : ::System::Int32
	{
		MiddleLeft = 3,
		LowerRight = 7,
		LowerOuterLeft = 200,
		None = 0,
		UpperLeft = 2,
		SuperLeft = 320,
		LowerLeft = 4,
		Center = 1,
		MiddleRight = 6,
		UpperRight = 5,
		JoyStick = 100,
		UpperCenter = 310,
		ZenkovUseItemLeft = 330,
	};
}
