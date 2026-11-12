#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelMainMonsterChange; }

#define RPG_GAMECORE_LEVELMAINMONSTERCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0xF1F6360)
#define RPG_GAMECORE_LEVELMAINMONSTERCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xF1F62D0)
#define RPG_GAMECORE_LEVELMAINMONSTERCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xF1F6280)
#define RPG_GAMECORE_LEVELMAINMONSTERCHANGE_GET_NEWENTITY_OFFSET UNITYSDK_OFFSET(0xF1F6340)
#define RPG_GAMECORE_LEVELMAINMONSTERCHANGE_GET_OLDENTITY_OFFSET UNITYSDK_OFFSET(0xF1F6320)
#define RPG_GAMECORE_LEVELMAINMONSTERCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xF1F6220)
#define RPG_GAMECORE_LEVELMAINMONSTERCHANGE_SET_NEWENTITY_OFFSET UNITYSDK_OFFSET(0xF1F6350)
#define RPG_GAMECORE_LEVELMAINMONSTERCHANGE_SET_OLDENTITY_OFFSET UNITYSDK_OFFSET(0xF1F6330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelMainMonsterChange_TypeDefinitionIndex = 58061;

	class LevelMainMonsterChange : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::GameEntity* _OldEntity_k__BackingField; // 0x18
		::RPG::GameCore::GameEntity* _NewEntity_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMAINMONSTERCHANGE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelMainMonsterChange* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::GameCore::LevelMainMonsterChange*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMAINMONSTERCHANGE_INIT_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMAINMONSTERCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMAINMONSTERCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_OldEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMAINMONSTERCHANGE_GET_OLDENTITY_OFFSET))(this);
		}

		::System::Void set_OldEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMAINMONSTERCHANGE_SET_OLDENTITY_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_NewEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMAINMONSTERCHANGE_GET_NEWENTITY_OFFSET))(this);
		}

		::System::Void set_NewEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMAINMONSTERCHANGE_SET_NEWENTITY_OFFSET))(this, a1);
		}

	};
}
