#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class LevelGameModeEnd; }

#define RPG_GAMECORE_LEVELGAMEMODEEND_CTOR_OFFSET UNITYSDK_OFFSET(0xE6EEFB0)
#define RPG_GAMECORE_LEVELGAMEMODEEND_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6EEF60)
#define RPG_GAMECORE_LEVELGAMEMODEEND_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6EEF10)
#define RPG_GAMECORE_LEVELGAMEMODEEND_INIT_OFFSET UNITYSDK_OFFSET(0xE6EEED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGameModeEnd_TypeDefinitionIndex = 56698;

	class LevelGameModeEnd : public ::CMPGEAFHHDC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGAMEMODEEND_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelGameModeEnd* Init()
		{
			return ((::RPG::GameCore::LevelGameModeEnd*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGAMEMODEEND_INIT_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGAMEMODEEND_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGAMEMODEEND_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
