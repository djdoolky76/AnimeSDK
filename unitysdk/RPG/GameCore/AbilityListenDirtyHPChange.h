#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHMCAGBDPJH.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class AbilityListenDirtyHPChange; }
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ABILITYLISTENDIRTYHPCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0xEF79C70)
#define RPG_GAMECORE_ABILITYLISTENDIRTYHPCHANGE_GETCHANGEPARAMS_OFFSET UNITYSDK_OFFSET(0xEF79C00)
#define RPG_GAMECORE_ABILITYLISTENDIRTYHPCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xEF79A80)
#define RPG_GAMECORE_ABILITYLISTENDIRTYHPCHANGE_GETHPCHANGE_OFFSET UNITYSDK_OFFSET(0xEF79B70)
#define RPG_GAMECORE_ABILITYLISTENDIRTYHPCHANGE_GETNEWDIRTYHPRATIO_OFFSET UNITYSDK_OFFSET(0xEF79AD0)
#define RPG_GAMECORE_ABILITYLISTENDIRTYHPCHANGE_GETNEWDIRTYHPVALUE_OFFSET UNITYSDK_OFFSET(0xEF79B20)
#define RPG_GAMECORE_ABILITYLISTENDIRTYHPCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xEF79A30)
#define RPG_GAMECORE_ABILITYLISTENDIRTYHPCHANGE_GETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0xEF79BC0)
#define RPG_GAMECORE_ABILITYLISTENDIRTYHPCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xEF79960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityListenDirtyHPChange_TypeDefinitionIndex = 57790;

	class AbilityListenDirtyHPChange : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::GameEntity* _TargetEntity; // 0x18
		::CHMCAGBDPJH _ChangeParams; // 0x20
		::RPG::GameCore::FixPoint _HPChange; // 0x138
		::RPG::GameCore::FixPoint _NewRatio; // 0x140
		::RPG::GameCore::FixPoint _NewDirtyHp; // 0x148
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYLISTENDIRTYHPCHANGE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityListenDirtyHPChange* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::CHMCAGBDPJH a5)
		{
			return ((::RPG::GameCore::AbilityListenDirtyHPChange*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::CHMCAGBDPJH))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYLISTENDIRTYHPCHANGE_INIT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYLISTENDIRTYHPCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYLISTENDIRTYHPCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetNewDirtyHPRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYLISTENDIRTYHPCHANGE_GETNEWDIRTYHPRATIO_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetNewDirtyHPValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYLISTENDIRTYHPCHANGE_GETNEWDIRTYHPVALUE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetHPChange()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYLISTENDIRTYHPCHANGE_GETHPCHANGE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetTargetEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYLISTENDIRTYHPCHANGE_GETTARGETENTITY_OFFSET))(this);
		}

		::CHMCAGBDPJH GetChangeParams()
		{
			return ((::CHMCAGBDPJH(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYLISTENDIRTYHPCHANGE_GETCHANGEPARAMS_OFFSET))(this);
		}

	};
}
