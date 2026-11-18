#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class GLMADFBCPPC;
namespace MoleMole { class UIGeneralRealAuthenticationDialogPopWindowController; }
namespace System { class String; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }

#define CUSTOMSKIN_REALNAME_BINDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1831C530)
#define CUSTOMSKIN_REALNAME_INIT_OFFSET UNITYSDK_OFFSET(0x1831C660)
#define CUSTOMSKIN_REALNAME_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1831C120)
#define CUSTOMSKIN_REALNAME_MEETPROBLEM_OFFSET UNITYSDK_OFFSET(0x1831D120)
#define CUSTOMSKIN_REALNAME_ONCLICKBACK_OFFSET UNITYSDK_OFFSET(0x1831D0A0)
#define CUSTOMSKIN_REALNAME_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1831C2E0)
#define CUSTOMSKIN_REALNAME_ONCONSOLECANCEL_OFFSET UNITYSDK_OFFSET(0x1831D3F0)
#define CUSTOMSKIN_REALNAME_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1831C340)
#define CUSTOMSKIN_REALNAME_SETLISTENER_OFFSET UNITYSDK_OFFSET(0x1831CA70)
#define CUSTOMSKIN_REALNAME_SETTEXT_OFFSET UNITYSDK_OFFSET(0x1831CDC0)
#define CUSTOMSKIN_REALNAME_SUBMIT_OFFSET UNITYSDK_OFFSET(0x1831D1A0)
#define CUSTOMSKIN_REALNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1831C250)
#define CUSTOMSKIN_REALNAME__SETLISTENER_B__21_0_OFFSET UNITYSDK_OFFSET(0x1831D500)
#define CUSTOMSKIN_REALNAME__SETLISTENER_B__21_1_OFFSET UNITYSDK_OFFSET(0x1831D550)
#define CUSTOMSKIN_REALNAME__SETLISTENER_B__21_2_OFFSET UNITYSDK_OFFSET(0x1831D5A0)
#define CUSTOMSKIN_REALNAME__SETLISTENER_B__21_3_OFFSET UNITYSDK_OFFSET(0x1831D610)

inline static constexpr unsigned int CustomSkin_RealName_TypeDefinitionIndex = 54848;

class CustomSkin_RealName : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_RealName** StaticGet__instance()
	{
		return (::CustomSkin_RealName**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_RealName_TypeDefinitionIndex)->GetStaticField(0x51D30);
	}
	::GLMADFBCPPC* _realNameView; // 0x18
	::UnityEngine::UI::Text* pageTitle; // 0x20
	::UnityEngine::UI::Text* idTitle; // 0x28
	::UnityEngine::UI::InputField* idInput; // 0x30
	::UnityEngine::UI::Text* nameTitle; // 0x38
	::UnityEngine::UI::Button* submitButton; // 0x40
	::UnityEngine::UI::Text* submitButtonText; // 0x48
	::UnityEngine::UI::Text* idPlaceholder; // 0x50
	::UnityEngine::UI::Text* noticeText; // 0x58
	::UnityEngine::UI::Button* backButton; // 0x60
	::UnityEngine::UI::InputField* nameInput; // 0x68
	::UnityEngine::UI::Button* questionButton; // 0x70
	::UnityEngine::UI::Text* namePlaceholder; // 0x78
	::MoleMole::UIGeneralRealAuthenticationDialogPopWindowController* _realNamePage; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_REALNAME__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_RealName* Instance()
	{
		return ((::CustomSkin_RealName*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_REALNAME_INSTANCE_OFFSET))();
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_REALNAME_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_REALNAME_ONSHOW_OFFSET))(this);
	}

	::System::Void BindGameObject()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_REALNAME_BINDGAMEOBJECT_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_REALNAME_INIT_OFFSET))(this);
	}

	::System::Void SetText()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_REALNAME_SETTEXT_OFFSET))(this);
	}

	::System::Void SetListener()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_REALNAME_SETLISTENER_OFFSET))(this);
	}

	::System::Void OnClickBack()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_REALNAME_ONCLICKBACK_OFFSET))(this);
	}

	::System::Void MeetProblem()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_REALNAME_MEETPROBLEM_OFFSET))(this);
	}

	::System::Void Submit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_REALNAME_SUBMIT_OFFSET))(this);
	}

	::System::Void OnConsoleCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_REALNAME_ONCONSOLECANCEL_OFFSET))(this);
	}

	::System::Void _SetListener_b__21_0(::System::String* str)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_REALNAME__SETLISTENER_B__21_0_OFFSET))(this, str);
	}

	::System::Void _SetListener_b__21_1(::System::String* str)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_REALNAME__SETLISTENER_B__21_1_OFFSET))(this, str);
	}

	::System::Void _SetListener_b__21_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_REALNAME__SETLISTENER_B__21_2_OFFSET))(this);
	}

	::System::Void _SetListener_b__21_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_REALNAME__SETLISTENER_B__21_3_OFFSET))(this);
	}
};
