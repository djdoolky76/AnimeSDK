#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHMCAGBDPJH.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelEntitySpecialSPChange; }

#define RPG_GAMECORE_LEVELENTITYSPECIALSPCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0xE6E2F50)
#define RPG_GAMECORE_LEVELENTITYSPECIALSPCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6E2F00)
#define RPG_GAMECORE_LEVELENTITYSPECIALSPCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6E2EB0)
#define RPG_GAMECORE_LEVELENTITYSPECIALSPCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xE6E2E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntitySpecialSPChange_TypeDefinitionIndex = 56762;

	class LevelEntitySpecialSPChange : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::GameEntity* Target; // 0x18
		::CHMCAGBDPJH ChangeParams; // 0x20
		::RPG::GameCore::FixPoint ChangeValue; // 0x130
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSPECIALSPCHANGE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntitySpecialSPChange* Init(::RPG::GameCore::GameEntity* a1, ::CHMCAGBDPJH a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::LevelEntitySpecialSPChange*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::CHMCAGBDPJH, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSPECIALSPCHANGE_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSPECIALSPCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSPECIALSPCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
