#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHMCAGBDPJH.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class AbilityDirtyHPChange; }
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ABILITYDIRTYHPCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0xEF74180)
#define RPG_GAMECORE_ABILITYDIRTYHPCHANGE_GETCHANGEPARAMS_OFFSET UNITYSDK_OFFSET(0xEF74110)
#define RPG_GAMECORE_ABILITYDIRTYHPCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xEF73F80)
#define RPG_GAMECORE_ABILITYDIRTYHPCHANGE_GETHPCHANGE_OFFSET UNITYSDK_OFFSET(0xEF74070)
#define RPG_GAMECORE_ABILITYDIRTYHPCHANGE_GETNEWDIRTYHPRATIO_OFFSET UNITYSDK_OFFSET(0xEF73FD0)
#define RPG_GAMECORE_ABILITYDIRTYHPCHANGE_GETNEWDIRTYHPVALUE_OFFSET UNITYSDK_OFFSET(0xEF74020)
#define RPG_GAMECORE_ABILITYDIRTYHPCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xEF73F20)
#define RPG_GAMECORE_ABILITYDIRTYHPCHANGE_GETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0xEF740C0)
#define RPG_GAMECORE_ABILITYDIRTYHPCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xEF73E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityDirtyHPChange_TypeDefinitionIndex = 57814;

	class AbilityDirtyHPChange : public ::CMPGEAFHHDC
	{
	public:
		::CHMCAGBDPJH _ChangeParams; // 0x18
		::RPG::GameCore::GameEntity* _TargetEntity; // 0x130
		::RPG::GameCore::FixPoint _NewDirtyHp; // 0x138
		::RPG::GameCore::FixPoint _NewRatio; // 0x140
		::RPG::GameCore::FixPoint _HPChange; // 0x148
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYDIRTYHPCHANGE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityDirtyHPChange* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::CHMCAGBDPJH a5)
		{
			return ((::RPG::GameCore::AbilityDirtyHPChange*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::CHMCAGBDPJH))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYDIRTYHPCHANGE_INIT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYDIRTYHPCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYDIRTYHPCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetNewDirtyHPRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYDIRTYHPCHANGE_GETNEWDIRTYHPRATIO_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetNewDirtyHPValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYDIRTYHPCHANGE_GETNEWDIRTYHPVALUE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetHPChange()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYDIRTYHPCHANGE_GETHPCHANGE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetTargetEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYDIRTYHPCHANGE_GETTARGETENTITY_OFFSET))(this);
		}

		::CHMCAGBDPJH GetChangeParams()
		{
			return ((::CHMCAGBDPJH(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYDIRTYHPCHANGE_GETCHANGEPARAMS_OFFSET))(this);
		}

	};
}
