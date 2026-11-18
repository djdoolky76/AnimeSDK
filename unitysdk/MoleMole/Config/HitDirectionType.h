#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HitDirectionType_TypeDefinitionIndex = 91015;

	enum class HitDirectionType : ::System::Int32
	{
		AttackerForwardDir = 0,
		PatternForwardDir = 2,
		AttackerFromAttackeeSideDir = 13,
		AttackeeForwardDir = 11,
		AttackerBackDir = 10,
		PatternToAttackeeDir = 3,
		AttackerLeftDir = 8,
		AttackeeBackDir = 12,
		AttackerToAttackeeDir = 1,
		AttackerRightDir = 9,
		PatternAside = 7,
		PatternRightDir = 6,
		PatternBackDir = 4,
		None = 999,
		PatternLeftDir = 5,
	};
}
