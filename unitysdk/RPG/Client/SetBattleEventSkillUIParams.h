#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_SETBATTLEEVENTSKILLUIPARAMS_CTOR_OFFSET UNITYSDK_OFFSET(0xE0B3760)

namespace RPG::Client
{
	class SetBattleEventSkillUIParams : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Entity; // 0x10
		::System::Boolean IsShow; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETBATTLEEVENTSKILLUIPARAMS_CTOR_OFFSET))(this);
		}

	};
}
