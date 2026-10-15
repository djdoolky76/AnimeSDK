#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHMCAGBDPJH.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelEntityShieldChange; }

#define RPG_GAMECORE_LEVELENTITYSHIELDCHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0xE6ED7C0)
#define RPG_GAMECORE_LEVELENTITYSHIELDCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0xE6ED8B0)
#define RPG_GAMECORE_LEVELENTITYSHIELDCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6ED860)
#define RPG_GAMECORE_LEVELENTITYSHIELDCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6ED810)
#define RPG_GAMECORE_LEVELENTITYSHIELDCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xE6ED710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityShieldChange_TypeDefinitionIndex = 56838;

	class LevelEntityShieldChange : public ::CMPGEAFHHDC
	{
	public:
		::CHMCAGBDPJH ChangeParams; // 0x18
		::RPG::GameCore::GameEntity* Target; // 0x128
		::RPG::GameCore::FixPoint ChangeValue; // 0x130
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSHIELDCHANGE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityShieldChange* Init(::RPG::GameCore::GameEntity* a1, ::CHMCAGBDPJH a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::LevelEntityShieldChange*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::CHMCAGBDPJH, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSHIELDCHANGE_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSHIELDCHANGE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSHIELDCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSHIELDCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
