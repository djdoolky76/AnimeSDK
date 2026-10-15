#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

inline static constexpr unsigned int GMOELMHCNEE___c__DisplayClass1_1_TypeDefinitionIndex = 54826;

	template <typename T>
	struct alignas(8) GMOELMHCNEE___c__DisplayClass1_1
	{
		::RPG::GameCore::TurnBasedAbilityComponent* abilityCpnt; // 0x10
		::RPG::GameCore::AttackDamageType attachedDamageType; // 0x18
	};
