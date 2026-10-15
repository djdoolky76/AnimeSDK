#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelTurnInsertAction; }

#define RPG_GAMECORE_LEVELTURNINSERTACTION_CLEAR_OFFSET UNITYSDK_OFFSET(0xE6EC200)
#define RPG_GAMECORE_LEVELTURNINSERTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0xE6EC310)
#define RPG_GAMECORE_LEVELTURNINSERTACTION_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6EC250)
#define RPG_GAMECORE_LEVELTURNINSERTACTION_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6EC2A0)
#define RPG_GAMECORE_LEVELTURNINSERTACTION_GET_INSERTACTIONENTITY_OFFSET UNITYSDK_OFFSET(0xE6EC2F0)
#define RPG_GAMECORE_LEVELTURNINSERTACTION_INIT_OFFSET UNITYSDK_OFFSET(0xE6EC1B0)
#define RPG_GAMECORE_LEVELTURNINSERTACTION_SET_INSERTACTIONENTITY_OFFSET UNITYSDK_OFFSET(0xE6EC300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnInsertAction_TypeDefinitionIndex = 56712;

	class LevelTurnInsertAction : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::GameEntity* _InsertActionEntity_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNINSERTACTION_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelTurnInsertAction* Init(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::LevelTurnInsertAction*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNINSERTACTION_INIT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNINSERTACTION_CLEAR_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNINSERTACTION_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNINSERTACTION_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_InsertActionEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNINSERTACTION_GET_INSERTACTIONENTITY_OFFSET))(this);
		}

		::System::Void set_InsertActionEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNINSERTACTION_SET_INSERTACTIONENTITY_OFFSET))(this, a1);
		}

	};
}
