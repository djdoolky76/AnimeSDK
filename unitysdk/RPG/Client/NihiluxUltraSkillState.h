#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int NihiluxUltraSkillState_TypeDefinitionIndex = 73952;

	enum class NihiluxUltraSkillState : ::System::Int32
	{
		None = 0,
		Charging = 1,
		Full = 2,
		Active = 3,
	};
}
