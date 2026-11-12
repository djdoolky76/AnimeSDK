#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelTurnBegin; }

#define RPG_GAMECORE_LEVELTURNBEGIN_CLEAR_OFFSET UNITYSDK_OFFSET(0xF1F8D80)
#define RPG_GAMECORE_LEVELTURNBEGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xF1F8EF0)
#define RPG_GAMECORE_LEVELTURNBEGIN_GETACTIVEENTITY_OFFSET UNITYSDK_OFFSET(0xF1F8E70)
#define RPG_GAMECORE_LEVELTURNBEGIN_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xF1F8E20)
#define RPG_GAMECORE_LEVELTURNBEGIN_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xF1F8DD0)
#define RPG_GAMECORE_LEVELTURNBEGIN_GETTURNCOUNTER_OFFSET UNITYSDK_OFFSET(0xF1F8EB0)
#define RPG_GAMECORE_LEVELTURNBEGIN_INIT_OFFSET UNITYSDK_OFFSET(0xF1F8D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnBegin_TypeDefinitionIndex = 57923;

	class LevelTurnBegin : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::GameEntity* _ActiveEntity; // 0x18
		::System::UInt32 _TurnCounter; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNBEGIN_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelTurnBegin* Init(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::LevelTurnBegin*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNBEGIN_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNBEGIN_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNBEGIN_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNBEGIN_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetActiveEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNBEGIN_GETACTIVEENTITY_OFFSET))(this);
		}

		::System::UInt32 GetTurnCounter()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNBEGIN_GETTURNCOUNTER_OFFSET))(this);
		}

	};
}
