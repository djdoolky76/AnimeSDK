#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class MonoLuaCallbackEnable; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_MONOLUACALLBACKENABLE_CTOR_OFFSET UNITYSDK_OFFSET(0xE29A1A0)
#define RPG_CLIENT_MONOLUACALLBACKENABLE_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xE29A150)
#define RPG_CLIENT_MONOLUACALLBACKENABLE_GET_OFFSET UNITYSDK_OFFSET(0xE299E70)
#define RPG_CLIENT_MONOLUACALLBACKENABLE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE29A0C0)
#define RPG_CLIENT_MONOLUACALLBACKENABLE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE29A060)
#define RPG_CLIENT_MONOLUACALLBACKENABLE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE29A000)
#define RPG_CLIENT_MONOLUACALLBACKENABLE_SETLUACALLBACKDISABLE_OFFSET UNITYSDK_OFFSET(0xE299FA0)
#define RPG_CLIENT_MONOLUACALLBACKENABLE_SETLUACALLBACKENABLE_OFFSET UNITYSDK_OFFSET(0xE299F40)
#define RPG_CLIENT_MONOLUACALLBACKENABLE_SPAWNED_OFFSET UNITYSDK_OFFSET(0xE29A110)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoLuaCallbackEnable_TypeDefinitionIndex = 70914;

	class MonoLuaCallbackEnable : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action_1<::System::Object*>* _LuaEnableCallback; // 0x18
		::XLua::LuaTable* _LuaEnableCallbackParam; // 0x20
		::System::Action_1<::System::Object*>* _LuaDisableCallback; // 0x28
		::XLua::LuaTable* _LuaDisableCallbackParam; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLUACALLBACKENABLE_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MonoLuaCallbackEnable* Get(::UnityEngine::GameObject* a1)
		{
			return ((::RPG::Client::MonoLuaCallbackEnable*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLUACALLBACKENABLE_GET_OFFSET))(a1);
		}

		::System::Void SetLuaCallbackEnable(::System::Action_1<::System::Object*>* a1, ::XLua::LuaTable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLUACALLBACKENABLE_SETLUACALLBACKENABLE_OFFSET))(this, a1, a2);
		}

		::System::Void SetLuaCallbackDisable(::System::Action_1<::System::Object*>* a1, ::XLua::LuaTable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLUACALLBACKENABLE_SETLUACALLBACKDISABLE_OFFSET))(this, a1, a2);
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
