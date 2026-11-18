#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class GNFNKHHJMFH;
namespace MoleMole { class UIGeneralLoginCheckDialogPopWindowController; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define CUSTOMSKIN_PHONEBIND_BIND_OFFSET UNITYSDK_OFFSET(0x1A1C9DA0)
#define CUSTOMSKIN_PHONEBIND_CLICKCLOSEBTN_OFFSET UNITYSDK_OFFSET(0x1A1C94C0)
#define CUSTOMSKIN_PHONEBIND_COUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1A1C9CC0)
#define CUSTOMSKIN_PHONEBIND_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1A1C8270)
#define CUSTOMSKIN_PHONEBIND_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1A1C8430)
#define CUSTOMSKIN_PHONEBIND_ONCONSOLECANCEL_OFFSET UNITYSDK_OFFSET(0x1A1CA020)
#define CUSTOMSKIN_PHONEBIND_ONPHONEALUECHANGE_OFFSET UNITYSDK_OFFSET(0x1A1C9540)
#define CUSTOMSKIN_PHONEBIND_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1A1C8630)
#define CUSTOMSKIN_PHONEBIND_REQUESTVERIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A1C9840)
#define CUSTOMSKIN_PHONEBIND_RESETCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1A1C9D50)
#define CUSTOMSKIN_PHONEBIND_SETACCOUNTINPUT_OFFSET UNITYSDK_OFFSET(0x1A1C8D90)
#define CUSTOMSKIN_PHONEBIND_SETNOTICE_OFFSET UNITYSDK_OFFSET(0x1A1C93E0)
#define CUSTOMSKIN_PHONEBIND_SETPWDINPUT_OFFSET UNITYSDK_OFFSET(0x1A1C9090)
#define CUSTOMSKIN_PHONEBIND_SETREGISTER_OFFSET UNITYSDK_OFFSET(0x1A1C92F0)
#define CUSTOMSKIN_PHONEBIND_SETZONETIP_OFFSET UNITYSDK_OFFSET(0x1A1C8CA0)
#define CUSTOMSKIN_PHONEBIND_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1A1C9A60)
#define CUSTOMSKIN_PHONEBIND_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET UNITYSDK_OFFSET(0x1A1C95A0)
#define CUSTOMSKIN_PHONEBIND__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1C83A0)
#define CUSTOMSKIN_PHONEBIND__REQUESTVERIFYMESSAGE_B__16_0_OFFSET UNITYSDK_OFFSET(0x1A1CA130)

inline static constexpr unsigned int CustomSkin_PhoneBind_TypeDefinitionIndex = 54179;

class CustomSkin_PhoneBind : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_PhoneBind** StaticGet__instance()
	{
		return (::CustomSkin_PhoneBind**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_PhoneBind_TypeDefinitionIndex)->GetStaticField(0x3D730);
	}
	::GNFNKHHJMFH* _loginView; // 0x18
	::UnityEngine::Coroutine* coroutine; // 0x20
	::MoleMole::UIGeneralLoginCheckDialogPopWindowController* _phonePage; // 0x28
	::System::Boolean isRequestVerifyCode; // 0x30
	::System::Byte _padding0[0x3];
	::System::Single countDownTime; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_PhoneBind* Instance()
	{
		return ((::CustomSkin_PhoneBind*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND_INSTANCE_OFFSET))();
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND_ONSHOW_OFFSET))(this);
	}

	::System::Void SetNotice()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND_SETNOTICE_OFFSET))(this);
	}

	::System::Void SetZoneTip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND_SETZONETIP_OFFSET))(this);
	}

	::System::Void ClickCloseBtn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND_CLICKCLOSEBTN_OFFSET))(this);
	}

	::System::Void SetAccountInput()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND_SETACCOUNTINPUT_OFFSET))(this);
	}

	::System::Void SetPWDInput()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND_SETPWDINPUT_OFFSET))(this);
	}

	::System::Void OnPhonealueChange(::System::String* input)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND_ONPHONEALUECHANGE_OFFSET))(this, input);
	}

	::System::Void UpdateRequestCodeButtonStatus()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET))(this);
	}

	::System::Void RequestVerifyMessage()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND_REQUESTVERIFYMESSAGE_OFFSET))(this);
	}

	::System::Void StartCountDown(::System::Single nCountdown)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND_STARTCOUNTDOWN_OFFSET))(this, nCountdown);
	}

	::System::Void ResetCountDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND_RESETCOUNTDOWN_OFFSET))(this);
	}

	::System::Collections::IEnumerator* CountDown(::System::Single time)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND_COUNTDOWN_OFFSET))(this, time);
	}

	::System::Void SetRegister()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND_SETREGISTER_OFFSET))(this);
	}

	::System::Void Bind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND_BIND_OFFSET))(this);
	}

	::System::Void OnConsoleCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND_ONCONSOLECANCEL_OFFSET))(this);
	}

	::System::Void _RequestVerifyMessage_b__16_0(::System::String* strResult)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND__REQUESTVERIFYMESSAGE_B__16_0_OFFSET))(this, strResult);
	}
};
