#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHMCAGBDPJH.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class AbilityCurrentShieldChange; }

#define RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1826EB70)
#define RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1826ED60)
#define RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_GETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x1826ECB0)
#define RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_GETDISPLAYVALUE_OFFSET UNITYSDK_OFFSET(0x1826ED00)
#define RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1826EC10)
#define RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_GETSHOWTEXT_OFFSET UNITYSDK_OFFSET(0x1826EC60)
#define RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1826EBC0)
#define RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0x1826EAB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityCurrentShieldChange_TypeDefinitionIndex = 57796;

	class AbilityCurrentShieldChange : public ::CMPGEAFHHDC
	{
	public:
		::CHMCAGBDPJH ChangeParams; // 0x18
		::System::Boolean _ShowText; // 0x130
		::System::Byte _padding0[0x3];
		::System::UInt32 _SourceEntityRuntimeID; // 0x134
		::RPG::GameCore::FixPoint _ChangeValue; // 0x138
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityCurrentShieldChange* Init(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2, ::System::Boolean a3, ::CHMCAGBDPJH a4)
		{
			return ((::RPG::GameCore::AbilityCurrentShieldChange*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint, ::System::Boolean, ::CHMCAGBDPJH))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_INIT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Boolean GetShowText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_GETSHOWTEXT_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetChangeValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_GETCHANGEVALUE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetDisplayValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCURRENTSHIELDCHANGE_GETDISPLAYVALUE_OFFSET))(this);
		}

	};
}
