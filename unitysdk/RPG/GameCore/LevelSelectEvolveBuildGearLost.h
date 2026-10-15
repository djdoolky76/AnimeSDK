#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class LevelSelectEvolveBuildGearLost; }

#define RPG_GAMECORE_LEVELSELECTEVOLVEBUILDGEARLOST_CTOR_OFFSET UNITYSDK_OFFSET(0xE6F5600)
#define RPG_GAMECORE_LEVELSELECTEVOLVEBUILDGEARLOST_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6F55B0)
#define RPG_GAMECORE_LEVELSELECTEVOLVEBUILDGEARLOST_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6F5560)
#define RPG_GAMECORE_LEVELSELECTEVOLVEBUILDGEARLOST_INIT_OFFSET UNITYSDK_OFFSET(0xE6F5510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelSelectEvolveBuildGearLost_TypeDefinitionIndex = 56823;

	class LevelSelectEvolveBuildGearLost : public ::CMPGEAFHHDC
	{
	public:
		::System::UInt32 SelectIndex; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTEVOLVEBUILDGEARLOST_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelSelectEvolveBuildGearLost* Init(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LevelSelectEvolveBuildGearLost*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTEVOLVEBUILDGEARLOST_INIT_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTEVOLVEBUILDGEARLOST_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTEVOLVEBUILDGEARLOST_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
