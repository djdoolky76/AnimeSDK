#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHMCAGBDPJH.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class AbilityCurrentHPChange; }

#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0xE4B46C0)
#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xE4B45A0)
#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE4B4500)
#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GETNEGATIVEHPCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xE4B45F0)
#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GETORIGINMODIFYVALUE_OFFSET UNITYSDK_OFFSET(0xE4B4550)
#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GETPOSITIVEHPCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xE4B4640)
#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE4B44B0)
#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GET_CHANGEPARAMS_OFFSET UNITYSDK_OFFSET(0xE4B4690)
#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xE4B43E0)
#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE_SET_CHANGEPARAMS_OFFSET UNITYSDK_OFFSET(0xE4B46B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityCurrentHPChange_TypeDefinitionIndex = 56562;

	class AbilityCurrentHPChange : public ::CMPGEAFHHDC
	{
	public:
		::CHMCAGBDPJH _ChangeParams_k__BackingField; // 0x18
		::System::UInt32 _EntityRuntimeID; // 0x128
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint _ChangeValue; // 0x130
		::RPG::GameCore::FixPoint _NegativeHPChangeValue; // 0x138
		::RPG::GameCore::FixPoint _OriginModifyValue; // 0x140
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTHPCHANGE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityCurrentHPChange* Init(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::CHMCAGBDPJH a4, ::RPG::GameCore::FixPoint a5)
		{
			return ((::RPG::GameCore::AbilityCurrentHPChange*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::CHMCAGBDPJH, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTHPCHANGE_INIT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetOriginModifyValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GETORIGINMODIFYVALUE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetChangeValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GETCHANGEVALUE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetNegativeHPChangeValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GETNEGATIVEHPCHANGEVALUE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetPositiveHPChangeValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GETPOSITIVEHPCHANGEVALUE_OFFSET))(this);
		}

		::CHMCAGBDPJH get_ChangeParams()
		{
			return ((::CHMCAGBDPJH(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GET_CHANGEPARAMS_OFFSET))(this);
		}

		::System::Void set_ChangeParams(::CHMCAGBDPJH a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHMCAGBDPJH))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTHPCHANGE_SET_CHANGEPARAMS_OFFSET))(this, a1);
		}

	};
}
