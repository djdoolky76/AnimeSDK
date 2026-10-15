#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class MonoLuaCallbackEnable; }
namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_MONOLUACALLBACKENABLE_CTOR_OFFSET UNITYSDK_OFFSET(0xD847B90)
#define RPG_CLIENT_MONOLUACALLBACKENABLE_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xD847B40)
#define RPG_CLIENT_MONOLUACALLBACKENABLE_GET_OFFSET UNITYSDK_OFFSET(0xD847820)
#define RPG_CLIENT_MONOLUACALLBACKENABLE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD847AB0)
#define RPG_CLIENT_MONOLUACALLBACKENABLE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD847A50)
#define RPG_CLIENT_MONOLUACALLBACKENABLE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD8479F0)
#define RPG_CLIENT_MONOLUACALLBACKENABLE_SETLUACALLBACKDISABLE_OFFSET UNITYSDK_OFFSET(0xD847990)
#define RPG_CLIENT_MONOLUACALLBACKENABLE_SETLUACALLBACKENABLE_OFFSET UNITYSDK_OFFSET(0xD847930)
#define RPG_CLIENT_MONOLUACALLBACKENABLE_SPAWNED_OFFSET UNITYSDK_OFFSET(0xD847B00)

namespace RPG::Client
{
	class MonoLuaCallbackEnable : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action* _LuaEnableCallback; // 0x18
		::XLua::LuaTable* _LuaEnableCallbackParam; // 0x20
		::System::Action* _LuaDisableCallback; // 0x28
		::XLua::LuaTable* _LuaDisableCallbackParam; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLUACALLBACKENABLE_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MonoLuaCallbackEnable* Get(::UnityEngine::GameObject* a1)
		{
			return ((::RPG::Client::MonoLuaCallbackEnable*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLUACALLBACKENABLE_GET_OFFSET))(a1);
		}

		::System::Void SetLuaCallbackEnable(::System::Action* a1, ::XLua::LuaTable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLUACALLBACKENABLE_SETLUACALLBACKENABLE_OFFSET))(this, a1, a2);
		}

		::System::Void SetLuaCallbackDisable(::System::Action* a1, ::XLua::LuaTable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLUACALLBACKENABLE_SETLUACALLBACKDISABLE_OFFSET))(this, a1, a2);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLUACALLBACKENABLE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLUACALLBACKENABLE_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLUACALLBACKENABLE_ONDESTROY_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLUACALLBACKENABLE_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLUACALLBACKENABLE_DESPAWNED_OFFSET))(this);
		}

	};
}
