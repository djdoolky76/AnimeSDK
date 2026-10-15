#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class AbilityCurrentStanceChange; }

#define RPG_GAMECORE_ABILITYCURRENTSTANCECHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0xE4B5020)
#define RPG_GAMECORE_ABILITYCURRENTSTANCECHANGE_GETCHANGERATIO_OFFSET UNITYSDK_OFFSET(0xE4B4FE0)
#define RPG_GAMECORE_ABILITYCURRENTSTANCECHANGE_GETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xE4B4FA0)
#define RPG_GAMECORE_ABILITYCURRENTSTANCECHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE4B4F50)
#define RPG_GAMECORE_ABILITYCURRENTSTANCECHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE4B4F10)
#define RPG_GAMECORE_ABILITYCURRENTSTANCECHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xE4B4EB0)

namespace RPG::GameCore
{
	class AbilityCurrentStanceChange : public ::CMPGEAFHHDC
	{
	public:
		::System::UInt32 _EntityRuntimeID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint _ChangeValue; // 0x20
		::RPG::GameCore::FixPoint _ChangeRatio; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSTANCECHANGE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityCurrentStanceChange* Init(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::AbilityCurrentStanceChange*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSTANCECHANGE_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSTANCECHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSTANCECHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetChangeValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSTANCECHANGE_GETCHANGEVALUE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetChangeRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSTANCECHANGE_GETCHANGERATIO_OFFSET))(this);
		}

	};
}
