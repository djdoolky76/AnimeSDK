#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHMCAGBDPJH.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class AbilityCurrentSpecialSPChange; }

#define RPG_GAMECORE_ABILITYCURRENTSPECIALSPCHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0xE4AA220)
#define RPG_GAMECORE_ABILITYCURRENTSPECIALSPCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0xE4AA3E0)
#define RPG_GAMECORE_ABILITYCURRENTSPECIALSPCHANGE_GETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xE4AA310)
#define RPG_GAMECORE_ABILITYCURRENTSPECIALSPCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE4AA2C0)
#define RPG_GAMECORE_ABILITYCURRENTSPECIALSPCHANGE_GETRAWCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xE4AA360)
#define RPG_GAMECORE_ABILITYCURRENTSPECIALSPCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE4AA270)
#define RPG_GAMECORE_ABILITYCURRENTSPECIALSPCHANGE_GET_CHANGEPARAMS_OFFSET UNITYSDK_OFFSET(0xE4AA3B0)
#define RPG_GAMECORE_ABILITYCURRENTSPECIALSPCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xE4AA160)
#define RPG_GAMECORE_ABILITYCURRENTSPECIALSPCHANGE_SET_CHANGEPARAMS_OFFSET UNITYSDK_OFFSET(0xE4AA3D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityCurrentSpecialSPChange_TypeDefinitionIndex = 56566;

	class AbilityCurrentSpecialSPChange : public ::CMPGEAFHHDC
	{
	public:
		::CHMCAGBDPJH _ChangeParams_k__BackingField; // 0x18
		::RPG::GameCore::FixPoint _RawChangeValue; // 0x128
		::RPG::GameCore::FixPoint _ChangeValue; // 0x130
		::System::UInt32 _EntityRuntimeID; // 0x138
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSPECIALSPCHANGE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityCurrentSpecialSPChange* Init(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::CHMCAGBDPJH a4)
		{
			return ((::RPG::GameCore::AbilityCurrentSpecialSPChange*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::CHMCAGBDPJH))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSPECIALSPCHANGE_INIT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSPECIALSPCHANGE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSPECIALSPCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSPECIALSPCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetChangeValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSPECIALSPCHANGE_GETCHANGEVALUE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetRawChangeValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSPECIALSPCHANGE_GETRAWCHANGEVALUE_OFFSET))(this);
		}

		::CHMCAGBDPJH get_ChangeParams()
		{
			return ((::CHMCAGBDPJH(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSPECIALSPCHANGE_GET_CHANGEPARAMS_OFFSET))(this);
		}

		::System::Void set_ChangeParams(::CHMCAGBDPJH a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHMCAGBDPJH))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSPECIALSPCHANGE_SET_CHANGEPARAMS_OFFSET))(this, a1);
		}

	};
}
