#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_LEVELTURNENDEXIT_CLEAR_OFFSET UNITYSDK_OFFSET(0xF1F9070)
#define RPG_GAMECORE_LEVELTURNENDEXIT_CTOR_OFFSET UNITYSDK_OFFSET(0xF1F9150)
#define RPG_GAMECORE_LEVELTURNENDEXIT_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xF1F90B0)
#define RPG_GAMECORE_LEVELTURNENDEXIT_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xF1F9100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnEndExit_TypeDefinitionIndex = 57935;

	class LevelTurnEndExit : public ::CMPGEAFHHDC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNENDEXIT_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNENDEXIT_CLEAR_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNENDEXIT_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNENDEXIT_GETSOURCERUNTIMEID_OFFSET))(this);
		}

	};
}
