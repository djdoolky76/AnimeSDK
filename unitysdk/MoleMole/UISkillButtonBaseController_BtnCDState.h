#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UISkillButtonBaseController_BtnCDState_TypeDefinitionIndex = 55446;

	enum class UISkillButtonBaseController_BtnCDState : ::System::Int32
	{
		ForceCD = 2,
		CountCD = 3,
		None = 0,
		SilentCD = 1,
	};
}
