#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_Input_PanelPositionType_TypeDefinitionIndex = 84694;

	enum class ConfigUICommon_Input_PanelPositionType : ::System::Int32
	{
		ReverseSwitch = 4,
		None = 0,
		QTE = 3,
		Action = 2,
		JoyStick = 1,
	};
}
