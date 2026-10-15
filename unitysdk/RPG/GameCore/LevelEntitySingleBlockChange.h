#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHMCAGBDPJH.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelEntitySingleBlockChange; }

#define RPG_GAMECORE_LEVELENTITYSINGLEBLOCKCHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0xE6ED970)
#define RPG_GAMECORE_LEVELENTITYSINGLEBLOCKCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0xE6EDA60)
#define RPG_GAMECORE_LEVELENTITYSINGLEBLOCKCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6EDA10)
#define RPG_GAMECORE_LEVELENTITYSINGLEBLOCKCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6ED9C0)
#define RPG_GAMECORE_LEVELENTITYSINGLEBLOCKCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xE6ED8C0)

namespace RPG::GameCore
{
	class LevelEntitySingleBlockChange : public ::CMPGEAFHHDC
	{
	public:
		::CHMCAGBDPJH ChangeParams; // 0x18
		::RPG::GameCore::GameEntity* Target; // 0x128
		::RPG::GameCore::FixPoint ChangeValue; // 0x130
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSINGLEBLOCKCHANGE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntitySingleBlockChange* Init(::RPG::GameCore::GameEntity* a1, ::CHMCAGBDPJH a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::LevelEntitySingleBlockChange*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::CHMCAGBDPJH, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSINGLEBLOCKCHANGE_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSINGLEBLOCKCHANGE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSINGLEBLOCKCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSINGLEBLOCKCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
