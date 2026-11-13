#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class AdventureTeamLeaderChange; }
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0x19FFD6F0)
#define RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x19FFD820)
#define RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x19FFD740)
#define RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x19FFD790)
#define RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_GET_LEADERENTITY_OFFSET UNITYSDK_OFFSET(0x19FFD800)
#define RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_GET_OLDLEADERENTITY_OFFSET UNITYSDK_OFFSET(0x19FFD7E0)
#define RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0x19FFD690)
#define RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_SET_LEADERENTITY_OFFSET UNITYSDK_OFFSET(0x19FFD810)
#define RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_SET_OLDLEADERENTITY_OFFSET UNITYSDK_OFFSET(0x19FFD7F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureTeamLeaderChange_TypeDefinitionIndex = 57832;

	class AdventureTeamLeaderChange : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::GameEntity* _LeaderEntity_k__BackingField; // 0x18
		::RPG::GameCore::GameEntity* _OldLeaderEntity_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AdventureTeamLeaderChange* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::GameCore::AdventureTeamLeaderChange*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_CLEAR_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_OldLeaderEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_GET_OLDLEADERENTITY_OFFSET))(this);
		}

		::System::Void set_OldLeaderEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_SET_OLDLEADERENTITY_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_LeaderEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_GET_LEADERENTITY_OFFSET))(this);
		}

		::System::Void set_LeaderEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETEAMLEADERCHANGE_SET_LEADERENTITY_OFFSET))(this, a1);
		}

	};
}
