#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
namespace RPG::GameCore { class GameEntity; }

#define IJPDFNGMDFN_PAHHJALJOLH_CTOR_OFFSET UNITYSDK_OFFSET(0x14160)

inline static constexpr unsigned int IJPDFNGMDFN_PAHHJALJOLH_TypeDefinitionIndex = 58492;

	struct alignas(8) IJPDFNGMDFN_PAHHJALJOLH
	{
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::RPG::GameCore::AdventureModifierBehaviorFlag FNPGDNFLMPC; // 0x18
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AdventureModifierBehaviorFlag a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureModifierBehaviorFlag))((::PBYTE)hIl2Cpp + IJPDFNGMDFN_PAHHJALJOLH_CTOR_OFFSET))(this, a1, a2);
		}

	};
