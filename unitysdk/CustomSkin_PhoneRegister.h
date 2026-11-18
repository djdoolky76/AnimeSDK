#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class PHIDBAMPHMP;
namespace MoleMole { class UIGeneralSDKLoginDialogPopWindowController; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define CUSTOMSKIN_PHONEREGISTER_CLICKBACKBTN_OFFSET UNITYSDK_OFFSET(0x168978A0)
#define CUSTOMSKIN_PHONEREGISTER_CLICKCLOSEBTN_OFFSET UNITYSDK_OFFSET(0x16897920)
#define CUSTOMSKIN_PHONEREGISTER_CLICKUSERAGREEMENTBUTTON_OFFSET UNITYSDK_OFFSET(0x16897FA0)
#define CUSTOMSKIN_PHONEREGISTER_CLICKUSERPRIVACYBUTTON_OFFSET UNITYSDK_OFFSET(0x16898020)
#define CUSTOMSKIN_PHONEREGISTER_COUNTDOWN_OFFSET UNITYSDK_OFFSET(0x16897EC0)
#define CUSTOMSKIN_PHONEREGISTER_ENTERGAME_OFFSET UNITYSDK_OFFSET(0x16898290)
#define CUSTOMSKIN_PHONEREGISTER_INSTANCE_OFFSET UNITYSDK_OFFSET(0x16895A50)
#define CUSTOMSKIN_PHONEREGISTER_ONCLICKAGREMENTALLCHECKBOX_OFFSET UNITYSDK_OFFSET(0x168980A0)
#define CUSTOMSKIN_PHONEREGISTER_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x16895C10)
#define CUSTOMSKIN_PHONEREGISTER_ONCONSOLECANCEL_OFFSET UNITYSDK_OFFSET(0x16898810)
#define CUSTOMSKIN_PHONEREGISTER_ONELEMENTSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x16896800)
#define CUSTOMSKIN_PHONEREGISTER_ONOPENCONSOLEPROTOCOLWINDOW_OFFSET UNITYSDK_OFFSET(0x168985A0)
#define CUSTOMSKIN_PHONEREGISTER_ONOPENLOGINREGISTER_OFFSET UNITYSDK_OFFSET(0x168960A0)
#define CUSTOMSKIN_PHONEREGISTER_ONPHONEINPUTVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x168979A0)
#define CUSTOMSKIN_PHONEREGISTER_ONPWDVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x16897A00)
#define CUSTOMSKIN_PHONEREGISTER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16895F40)
#define CUSTOMSKIN_PHONEREGISTER_REQUESTVERIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x16897A50)
#define CUSTOMSKIN_PHONEREGISTER_RESETCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x16897F50)
#define CUSTOMSKIN_PHONEREGISTER_SETACCOUNTINPUT_OFFSET UNITYSDK_OFFSET(0x16896A80)
#define CUSTOMSKIN_PHONEREGISTER_SETCHECKBOX_OFFSET UNITYSDK_OFFSET(0x168971F0)
#define CUSTOMSKIN_PHONEREGISTER_SETGETCODEBTN_OFFSET UNITYSDK_OFFSET(0x16897140)
#define CUSTOMSKIN_PHONEREGISTER_SETPRIVACY_OFFSET UNITYSDK_OFFSET(0x168974A0)
#define CUSTOMSKIN_PHONEREGISTER_SETPWDINPUT_OFFSET UNITYSDK_OFFSET(0x16896E30)
#define CUSTOMSKIN_PHONEREGISTER_SETREGISTER_OFFSET UNITYSDK_OFFSET(0x16897350)
#define CUSTOMSKIN_PHONEREGISTER_SETZONETIP_OFFSET UNITYSDK_OFFSET(0x168969A0)
#define CUSTOMSKIN_PHONEREGISTER_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x16897C70)
#define CUSTOMSKIN_PHONEREGISTER_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET UNITYSDK_OFFSET(0x16897610)
#define CUSTOMSKIN_PHONEREGISTER__CTOR_OFFSET UNITYSDK_OFFSET(0x16895B80)
#define CUSTOMSKIN_PHONEREGISTER__REQUESTVERIFYMESSAGE_B__21_0_OFFSET UNITYSDK_OFFSET(0x168989A0)
#define CUSTOMSKIN_PHONEREGISTER___BASE_ONELEMENTSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x16898B70)

inline static constexpr unsigned int CustomSkin_PhoneRegister_TypeDefinitionIndex = 90845;

class CustomSkin_PhoneRegister : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_PhoneRegister** StaticGet__instance()
	{
		return (::CustomSkin_PhoneRegister**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_PhoneRegister_TypeDefinitionIndex)->GetStaticField(0x512D0);
	}
	::MoleMole::UIGeneralSDKLoginDialogPopWindowController* _phonePage; // 0x18
	::UnityEngine::Coroutine* coroutine; // 0x20
	::PHIDBAMPHMP* _loginView; // 0x28
	::System::Single countDownTime; // 0x30
	::System::Boolean isRequestVerifyCode; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_PhoneRegister* Instance()
	{
		return ((::CustomSkin_PhoneRegister*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_INSTANCE_OFFSET))();
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_ONSHOW_OFFSET))(this);
	}

	::System::Void OnElementStatusChanged(::System::String* strElementID, ::System::String* strStatusName, ::System::String* strStatusValue)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_ONELEMENTSTATUSCHANGED_OFFSET))(this, strElementID, strStatusName, strStatusValue);
	}

	::System::Void OnOpenLoginRegister(::MoleMole::UIGeneralSDKLoginDialogPopWindowController* widget)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralSDKLoginDialogPopWindowController*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_ONOPENLOGINREGISTER_OFFSET))(this, widget);
	}

	::System::Void SetPrivacy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_SETPRIVACY_OFFSET))(this);
	}

	::System::Void ClickBackBtn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_CLICKBACKBTN_OFFSET))(this);
	}

	::System::Void ClickCloseBtn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_CLICKCLOSEBTN_OFFSET))(this);
	}

	::System::Void SetZoneTip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_SETZONETIP_OFFSET))(this);
	}

	::System::Void SetAccountInput()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_SETACCOUNTINPUT_OFFSET))(this);
	}

	::System::Void SetPWDInput()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_SETPWDINPUT_OFFSET))(this);
	}

	::System::Void OnPhoneInputValueChange(::System::String* input)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_ONPHONEINPUTVALUECHANGE_OFFSET))(this, input);
	}

	::System::Void OnPWDValueChange(::System::String* input)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_ONPWDVALUECHANGE_OFFSET))(this, input);
	}

	::System::Void UpdateRequestCodeButtonStatus()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET))(this);
	}

	::System::Void SetGetCodeBtn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_SETGETCODEBTN_OFFSET))(this);
	}

	::System::Void RequestVerifyMessage()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_REQUESTVERIFYMESSAGE_OFFSET))(this);
	}

	::System::Void StartCountDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_STARTCOUNTDOWN_OFFSET))(this);
	}

	::System::Void ResetCountDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_RESETCOUNTDOWN_OFFSET))(this);
	}

	::System::Collections::IEnumerator* CountDown(::System::Single time)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_COUNTDOWN_OFFSET))(this, time);
	}

	::System::Void SetCheckBox()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_SETCHECKBOX_OFFSET))(this);
	}

	::System::Void ClickUserAgreementButton()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_CLICKUSERAGREEMENTBUTTON_OFFSET))(this);
	}

	::System::Void ClickUserPrivacyButton()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_CLICKUSERPRIVACYBUTTON_OFFSET))(this);
	}

	::System::Void OnClickAgrementAllCheckBox()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_ONCLICKAGREMENTALLCHECKBOX_OFFSET))(this);
	}

	::System::Void SetRegister()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_SETREGISTER_OFFSET))(this);
	}

	::System::Void EnterGame()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_ENTERGAME_OFFSET))(this);
	}

	::System::Void OnOpenConsoleProtocolWindow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_ONOPENCONSOLEPROTOCOLWINDOW_OFFSET))(this);
	}

	::System::Void OnConsoleCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_ONCONSOLECANCEL_OFFSET))(this);
	}

	::System::Void _RequestVerifyMessage_b__21_0(::System::String* strResult)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER__REQUESTVERIFYMESSAGE_B__21_0_OFFSET))(this, strResult);
	}

	::System::Void __base_OnElementStatusChanged(::System::String* P0, ::System::String* P1, ::System::String* P2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER___BASE_ONELEMENTSTATUSCHANGED_OFFSET))(this, P0, P1, P2);
	}
};
