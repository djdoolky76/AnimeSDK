#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_UIDRAGGABLEMANAGER___C__DISPLAYCLASS26_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE39EB80)
#define RPG_CLIENT_UIDRAGGABLEMANAGER___C__DISPLAYCLASS26_0__LUABINDDRAGSTARTCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0xE39EB90)

namespace RPG::Client
{
	class UIDraggableManager___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::XLua::LuaTable* listener; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER___C__DISPLAYCLASS26_0_CTOR_OFFSET))(this);
		}

		::System::Void _LuaBindDragStartCallback_b__0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER___C__DISPLAYCLASS26_0__LUABINDDRAGSTARTCALLBACK_B__0_OFFSET))(this, a1);
		}

	};
}
