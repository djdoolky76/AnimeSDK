#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYEVENTENTITYINSTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0xE2E43B0)

namespace RPG::Client::TrainParty
{
	class TrainPartyEventEntityInstance : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Entity; // 0x10
		::System::Boolean IsHero; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYEVENTENTITYINSTANCE_CTOR_OFFSET))(this);
		}

	};
}
