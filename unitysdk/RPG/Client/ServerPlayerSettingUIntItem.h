#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ServerPlayerSettingItem.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_SERVERPLAYERSETTINGUINTITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xE0B26B0)
#define RPG_CLIENT_SERVERPLAYERSETTINGUINTITEM_GET_CLIENTPREFSETTER_OFFSET UNITYSDK_OFFSET(0xE0B2690)
#define RPG_CLIENT_SERVERPLAYERSETTINGUINTITEM_SETVALUEFROMSERVER_OFFSET UNITYSDK_OFFSET(0xE0B2490)
#define RPG_CLIENT_SERVERPLAYERSETTINGUINTITEM_SET_CLIENTPREFSETTER_OFFSET UNITYSDK_OFFSET(0xE0B26A0)
#define RPG_CLIENT_SERVERPLAYERSETTINGUINTITEM_SYNCCLIENTPREF_OFFSET UNITYSDK_OFFSET(0xE0B2620)

namespace RPG::Client
{
	inline static constexpr unsigned int ServerPlayerSettingUIntItem_TypeDefinitionIndex = 66701;

	class ServerPlayerSettingUIntItem : public ::RPG::Client::ServerPlayerSettingItem
	{
	public:
		::System::Action* _ClientPrefSetter_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERPLAYERSETTINGUINTITEM_CTOR_OFFSET))(this);
		}

		::System::Void SetValueFromServer(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERPLAYERSETTINGUINTITEM_SETVALUEFROMSERVER_OFFSET))(this, a1);
		}

		::System::Void SyncClientPref(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERPLAYERSETTINGUINTITEM_SYNCCLIENTPREF_OFFSET))(this, a1);
		}

		::System::Action* get_ClientPrefSetter()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERPLAYERSETTINGUINTITEM_GET_CLIENTPREFSETTER_OFFSET))(this);
		}

		::System::Void set_ClientPrefSetter(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERPLAYERSETTINGUINTITEM_SET_CLIENTPREFSETTER_OFFSET))(this, a1);
		}

	};
}
