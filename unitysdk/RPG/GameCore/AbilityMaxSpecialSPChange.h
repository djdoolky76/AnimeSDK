#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHMCAGBDPJH.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class AbilityMaxSpecialSPChange; }

#define RPG_GAMECORE_ABILITYMAXSPECIALSPCHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0xE4BACC0)
#define RPG_GAMECORE_ABILITYMAXSPECIALSPCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0xE4BAE30)
#define RPG_GAMECORE_ABILITYMAXSPECIALSPCHANGE_GETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xE4BADB0)
#define RPG_GAMECORE_ABILITYMAXSPECIALSPCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE4BAD60)
#define RPG_GAMECORE_ABILITYMAXSPECIALSPCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE4BAD10)
#define RPG_GAMECORE_ABILITYMAXSPECIALSPCHANGE_GET_CHANGEPARAMS_OFFSET UNITYSDK_OFFSET(0xE4BAE00)
#define RPG_GAMECORE_ABILITYMAXSPECIALSPCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xE4BAC20)
#define RPG_GAMECORE_ABILITYMAXSPECIALSPCHANGE_SET_CHANGEPARAMS_OFFSET UNITYSDK_OFFSET(0xE4BAE20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityMaxSpecialSPChange_TypeDefinitionIndex = 56567;

	class AbilityMaxSpecialSPChange : public ::CMPGEAFHHDC
	{
	public:
		::CHMCAGBDPJH _ChangeParams_k__BackingField; // 0x18
		::System::UInt32 _EntityRuntimeID; // 0x128
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint _ChangeValue; // 0x130
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYMAXSPECIALSPCHANGE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityMaxSpecialSPChange* Init(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2, ::CHMCAGBDPJH a3)
		{
			return ((::RPG::GameCore::AbilityMaxSpecialSPChange*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint, ::CHMCAGBDPJH))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYMAXSPECIALSPCHANGE_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYMAXSPECIALSPCHANGE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYMAXSPECIALSPCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYMAXSPECIALSPCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetChangeValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYMAXSPECIALSPCHANGE_GETCHANGEVALUE_OFFSET))(this);
		}

		::CHMCAGBDPJH get_ChangeParams()
		{
			return ((::CHMCAGBDPJH(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYMAXSPECIALSPCHANGE_GET_CHANGEPARAMS_OFFSET))(this);
		}

		::System::Void set_ChangeParams(::CHMCAGBDPJH a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHMCAGBDPJH))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYMAXSPECIALSPCHANGE_SET_CHANGEPARAMS_OFFSET))(this, a1);
		}

	};
}
