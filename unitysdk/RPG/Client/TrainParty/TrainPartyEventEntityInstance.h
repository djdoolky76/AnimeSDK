#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYEVENTENTITYINSTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C632260)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyEventEntityInstance_TypeDefinitionIndex = 76471;

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
