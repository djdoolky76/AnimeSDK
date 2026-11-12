#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHMCAGBDPJH.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class AbilitySingleBlockChange; }

#define RPG_GAMECORE_ABILITYSINGLEBLOCKCHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0xEF7A8D0)
#define RPG_GAMECORE_ABILITYSINGLEBLOCKCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0xEF7AAC0)
#define RPG_GAMECORE_ABILITYSINGLEBLOCKCHANGE_GETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xEF7AA10)
#define RPG_GAMECORE_ABILITYSINGLEBLOCKCHANGE_GETDISPLAYVALUE_OFFSET UNITYSDK_OFFSET(0xEF7AA60)
#define RPG_GAMECORE_ABILITYSINGLEBLOCKCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xEF7A970)
#define RPG_GAMECORE_ABILITYSINGLEBLOCKCHANGE_GETSHOWTEXT_OFFSET UNITYSDK_OFFSET(0xEF7A9C0)
#define RPG_GAMECORE_ABILITYSINGLEBLOCKCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xEF7A920)
#define RPG_GAMECORE_ABILITYSINGLEBLOCKCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xEF7A810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilitySingleBlockChange_TypeDefinitionIndex = 57797;

	class AbilitySingleBlockChange : public ::CMPGEAFHHDC
	{
	public:
		::CHMCAGBDPJH ChangeParams; // 0x18
		::RPG::GameCore::FixPoint _ChangeValue; // 0x130
		::System::UInt32 _SourceEntityRuntimeID; // 0x138
		::System::Boolean _ShowText; // 0x13C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSINGLEBLOCKCHANGE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilitySingleBlockChange* Init(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2, ::System::Boolean a3, ::CHMCAGBDPJH a4)
		{
			return ((::RPG::GameCore::AbilitySingleBlockChange*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint, ::System::Boolean, ::CHMCAGBDPJH))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSINGLEBLOCKCHANGE_INIT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSINGLEBLOCKCHANGE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSINGLEBLOCKCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSINGLEBLOCKCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Boolean GetShowText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSINGLEBLOCKCHANGE_GETSHOWTEXT_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetChangeValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSINGLEBLOCKCHANGE_GETCHANGEVALUE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetDisplayValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSINGLEBLOCKCHANGE_GETDISPLAYVALUE_OFFSET))(this);
		}

	};
}
