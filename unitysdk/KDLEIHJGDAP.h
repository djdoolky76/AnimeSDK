#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BasePhaseContext; }
namespace RPG::Client { class NotifyHandler; }

#define KDLEIHJGDAP_CTOR_OFFSET UNITYSDK_OFFSET(0xB3659B0)
#define KDLEIHJGDAP_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xB3658D0)
#define KDLEIHJGDAP_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB365690)
#define KDLEIHJGDAP_IEOGLIENPMN_OFFSET UNITYSDK_OFFSET(0xB365950)
#define KDLEIHJGDAP_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB3657A0)
#define KDLEIHJGDAP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB3655E0)
#define KDLEIHJGDAP_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xB365870)
#define KDLEIHJGDAP_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0xB365910)

	class KDLEIHJGDAP : public ::System::Object
	{
	public:
		::RPG::Client::BasePhaseContext* JLDECFKPLCB; // 0x10
		::System::Boolean GONHEFEEHBI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDLEIHJGDAP_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDLEIHJGDAP_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDLEIHJGDAP_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KDLEIHJGDAP_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void LJOLGCNKIEH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KDLEIHJGDAP_LJOLGCNKIEH_OFFSET))(this, a1);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDLEIHJGDAP_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void MHFNJCLKNMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDLEIHJGDAP_MHFNJCLKNMG_OFFSET))(this);
		}

		::System::Void IEOGLIENPMN(::RPG::Client::NotifyType a1, ::RPG::Client::NotifyHandler* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::RPG::Client::NotifyHandler*))((::PBYTE)hIl2Cpp + KDLEIHJGDAP_IEOGLIENPMN_OFFSET))(this, a1, a2);
		}

	};
