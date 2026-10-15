#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ServerPlayerSettingItem.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_SERVERPLAYERSETTINGBOOLITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xE0B2210)
#define RPG_CLIENT_SERVERPLAYERSETTINGBOOLITEM_GET_CLIENTPREFSETTER_OFFSET UNITYSDK_OFFSET(0xE0B21F0)
#define RPG_CLIENT_SERVERPLAYERSETTINGBOOLITEM_SETVALUEFROMSERVER_OFFSET UNITYSDK_OFFSET(0xE0B1FC0)
#define RPG_CLIENT_SERVERPLAYERSETTINGBOOLITEM_SET_CLIENTPREFSETTER_OFFSET UNITYSDK_OFFSET(0xE0B2200)
#define RPG_CLIENT_SERVERPLAYERSETTINGBOOLITEM_SET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0xE0B21C0)
#define RPG_CLIENT_SERVERPLAYERSETTINGBOOLITEM_SYNCCLIENTPREF_OFFSET UNITYSDK_OFFSET(0xE0B2150)

namespace RPG::Client
{
	class ServerPlayerSettingBoolItem : public ::RPG::Client::ServerPlayerSettingItem
	{
	public:
		::System::Action* _ClientPrefSetter_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERPLAYERSETTINGBOOLITEM_CTOR_OFFSET))(this);
		}

		::System::Void SetValueFromServer(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERPLAYERSETTINGBOOLITEM_SETVALUEFROMSERVER_OFFSET))(this, a1);
		}

		::System::Void SyncClientPref(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERPLAYERSETTINGBOOLITEM_SYNCCLIENTPREF_OFFSET))(this, a1);
		}

		::System::Void set_DefaultValue(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERPLAYERSETTINGBOOLITEM_SET_DEFAULTVALUE_OFFSET))(this, a1);
		}

		::System::Action* get_ClientPrefSetter()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERPLAYERSETTINGBOOLITEM_GET_CLIENTPREFSETTER_OFFSET))(this);
		}

		::System::Void set_ClientPrefSetter(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERPLAYERSETTINGBOOLITEM_SET_CLIENTPREFSETTER_OFFSET))(this, a1);
		}

	};
}
