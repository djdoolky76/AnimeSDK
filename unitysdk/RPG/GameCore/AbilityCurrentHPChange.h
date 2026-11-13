#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHMCAGBDPJH.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class AbilityCurrentHPChange; }

#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1826E810)
#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x1826E6F0)
#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1826E650)
#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GETNEGATIVEHPCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x1826E740)
#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GETORIGINMODIFYVALUE_OFFSET UNITYSDK_OFFSET(0x1826E6A0)
#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GETPOSITIVEHPCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x1826E790)
#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1826E600)
#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE_GET_CHANGEPARAMS_OFFSET UNITYSDK_OFFSET(0x1826E7E0)
#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0x1826E530)
#define RPG_GAMECORE_ABILITYCURRENTHPCHANGE_SET_CHANGEPARAMS_OFFSET UNITYSDK_OFFSET(0x1826E800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityCurrentHPChange_TypeDefinitionIndex = 57782;

	class AbilityCurrentHPChange : public ::CMPGEAFHHDC
	{
	public:
		::CHMCAGBDPJH _ChangeParams_k__BackingField; // 0x18
		::RPG::GameCore::FixPoint _ChangeValue; // 0x130
		::System::UInt32 _EntityRuntimeID; // 0x138
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint _NegativeHPChangeValue; // 0x140
		::RPG::GameCore::FixPoint _OriginModifyValue; // 0x148
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
