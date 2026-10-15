#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHMCAGBDPJH.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelEntitySPChange; }

#define RPG_GAMECORE_LEVELENTITYSPCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0xE6ED700)
#define RPG_GAMECORE_LEVELENTITYSPCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6ED6B0)
#define RPG_GAMECORE_LEVELENTITYSPCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6ED660)
#define RPG_GAMECORE_LEVELENTITYSPCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xE6ED590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntitySPChange_TypeDefinitionIndex = 56757;

	class LevelEntitySPChange : public ::CMPGEAFHHDC
	{
	public:
		::CHMCAGBDPJH ChangeParams; // 0x18
		::RPG::GameCore::GameEntity* Target; // 0x128
		::RPG::GameCore::FixPoint OldValue; // 0x130
		::RPG::GameCore::FixPoint NewValue; // 0x138
		::RPG::GameCore::FixPoint ChangeValue; // 0x140
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSPCHANGE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntitySPChange* Init(::RPG::GameCore::GameEntity* a1, ::CHMCAGBDPJH a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5)
		{
			return ((::RPG::GameCore::LevelEntitySPChange*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::CHMCAGBDPJH, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSPCHANGE_INIT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSPCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSPCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
