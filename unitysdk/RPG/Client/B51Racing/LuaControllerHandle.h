#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class UIController; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_ADDONBACKPRESSEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xD10EE70)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BINDBTNHOLDTOCS_OFFSET UNITYSDK_OFFSET(0xD11A960)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BINDBTNRELEASETOCS_OFFSET UNITYSDK_OFFSET(0xD100980)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BINDBTNSHORTDOWNCLICKTOCS_OFFSET UNITYSDK_OFFSET(0xD1008A0)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BINDBTNTOCS_OFFSET UNITYSDK_OFFSET(0xD10ED90)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BINDCUSTOMFADEINANIMNAME_OFFSET UNITYSDK_OFFSET(0xD11AA50)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BINDCUSTOMFADEOUTANIMNAME_OFFSET UNITYSDK_OFFSET(0xD11AB30)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BINDONFADEINANIMEND_OFFSET UNITYSDK_OFFSET(0xD11A7E0)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BINDONSTARTEXIT_OFFSET UNITYSDK_OFFSET(0xD1114C0)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BINDREDDOT_1_OFFSET UNITYSDK_OFFSET(0xD11AC70)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BINDREDDOT_OFFSET UNITYSDK_OFFSET(0xD11AC10)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BIND_OFFSET UNITYSDK_OFFSET(0xD11A390)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_CTOR_OFFSET UNITYSDK_OFFSET(0xD11AD60)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_EXITAFTERFRAMES_OFFSET UNITYSDK_OFFSET(0xD11A5C0)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_EXIT_OFFSET UNITYSDK_OFFSET(0xD10FF50)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xD11A550)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_GET_UICONTROLLER_OFFSET UNITYSDK_OFFSET(0xD11A5A0)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_INVOKEONFADEINANIMEND_OFFSET UNITYSDK_OFFSET(0xD119E80)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_INVOKEONSTARTEXIT_OFFSET UNITYSDK_OFFSET(0xD11A6F0)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_SETEXITAFTERTRANSITION_OFFSET UNITYSDK_OFFSET(0xD10FF00)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_SET_UICONTROLLER_OFFSET UNITYSDK_OFFSET(0xD11A5B0)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_UNBINDONFADEINANIMEND_OFFSET UNITYSDK_OFFSET(0xD11A8F0)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_UNBINDONSTARTEXIT_OFFSET UNITYSDK_OFFSET(0xD11A680)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_UNBIND_OFFSET UNITYSDK_OFFSET(0xD11A420)
#define RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE__EXITAFTERFRAMES_B__9_0_OFFSET UNITYSDK_OFFSET(0xD11AE70)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int LuaControllerHandle_TypeDefinitionIndex = 84542;

	class LuaControllerHandle : public ::System::Object
	{
	public:
		::XLua::LuaTable* _Table; // 0x10
		::RPG::Client::LuaUIController* _UIController_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::Action*>* _OnStartExitCallbacks; // 0x20
		::System::Collections::Generic::HashSet_1<::System::Func_1<::System::Boolean>*>* _OnBackPressedCallbacks; // 0x28
		::System::Collections::Generic::List_1<::System::Action*>* _OnFadeInAnimEndCallbacks; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_CTOR_OFFSET))(this);
		}

		::System::Void Bind(::XLua::LuaTable* a1, ::RPG::Client::UIController* a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BIND_OFFSET))(this, a1, a2);
		}

		::System::Void Unbind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_UNBIND_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_GET_ISVALID_OFFSET))(this);
		}

		::RPG::Client::LuaUIController* get_UIController()
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_GET_UICONTROLLER_OFFSET))(this);
		}

		::System::Void set_UIController(::RPG::Client::LuaUIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LuaUIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_SET_UICONTROLLER_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_EXIT_OFFSET))(this);
		}

		::System::Void ExitAfterFrames(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_EXITAFTERFRAMES_OFFSET))(this, a1);
		}

		::System::Void SetExitAfterTransition(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_SETEXITAFTERTRANSITION_OFFSET))(this, a1);
		}

		::System::Void BindOnStartExit(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BINDONSTARTEXIT_OFFSET))(this, a1);
		}

		::System::Void UnbindOnStartExit(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_UNBINDONSTARTEXIT_OFFSET))(this, a1);
		}

		::System::Void InvokeOnStartExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_INVOKEONSTARTEXIT_OFFSET))(this);
		}

		::System::Void BindOnFadeInAnimEnd(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BINDONFADEINANIMEND_OFFSET))(this, a1);
		}

		::System::Void UnbindOnFadeInAnimEnd(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_UNBINDONFADEINANIMEND_OFFSET))(this, a1);
		}

		::System::Void InvokeOnFadeInAnimEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_INVOKEONFADEINANIMEND_OFFSET))(this);
		}

		::System::Void AddOnBackPressedCallback(::System::Func_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_ADDONBACKPRESSEDCALLBACK_OFFSET))(this, a1);
		}

		::System::Void BindBtnToCs(::UnityEngine::UI::Button* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Button*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BINDBTNTOCS_OFFSET))(this, a1, a2);
		}

		::System::Void BindBtnHoldToCs(::UnityEngine::GameObject* a1, ::System::Action* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BINDBTNHOLDTOCS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BindBtnShortDownClickToCs(::UnityEngine::UI::Button* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Button*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BINDBTNSHORTDOWNCLICKTOCS_OFFSET))(this, a1, a2);
		}

		::System::Void BindBtnReleaseToCs(::UnityEngine::UI::Button* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Button*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BINDBTNRELEASETOCS_OFFSET))(this, a1, a2);
		}

		::System::Void BindCustomFadeInAnimName(::System::Func_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BINDCUSTOMFADEINANIMNAME_OFFSET))(this, a1);
		}

		::System::Void BindCustomFadeOutAnimName(::System::Func_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BINDCUSTOMFADEOUTANIMNAME_OFFSET))(this, a1);
		}

		::System::Void BindRedDot(::System::String* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BINDREDDOT_OFFSET))(this, a1, a2);
		}

		::System::Void BindRedDot_1(::System::String* a1, ::System::Object* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE_BINDREDDOT_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ExitAfterFrames_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERHANDLE__EXITAFTERFRAMES_B__9_0_OFFSET))(this);
		}

	};
}
