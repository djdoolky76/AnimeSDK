#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class LevelSelectFateProjectionHougu; }

#define RPG_GAMECORE_LEVELSELECTFATEPROJECTIONHOUGU_CTOR_OFFSET UNITYSDK_OFFSET(0xE6F5700)
#define RPG_GAMECORE_LEVELSELECTFATEPROJECTIONHOUGU_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6F56B0)
#define RPG_GAMECORE_LEVELSELECTFATEPROJECTIONHOUGU_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6F5660)
#define RPG_GAMECORE_LEVELSELECTFATEPROJECTIONHOUGU_INIT_OFFSET UNITYSDK_OFFSET(0xE6F5610)

namespace RPG::GameCore
{
	class LevelSelectFateProjectionHougu : public ::CMPGEAFHHDC
	{
	public:
		::System::UInt32 SelectIndex; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTFATEPROJECTIONHOUGU_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelSelectFateProjectionHougu* Init(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LevelSelectFateProjectionHougu*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTFATEPROJECTIONHOUGU_INIT_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTFATEPROJECTIONHOUGU_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTFATEPROJECTIONHOUGU_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
