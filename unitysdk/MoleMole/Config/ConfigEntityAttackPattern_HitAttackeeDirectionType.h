#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAttackPattern_HitAttackeeDirectionType_TypeDefinitionIndex = 52062;

	enum class ConfigEntityAttackPattern_HitAttackeeDirectionType : ::System::Byte
	{
		AttackerForwardDir = 0,
		AttackerToAttackeeDir = 3,
		PatternToAttackeeDir = 1,
		PatternForwardDir = 2,
	};
}
