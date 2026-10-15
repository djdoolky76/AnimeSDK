#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class MonoLuaCallbackTick; }
namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_MONOLUACALLBACKTICK_CTOR_OFFSET UNITYSDK_OFFSET(0xD847E10)
#define RPG_CLIENT_MONOLUACALLBACKTICK_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xD847DC0)
#define RPG_CLIENT_MONOLUACALLBACKTICK_GET_OFFSET UNITYSDK_OFFSET(0xD847BA0)
#define RPG_CLIENT_MONOLUACALLBACKTICK_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD847CD0)
#define RPG_CLIENT_MONOLUACALLBACKTICK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD847D30)
#define RPG_CLIENT_MONOLUACALLBACKTICK_SETLUACALLBACK_OFFSET UNITYSDK_OFFSET(0xD847C70)
#define RPG_CLIENT_MONOLUACALLBACKTICK_SPAWNED_OFFSET UNITYSDK_OFFSET(0xD847D80)

namespace RPG::Client
{
	class MonoLuaCallbackTick : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action* _LuaCallback; // 0x18
		::XLua::LuaTable* _LuaCallbackParam; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLUACALLBACKTICK_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MonoLuaCallbackTick* Get(::UnityEngine::GameObject* a1)
		{
			return ((::RPG::Client::MonoLuaCallbackTick*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLUACALLBACKTICK_GET_OFFSET))(a1);
		}

		::System::Void SetLuaCallback(::System::Action* a1, ::XLua::LuaTable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLUACALLBACKTICK_SETLUACALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLUACALLBACKTICK_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLUACALLBACKTICK_ONDESTROY_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLUACALLBACKTICK_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLUACALLBACKTICK_DESPAWNED_OFFSET))(this);
		}

	};
}
