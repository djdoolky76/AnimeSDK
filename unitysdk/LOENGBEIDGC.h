#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
namespace RPG::GameCore { class AdventureModifierInstance; }

inline static constexpr unsigned int LOENGBEIDGC_TypeDefinitionIndex = 56996;

	struct alignas(8) LOENGBEIDGC
	{
		::RPG::GameCore::AdventureModifierInstance* ILIIOLJMKME; // 0x10
		::RPG::GameCore::AttackDamageType KOIOKIBIMCB; // 0x18
		::RPG::GameCore::MonsterRank BKEGNEMICHF; // 0x1C
	};
