#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFGGMBHCKPJ;
namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0xDF3EF20)
#define RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION_GETROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xDF3F420)
#define RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION_GETUIPATH_OFFSET UNITYSDK_OFFSET(0xDF3F4B0)
#define RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION_GET_HINTID_OFFSET UNITYSDK_OFFSET(0xDF3EF00)
#define RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION_GET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xDF3EEC0)
#define RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION_GET_SELECTUNITS_OFFSET UNITYSDK_OFFSET(0xDF3EEE0)
#define RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION_SET_HINTID_OFFSET UNITYSDK_OFFSET(0xDF3EF10)
#define RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION_SET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xDF3EED0)
#define RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION_SET_SELECTUNITS_OFFSET UNITYSDK_OFFSET(0xDF3EEF0)
#define RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xDF3F460)
#define RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION__CONSTRUCT_OFFSET UNITYSDK_OFFSET(0xDF3EF30)

namespace RPG::Client
{
	class RogueMagicUnitUpgradeAction : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* _SelectUnits_k__BackingField; // 0x10
		::System::UInt32 _RogueActionID_k__BackingField; // 0x18
		::System::UInt32 _HintID_k__BackingField; // 0x1C
		::System::Void _ctor(::System::UInt32 a1, ::OFGGMBHCKPJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::OFGGMBHCKPJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_RogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION_GET_ROGUEACTIONID_OFFSET))(this);
		}

		::System::Void set_RogueActionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION_SET_ROGUEACTIONID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* get_SelectUnits()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION_GET_SELECTUNITS_OFFSET))(this);
		}

		::System::Void set_SelectUnits(::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION_SET_SELECTUNITS_OFFSET))(this, a1);
		}

		::System::UInt32 get_HintID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION_GET_HINTID_OFFSET))(this);
		}

		::System::Void set_HintID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION_SET_HINTID_OFFSET))(this, a1);
		}

		::System::UInt32 GetRogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION_GETROGUEACTIONID_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION_TRIGGERACTION_OFFSET))(this);
		}

		::System::String* GetUIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION_GETUIPATH_OFFSET))(this);
		}

		::System::Void _Construct(::OFGGMBHCKPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFGGMBHCKPJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICUNITUPGRADEACTION__CONSTRUCT_OFFSET))(this, a1);
		}

	};
}
