#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_BATTLEONWEAKRESISTANCECHANGEPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xE5CADF0)

namespace RPG::GameCore
{
	class BattleOnWeakResistanceChangeParam : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Entity; // 0x10
		::RPG::GameCore::FixPoint fOldValue; // 0x18
		::RPG::GameCore::AbilityProperty Property; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint fNewValue; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEONWEAKRESISTANCECHANGEPARAM_CTOR_OFFSET))(this);
		}

	};
}
