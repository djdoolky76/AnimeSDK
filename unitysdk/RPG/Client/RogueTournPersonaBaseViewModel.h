#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_ROGUETOURNPERSONABASEVIEWMODEL_ADDMESSAGEHANDLER_OFFSET UNITYSDK_OFFSET(0xE014ED0)
#define RPG_CLIENT_ROGUETOURNPERSONABASEVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xE014560)
#define RPG_CLIENT_ROGUETOURNPERSONABASEVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE014DE0)
#define RPG_CLIENT_ROGUETOURNPERSONABASEVIEWMODEL__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xE014E90)
#define RPG_CLIENT_ROGUETOURNPERSONABASEVIEWMODEL__SENDMESSAGE_OFFSET UNITYSDK_OFFSET(0xE013660)

namespace RPG::Client
{
	class RogueTournPersonaBaseViewModel : public ::System::Object
	{
	public:
		::System::Action* _MessageHandler; // 0x10
		::XLua::LuaTable* _LuaTable; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONABASEVIEWMODEL_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONABASEVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONABASEVIEWMODEL__ONDISPOSE_OFFSET))(this);
		}

		::System::Void AddMessageHandler(::XLua::LuaTable* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONABASEVIEWMODEL_ADDMESSAGEHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Void _SendMessage(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONABASEVIEWMODEL__SENDMESSAGE_OFFSET))(this, a1, a2);
		}

	};
}
