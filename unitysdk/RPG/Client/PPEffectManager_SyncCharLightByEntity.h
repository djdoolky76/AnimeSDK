#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_PPEFFECTMANAGER_SYNCCHARLIGHTBYENTITY_EQUALS_OFFSET UNITYSDK_OFFSET(0xF9390)

namespace RPG::Client
{
	inline static constexpr unsigned int PPEffectManager_SyncCharLightByEntity_TypeDefinitionIndex = 71730;

	struct alignas(8) PPEffectManager_SyncCharLightByEntity
	{
		::RPG::GameCore::GameEntity* Entity; // 0x10
		::System::Boolean IsSync; // 0x18
		/*
		::System::Boolean Equals(::RPG::Client::PPEffectManager_SyncCharLightByEntity a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PPEffectManager_SyncCharLightByEntity))((::PBYTE)hIl2Cpp + RPG_CLIENT_PPEFFECTMANAGER_SYNCCHARLIGHTBYENTITY_EQUALS_OFFSET))(this, a1);
		}
		*/

	};
}
