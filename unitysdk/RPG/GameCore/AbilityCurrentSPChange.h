#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHMCAGBDPJH.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class AbilityCurrentSPChange; }

#define RPG_GAMECORE_ABILITYCURRENTSPCHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0xE4B4790)
#define RPG_GAMECORE_ABILITYCURRENTSPCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0xE4B4950)
#define RPG_GAMECORE_ABILITYCURRENTSPCHANGE_GETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xE4B4880)
#define RPG_GAMECORE_ABILITYCURRENTSPCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE4B4830)
#define RPG_GAMECORE_ABILITYCURRENTSPCHANGE_GETRAWCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xE4B48D0)
#define RPG_GAMECORE_ABILITYCURRENTSPCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE4B47E0)
#define RPG_GAMECORE_ABILITYCURRENTSPCHANGE_GET_CHANGEPARAMS_OFFSET UNITYSDK_OFFSET(0xE4B4920)
#define RPG_GAMECORE_ABILITYCURRENTSPCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xE4B46D0)
#define RPG_GAMECORE_ABILITYCURRENTSPCHANGE_SET_CHANGEPARAMS_OFFSET UNITYSDK_OFFSET(0xE4B4940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityCurrentSPChange_TypeDefinitionIndex = 56564;

	class AbilityCurrentSPChange : public ::CMPGEAFHHDC
	{
	public:
		::CHMCAGBDPJH _ChangeParams_k__BackingField; // 0x18
		::RPG::GameCore::FixPoint _ChangeValue; // 0x128
		::System::UInt32 _EntityRuntimeID; // 0x130
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint _RawChangeValue; // 0x138
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSPCHANGE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityCurrentSPChange* Init(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::CHMCAGBDPJH a4)
		{
			return ((::RPG::GameCore::AbilityCurrentSPChange*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::CHMCAGBDPJH))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSPCHANGE_INIT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSPCHANGE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSPCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSPCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetChangeValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSPCHANGE_GETCHANGEVALUE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetRawChangeValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSPCHANGE_GETRAWCHANGEVALUE_OFFSET))(this);
		}

		::CHMCAGBDPJH get_ChangeParams()
		{
			return ((::CHMCAGBDPJH(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSPCHANGE_GET_CHANGEPARAMS_OFFSET))(this);
		}

		::System::Void set_ChangeParams(::CHMCAGBDPJH a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHMCAGBDPJH))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSPCHANGE_SET_CHANGEPARAMS_OFFSET))(this, a1);
		}

	};
}
