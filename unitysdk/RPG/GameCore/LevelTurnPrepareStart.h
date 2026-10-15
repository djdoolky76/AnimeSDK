#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class LevelTurnPrepareStart; }

#define RPG_GAMECORE_LEVELTURNPREPARESTART_CLEAR_OFFSET UNITYSDK_OFFSET(0xE6EC9E0)
#define RPG_GAMECORE_LEVELTURNPREPARESTART_CTOR_OFFSET UNITYSDK_OFFSET(0xE6ECAC0)
#define RPG_GAMECORE_LEVELTURNPREPARESTART_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6ECA70)
#define RPG_GAMECORE_LEVELTURNPREPARESTART_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6ECA20)
#define RPG_GAMECORE_LEVELTURNPREPARESTART_INIT_OFFSET UNITYSDK_OFFSET(0xE6EC9A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnPrepareStart_TypeDefinitionIndex = 56700;

	class LevelTurnPrepareStart : public ::CMPGEAFHHDC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNPREPARESTART_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelTurnPrepareStart* Init()
		{
			return ((::RPG::GameCore::LevelTurnPrepareStart*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNPREPARESTART_INIT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNPREPARESTART_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNPREPARESTART_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNPREPARESTART_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
