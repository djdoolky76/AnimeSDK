#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class LevelEntityEndUseInsertAbility; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELENTITYENDUSEINSERTABILITY_CLEAR_OFFSET UNITYSDK_OFFSET(0xE6ECAF0)
#define RPG_GAMECORE_LEVELENTITYENDUSEINSERTABILITY_CTOR_OFFSET UNITYSDK_OFFSET(0xE6ECBE0)
#define RPG_GAMECORE_LEVELENTITYENDUSEINSERTABILITY_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6ECB90)
#define RPG_GAMECORE_LEVELENTITYENDUSEINSERTABILITY_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6ECB40)
#define RPG_GAMECORE_LEVELENTITYENDUSEINSERTABILITY_INIT_OFFSET UNITYSDK_OFFSET(0xE6ECA80)

namespace RPG::GameCore
{
	class LevelEntityEndUseInsertAbility : public ::CMPGEAFHHDC
	{
	public:
		::System::String* AbilityName; // 0x18
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* CustomFlags; // 0x20
		::RPG::GameCore::GameEntity* Target; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYENDUSEINSERTABILITY_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityEndUseInsertAbility* Init(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::Il2CppArray<::RPG::GameCore::JsonEnum*>* a3)
		{
			return ((::RPG::GameCore::LevelEntityEndUseInsertAbility*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYENDUSEINSERTABILITY_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYENDUSEINSERTABILITY_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYENDUSEINSERTABILITY_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYENDUSEINSERTABILITY_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
