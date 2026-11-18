#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class GNFNKHHJMFH;
namespace MoleMole { class UIGeneralLoginCheckDialogPopWindowController; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_CLICKBACKBTN_OFFSET UNITYSDK_OFFSET(0x12B9A4E0)
#define CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_CLICKCLOSEBTN_OFFSET UNITYSDK_OFFSET(0x12B9A460)
#define CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_COUNTDOWN_OFFSET UNITYSDK_OFFSET(0x12B9AA80)
#define CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_INSTANCE_OFFSET UNITYSDK_OFFSET(0x12B99390)
#define CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x12B99550)
#define CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_ONCONSOLECANCEL_OFFSET UNITYSDK_OFFSET(0x12B9AD10)
#define CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x12B99750)
#define CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_REQUESTVERIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x12B9A560)
#define CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_RESETCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x12B9AB10)
#define CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_SETGETCODEBTN_OFFSET UNITYSDK_OFFSET(0x12B9A0A0)
#define CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_SETNOTICE_OFFSET UNITYSDK_OFFSET(0x12B9A200)
#define CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_SETPWDINPUT_OFFSET UNITYSDK_OFFSET(0x12B99E40)
#define CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_SETREGISTER_OFFSET UNITYSDK_OFFSET(0x12B9A150)
#define CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x12B9A830)
#define CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_SUBMIT_OFFSET UNITYSDK_OFFSET(0x12B9AB60)
#define CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x12B994C0)
#define CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER__REQUESTVERIFYMESSAGE_B__14_0_OFFSET UNITYSDK_OFFSET(0x12B9AEA0)

inline static constexpr unsigned int CustomSkin_OverseaVerifyPhoneNumber_TypeDefinitionIndex = 71479;

class CustomSkin_OverseaVerifyPhoneNumber : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_OverseaVerifyPhoneNumber** StaticGet__instance()
	{
		return (::CustomSkin_OverseaVerifyPhoneNumber**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_OverseaVerifyPhoneNumber_TypeDefinitionIndex)->GetStaticField(0x45E10);
	}
	::UnityEngine::Coroutine* coroutine; // 0x18
	::GNFNKHHJMFH* _view; // 0x20
	::MoleMole::UIGeneralLoginCheckDialogPopWindowController* _phonePage; // 0x28
	::System::Boolean isRequestVerifyCode; // 0x30
	::System::Byte _padding0[0x3];
	::System::Single countDownTime; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_OverseaVerifyPhoneNumber* Instance()
	{
		return ((::CustomSkin_OverseaVerifyPhoneNumber*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_INSTANCE_OFFSET))();
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_ONSHOW_OFFSET))(this);
	}

	::System::Void SetNotice()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_SETNOTICE_OFFSET))(this);
	}

	::System::Void ClickCloseBtn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_CLICKCLOSEBTN_OFFSET))(this);
	}

	::System::Void ClickBackBtn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_CLICKBACKBTN_OFFSET))(this);
	}

	::System::Void SetPWDInput()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_SETPWDINPUT_OFFSET))(this);
	}

	::System::Void SetGetCodeBtn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_SETGETCODEBTN_OFFSET))(this);
	}

	::System::Void RequestVerifyMessage()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_REQUESTVERIFYMESSAGE_OFFSET))(this);
	}

	::System::Void StartCountDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_STARTCOUNTDOWN_OFFSET))(this);
	}

	::System::Void ResetCountDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_RESETCOUNTDOWN_OFFSET))(this);
	}

	::System::Collections::IEnumerator* CountDown(::System::Single time)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_COUNTDOWN_OFFSET))(this, time);
	}

	::System::Void SetRegister()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_SETREGISTER_OFFSET))(this);
	}

	::System::Void Submit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_SUBMIT_OFFSET))(this);
	}

	::System::Void OnConsoleCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER_ONCONSOLECANCEL_OFFSET))(this);
	}

	::System::Void _RequestVerifyMessage_b__14_0(::System::String* strResult)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEAVERIFYPHONENUMBER__REQUESTVERIFYMESSAGE_B__14_0_OFFSET))(this, strResult);
	}
};
