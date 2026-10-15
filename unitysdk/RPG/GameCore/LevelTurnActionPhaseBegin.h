#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELTURNACTIONPHASEBEGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xE6F5E10)
#define RPG_GAMECORE_LEVELTURNACTIONPHASEBEGIN_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6F5E70)
#define RPG_GAMECORE_LEVELTURNACTIONPHASEBEGIN_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6F5E20)
#define RPG_GAMECORE_LEVELTURNACTIONPHASEBEGIN_GET_ACTIVEENTITY_OFFSET UNITYSDK_OFFSET(0xE6F5EC0)

namespace RPG::GameCore
{
	class LevelTurnActionPhaseBegin : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* _ActiveEntity; // 0x10
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNACTIONPHASEBEGIN_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNACTIONPHASEBEGIN_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNACTIONPHASEBEGIN_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_ActiveEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNACTIONPHASEBEGIN_GET_ACTIVEENTITY_OFFSET))(this);
		}

	};
}
