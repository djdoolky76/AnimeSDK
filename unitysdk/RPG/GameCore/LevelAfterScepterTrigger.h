#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelAfterScepterTrigger; }

#define RPG_GAMECORE_LEVELAFTERSCEPTERTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1848AEE0)
#define RPG_GAMECORE_LEVELAFTERSCEPTERTRIGGER_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1848AE70)
#define RPG_GAMECORE_LEVELAFTERSCEPTERTRIGGER_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1848AE20)
#define RPG_GAMECORE_LEVELAFTERSCEPTERTRIGGER_GET_SCEPTER_OFFSET UNITYSDK_OFFSET(0x1848AEC0)
#define RPG_GAMECORE_LEVELAFTERSCEPTERTRIGGER_INIT_OFFSET UNITYSDK_OFFSET(0x1848ADD0)
#define RPG_GAMECORE_LEVELAFTERSCEPTERTRIGGER_SET_SCEPTER_OFFSET UNITYSDK_OFFSET(0x1848AED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAfterScepterTrigger_TypeDefinitionIndex = 58056;

	class LevelAfterScepterTrigger : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::GameEntity* _Scepter_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAFTERSCEPTERTRIGGER_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelAfterScepterTrigger* Init(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::LevelAfterScepterTrigger*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAFTERSCEPTERTRIGGER_INIT_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAFTERSCEPTERTRIGGER_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAFTERSCEPTERTRIGGER_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_Scepter()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAFTERSCEPTERTRIGGER_GET_SCEPTER_OFFSET))(this);
		}

		::System::Void set_Scepter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAFTERSCEPTERTRIGGER_SET_SCEPTER_OFFSET))(this, a1);
		}

	};
}
