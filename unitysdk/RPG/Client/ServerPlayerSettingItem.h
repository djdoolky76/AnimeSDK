#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GEOOCKILLEF.h"
#include "unitysdk/RPG/Client/PlayerSettingItem.h"
namespace System { class Object; }

#define RPG_CLIENT_SERVERPLAYERSETTINGITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xE0B2220)
#define RPG_CLIENT_SERVERPLAYERSETTINGITEM_GET_SERVERTYPE_OFFSET UNITYSDK_OFFSET(0xE0B2470)
#define RPG_CLIENT_SERVERPLAYERSETTINGITEM_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xE0B2230)
#define RPG_CLIENT_SERVERPLAYERSETTINGITEM_SET_SERVERTYPE_OFFSET UNITYSDK_OFFSET(0xE0B2480)
#define RPG_CLIENT_SERVERPLAYERSETTINGITEM_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xE0B2270)

namespace RPG::Client
{
	inline static constexpr unsigned int ServerPlayerSettingItem_TypeDefinitionIndex = 66699;

	class ServerPlayerSettingItem : public ::RPG::Client::PlayerSettingItem
	{
	public:
		::GEOOCKILLEF _ServerType_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERPLAYERSETTINGITEM_CTOR_OFFSET))(this);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERPLAYERSETTINGITEM_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERPLAYERSETTINGITEM_SET_VALUE_OFFSET))(this, a1);
		}

		::GEOOCKILLEF get_ServerType()
		{
			return ((::GEOOCKILLEF(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERPLAYERSETTINGITEM_GET_SERVERTYPE_OFFSET))(this);
		}

		::System::Void set_ServerType(::GEOOCKILLEF a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEOOCKILLEF))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERPLAYERSETTINGITEM_SET_SERVERTYPE_OFFSET))(this, a1);
		}

	};
}
