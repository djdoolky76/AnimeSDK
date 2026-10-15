#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifierInfectType.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

	struct alignas(8) FHMCLFNOJNJ
	{
		::RPG::GameCore::TurnBasedModifierInstance* NGBAPOEDIOJ; // 0x10
		::RPG::GameCore::ModifierInfectType JPGHCIIOAOC; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::GameEntity* AMLKIGFLNHI; // 0x20
		::RPG::GameCore::GameEntity* AEIJCBFMHOI; // 0x28
		::RPG::GameCore::FixPoint MFGHABANPCE; // 0x30
		::System::Boolean EBFMNCJNMPF; // 0x38
		::System::Boolean MBJGAMBENFD; // 0x39
	};
