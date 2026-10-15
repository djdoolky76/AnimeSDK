#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class LevelSelectBuffConfirm; }

#define RPG_GAMECORE_LEVELSELECTBUFFCONFIRM_CTOR_OFFSET UNITYSDK_OFFSET(0xE6F5200)
#define RPG_GAMECORE_LEVELSELECTBUFFCONFIRM_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6F51B0)
#define RPG_GAMECORE_LEVELSELECTBUFFCONFIRM_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6F5160)
#define RPG_GAMECORE_LEVELSELECTBUFFCONFIRM_INIT_OFFSET UNITYSDK_OFFSET(0xE6F5110)

namespace RPG::GameCore
{
	class LevelSelectBuffConfirm : public ::CMPGEAFHHDC
	{
	public:
		::System::UInt32 MazeBuffID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTBUFFCONFIRM_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelSelectBuffConfirm* Init(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LevelSelectBuffConfirm*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTBUFFCONFIRM_INIT_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTBUFFCONFIRM_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTBUFFCONFIRM_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
