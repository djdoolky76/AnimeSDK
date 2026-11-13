#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHMCAGBDPJH.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class AbilityMaxSPChange; }

#define RPG_GAMECORE_ABILITYMAXSPCHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0x182752B0)
#define RPG_GAMECORE_ABILITYMAXSPCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x18275420)
#define RPG_GAMECORE_ABILITYMAXSPCHANGE_GETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x182753A0)
#define RPG_GAMECORE_ABILITYMAXSPCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x18275350)
#define RPG_GAMECORE_ABILITYMAXSPCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x18275300)
#define RPG_GAMECORE_ABILITYMAXSPCHANGE_GET_CHANGEPARAMS_OFFSET UNITYSDK_OFFSET(0x182753F0)
#define RPG_GAMECORE_ABILITYMAXSPCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0x18275210)
#define RPG_GAMECORE_ABILITYMAXSPCHANGE_SET_CHANGEPARAMS_OFFSET UNITYSDK_OFFSET(0x18275410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityMaxSPChange_TypeDefinitionIndex = 57785;

	class AbilityMaxSPChange : public ::CMPGEAFHHDC
	{
	public:
		::CHMCAGBDPJH _ChangeParams_k__BackingField; // 0x18
		::RPG::GameCore::FixPoint _ChangeValue; // 0x130
		::System::UInt32 _EntityRuntimeID; // 0x138
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYMAXSPCHANGE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityMaxSPChange* Init(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2, ::CHMCAGBDPJH a3)
		{
			return ((::RPG::GameCore::AbilityMaxSPChange*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint, ::CHMCAGBDPJH))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYMAXSPCHANGE_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYMAXSPCHANGE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYMAXSPCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYMAXSPCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetChangeValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYMAXSPCHANGE_GETCHANGEVALUE_OFFSET))(this);
		}

		::CHMCAGBDPJH get_ChangeParams()
		{
			return ((::CHMCAGBDPJH(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYMAXSPCHANGE_GET_CHANGEPARAMS_OFFSET))(this);
		}

		::System::Void set_ChangeParams(::CHMCAGBDPJH a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHMCAGBDPJH))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYMAXSPCHANGE_SET_CHANGEPARAMS_OFFSET))(this, a1);
		}

	};
}
