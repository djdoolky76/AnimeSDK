#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::B51Racing { class LuaAddOnBackPressedCallbackAction; }
namespace RPG::Client::B51Racing { class LuaBindBtnAction; }
namespace RPG::Client::B51Racing { class LuaBindBtnHoldAction; }
namespace RPG::Client::B51Racing { class LuaBindCustomFadeAnimNameAction; }
namespace RPG::Client::B51Racing { class LuaBindRedDotAction; }
namespace RPG::Client::B51Racing { class LuaControllerHandle; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_B51RACING_LUACONTROLLERBRIDGEAPI_ADDONBACKPRESSEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xD11A210)
#define RPG_CLIENT_B51RACING_LUACONTROLLERBRIDGEAPI_BINDBTNHOLDTOCS_OFFSET UNITYSDK_OFFSET(0xD119FF0)
#define RPG_CLIENT_B51RACING_LUACONTROLLERBRIDGEAPI_BINDBTNRELEASETOCS_OFFSET UNITYSDK_OFFSET(0xD11A100)
#define RPG_CLIENT_B51RACING_LUACONTROLLERBRIDGEAPI_BINDBTNSHORTDOWNCLICKTOCS_OFFSET UNITYSDK_OFFSET(0xD11A080)
#define RPG_CLIENT_B51RACING_LUACONTROLLERBRIDGEAPI_BINDBTNTOCS_OFFSET UNITYSDK_OFFSET(0xD119F70)
#define RPG_CLIENT_B51RACING_LUACONTROLLERBRIDGEAPI_BINDCUSTOMFADEINANIMNAME_OFFSET UNITYSDK_OFFSET(0xD11A290)
#define RPG_CLIENT_B51RACING_LUACONTROLLERBRIDGEAPI_BINDCUSTOMFADEOUTANIMNAME_OFFSET UNITYSDK_OFFSET(0xD11A310)
#define RPG_CLIENT_B51RACING_LUACONTROLLERBRIDGEAPI_BINDREDDOT_OFFSET UNITYSDK_OFFSET(0xD11A180)
#define RPG_CLIENT_B51RACING_LUACONTROLLERBRIDGEAPI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD119BF0)
#define RPG_CLIENT_B51RACING_LUACONTROLLERBRIDGEAPI_EXIT_OFFSET UNITYSDK_OFFSET(0xD119C50)
#define RPG_CLIENT_B51RACING_LUACONTROLLERBRIDGEAPI_NOTIFYFADEINANIMEND_OFFSET UNITYSDK_OFFSET(0xD119E30)
#define RPG_CLIENT_B51RACING_LUACONTROLLERBRIDGEAPI_REGISTERADDONBACKPRESSEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xD119B00)
#define RPG_CLIENT_B51RACING_LUACONTROLLERBRIDGEAPI_REGISTERBINDBTNHOLD_OFFSET UNITYSDK_OFFSET(0xD1199C0)
#define RPG_CLIENT_B51RACING_LUACONTROLLERBRIDGEAPI_REGISTERBINDBTNRELEASE_OFFSET UNITYSDK_OFFSET(0xD119A60)
#define RPG_CLIENT_B51RACING_LUACONTROLLERBRIDGEAPI_REGISTERBINDBTNSHORTDOWNCLICK_OFFSET UNITYSDK_OFFSET(0xD119A10)
#define RPG_CLIENT_B51RACING_LUACONTROLLERBRIDGEAPI_REGISTERBINDBTN_OFFSET UNITYSDK_OFFSET(0xD119970)
#define RPG_CLIENT_B51RACING_LUACONTROLLERBRIDGEAPI_REGISTERBINDCUSTOMFADEINANIMNAME_OFFSET UNITYSDK_OFFSET(0xD119B50)
#define RPG_CLIENT_B51RACING_LUACONTROLLERBRIDGEAPI_REGISTERBINDCUSTOMFADEOUTANIMNAME_OFFSET UNITYSDK_OFFSET(0xD119BA0)
#define RPG_CLIENT_B51RACING_LUACONTROLLERBRIDGEAPI_REGISTERBINDREDDOT_OFFSET UNITYSDK_OFFSET(0xD119AB0)
#define RPG_CLIENT_B51RACING_LUACONTROLLERBRIDGEAPI_SETEXITAFTERTRANSITION_OFFSET UNITYSDK_OFFSET(0xD119D40)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int LuaControllerBridgeAPI_TypeDefinitionIndex = 84541;

	class LuaControllerBridgeAPI : public ::System::Object
	{
	public:
		static ::RPG::Client::B51Racing::LuaBindBtnHoldAction** StaticGet__BindBtnHoldFunc()
		{
			return (::RPG::Client::B51Racing::LuaBindBtnHoldAction**)UnitySDK::FromName("RPG.Client.B51Racing", "LuaControllerBridgeAPI")->GetStaticField(0x5D760);
		}

		static ::RPG::Client::B51Racing::LuaBindCustomFadeAnimNameAction** StaticGet__BindCustomFadeInAnimNameFunc()
		{
			return (::RPG::Client::B51Racing::LuaBindCustomFadeAnimNameAction**)UnitySDK::FromName("RPG.Client.B51Racing", "LuaControllerBridgeAPI")->GetStaticField(0x5D768);
		}

		static ::RPG::Client::B51Racing::LuaBindRedDotAction** StaticGet__BindRedDotFunc()
		{
			return (::RPG::Client::B51Racing::LuaBindRedDotAction**)UnitySDK::FromName("RPG.Client.B51Racing", "LuaControllerBridgeAPI")->GetStaticField(0x5D770);
		}

		static ::RPG::Client::B51Racing::LuaBindBtnAction** StaticGet__BindBtnShortDownClickFunc()
		{
			return (::RPG::Client::B51Racing::LuaBindBtnAction**)UnitySDK::FromName("RPG.Client.B51Racing", "LuaControllerBridgeAPI")->GetStaticField(0x5D778);
		}

		static ::RPG::Client::B51Racing::LuaAddOnBackPressedCallbackAction** StaticGet__AddOnBackPressedCallbackFunc()
		{
			return (::RPG::Client::B51Racing::LuaAddOnBackPressedCallbackAction**)UnitySDK::FromName("RPG.Client.B51Racing", "LuaControllerBridgeAPI")->GetStaticField(0x5D780);
		}

		static ::RPG::Client::B51Racing::LuaBindBtnAction** StaticGet__BindBtnFunc()
		{
			return (::RPG::Client::B51Racing::LuaBindBtnAction**)UnitySDK::FromName("RPG.Client.B51Racing", "LuaControllerBridgeAPI")->GetStaticField(0x5D788);
		}

		static ::RPG::Client::B51Racing::LuaBindBtnAction** StaticGet__BindBtnReleaseFunc()
		{
			return (::RPG::Client::B51Racing::LuaBindBtnAction**)UnitySDK::FromName("RPG.Client.B51Racing", "LuaControllerBridgeAPI")->GetStaticField(0x5D790);
		}

		static ::RPG::Client::B51Racing::LuaBindCustomFadeAnimNameAction** StaticGet__BindCustomFadeOutAnimNameFunc()
		{
			return (::RPG::Client::B51Racing::LuaBindCustomFadeAnimNameAction**)UnitySDK::FromName("RPG.Client.B51Racing", "LuaControllerBridgeAPI")->GetStaticField(0x5D798);
		}

		static ::System::Void RegisterBindBtn(::RPG::Client::B51Racing::LuaBindBtnAction* a1)
		{
			return ((::System::Void(*)(::RPG::Client::B51Racing::LuaBindBtnAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERBRIDGEAPI_REGISTERBINDBTN_OFFSET))(a1);
		}

		static ::System::Void RegisterBindBtnHold(::RPG::Client::B51Racing::LuaBindBtnHoldAction* a1)
		{
			return ((::System::Void(*)(::RPG::Client::B51Racing::LuaBindBtnHoldAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERBRIDGEAPI_REGISTERBINDBTNHOLD_OFFSET))(a1);
		}

		static ::System::Void RegisterBindBtnShortDownClick(::RPG::Client::B51Racing::LuaBindBtnAction* a1)
		{
			return ((::System::Void(*)(::RPG::Client::B51Racing::LuaBindBtnAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERBRIDGEAPI_REGISTERBINDBTNSHORTDOWNCLICK_OFFSET))(a1);
		}

		static ::System::Void RegisterBindBtnRelease(::RPG::Client::B51Racing::LuaBindBtnAction* a1)
		{
			return ((::System::Void(*)(::RPG::Client::B51Racing::LuaBindBtnAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERBRIDGEAPI_REGISTERBINDBTNRELEASE_OFFSET))(a1);
		}

		static ::System::Void RegisterBindRedDot(::RPG::Client::B51Racing::LuaBindRedDotAction* a1)
		{
			return ((::System::Void(*)(::RPG::Client::B51Racing::LuaBindRedDotAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERBRIDGEAPI_REGISTERBINDREDDOT_OFFSET))(a1);
		}

		static ::System::Void RegisterAddOnBackPressedCallback(::RPG::Client::B51Racing::LuaAddOnBackPressedCallbackAction* a1)
		{
			return ((::System::Void(*)(::RPG::Client::B51Racing::LuaAddOnBackPressedCallbackAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERBRIDGEAPI_REGISTERADDONBACKPRESSEDCALLBACK_OFFSET))(a1);
		}

		static ::System::Void RegisterBindCustomFadeInAnimName(::RPG::Client::B51Racing::LuaBindCustomFadeAnimNameAction* a1)
		{
			return ((::System::Void(*)(::RPG::Client::B51Racing::LuaBindCustomFadeAnimNameAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERBRIDGEAPI_REGISTERBINDCUSTOMFADEINANIMNAME_OFFSET))(a1);
		}

		static ::System::Void RegisterBindCustomFadeOutAnimName(::RPG::Client::B51Racing::LuaBindCustomFadeAnimNameAction* a1)
		{
			return ((::System::Void(*)(::RPG::Client::B51Racing::LuaBindCustomFadeAnimNameAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERBRIDGEAPI_REGISTERBINDCUSTOMFADEOUTANIMNAME_OFFSET))(a1);
		}

		static ::System::Void Dispose()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERBRIDGEAPI_DISPOSE_OFFSET))();
		}

		static ::System::Void Exit(::XLua::LuaTable* a1)
		{
			return ((::System::Void(*)(::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERBRIDGEAPI_EXIT_OFFSET))(a1);
		}

		static ::System::Void SetExitAfterTransition(::XLua::LuaTable* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::XLua::LuaTable*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERBRIDGEAPI_SETEXITAFTERTRANSITION_OFFSET))(a1, a2);
		}

		static ::System::Void NotifyFadeInAnimEnd(::RPG::Client::B51Racing::LuaControllerHandle* a1)
		{
			return ((::System::Void(*)(::RPG::Client::B51Racing::LuaControllerHandle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERBRIDGEAPI_NOTIFYFADEINANIMEND_OFFSET))(a1);
		}

		static ::System::Void BindBtnToCs(::XLua::LuaTable* a1, ::UnityEngine::UI::Button* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::XLua::LuaTable*, ::UnityEngine::UI::Button*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERBRIDGEAPI_BINDBTNTOCS_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BindBtnHoldToCs(::XLua::LuaTable* a1, ::UnityEngine::GameObject* a2, ::System::Action* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::XLua::LuaTable*, ::UnityEngine::GameObject*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERBRIDGEAPI_BINDBTNHOLDTOCS_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void BindBtnShortDownClickToCs(::XLua::LuaTable* a1, ::UnityEngine::UI::Button* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::XLua::LuaTable*, ::UnityEngine::UI::Button*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERBRIDGEAPI_BINDBTNSHORTDOWNCLICKTOCS_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BindBtnReleaseToCs(::XLua::LuaTable* a1, ::UnityEngine::UI::Button* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::XLua::LuaTable*, ::UnityEngine::UI::Button*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERBRIDGEAPI_BINDBTNRELEASETOCS_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BindRedDot(::XLua::LuaTable* a1, ::System::String* a2, ::System::Object* a3, ::UnityEngine::Transform* a4)
		{
			return ((::System::Void(*)(::XLua::LuaTable*, ::System::String*, ::System::Object*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERBRIDGEAPI_BINDREDDOT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void AddOnBackPressedCallback(::XLua::LuaTable* a1, ::System::Func_1<::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::XLua::LuaTable*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERBRIDGEAPI_ADDONBACKPRESSEDCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void BindCustomFadeInAnimName(::XLua::LuaTable* a1, ::System::Func_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::XLua::LuaTable*, ::System::Func_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERBRIDGEAPI_BINDCUSTOMFADEINANIMNAME_OFFSET))(a1, a2);
		}

		static ::System::Void BindCustomFadeOutAnimName(::XLua::LuaTable* a1, ::System::Func_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::XLua::LuaTable*, ::System::Func_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_LUACONTROLLERBRIDGEAPI_BINDCUSTOMFADEOUTANIMNAME_OFFSET))(a1, a2);
		}

	};
}
