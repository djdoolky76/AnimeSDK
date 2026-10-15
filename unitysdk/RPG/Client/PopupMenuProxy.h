#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_POPUPMENUPROXY_CTOR_OFFSET UNITYSDK_OFFSET(0xDC05F20)
#define RPG_CLIENT_POPUPMENUPROXY_HIDE_OFFSET UNITYSDK_OFFSET(0xDC06070)
#define RPG_CLIENT_POPUPMENUPROXY_INITDELEGATE_OFFSET UNITYSDK_OFFSET(0xDC060D0)
#define RPG_CLIENT_POPUPMENUPROXY_SETOPTIONS_OFFSET UNITYSDK_OFFSET(0xDC05F30)
#define RPG_CLIENT_POPUPMENUPROXY_SETPOSITION_OFFSET UNITYSDK_OFFSET(0xDC05FA0)
#define RPG_CLIENT_POPUPMENUPROXY_SHOW_OFFSET UNITYSDK_OFFSET(0xDC06010)

namespace RPG::Client
{
	inline static constexpr unsigned int PopupMenuProxy_TypeDefinitionIndex = 72487;

	class PopupMenuProxy : public ::System::Object
	{
	public:
		::System::Action* _SetPositionDelegate; // 0x10
		::System::Action* _HideDelegate; // 0x18
		::System::Action* _ShowDelegate; // 0x20
		::System::Action* _SetOptionsDelegate; // 0x28
		::XLua::LuaTable* _LuaPopupMenuPanel; // 0x30
		::System::Void _ctor(::XLua::LuaTable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POPUPMENUPROXY_CTOR_OFFSET))(this, a1);
		}

		::System::Void SetOptions(::System::Collections::Generic::List_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POPUPMENUPROXY_SETOPTIONS_OFFSET))(this, a1);
		}

		::System::Void SetPosition(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_POPUPMENUPROXY_SETPOSITION_OFFSET))(this, a1);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POPUPMENUPROXY_SHOW_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POPUPMENUPROXY_HIDE_OFFSET))(this);
		}

		::System::Void InitDelegate(::System::Action* a1, ::System::Action* a2, ::System::Action* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POPUPMENUPROXY_INITDELEGATE_OFFSET))(this, a1, a2, a3, a4);
		}

	};
}
