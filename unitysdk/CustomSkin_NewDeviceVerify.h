#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class GNFNKHHJMFH;
namespace MoleMole { class UIGeneralLoginCheckDialogPopWindowController; }
namespace System { class String; }

#define CUSTOMSKIN_NEWDEVICEVERIFY_CLICKBACKBTN_OFFSET UNITYSDK_OFFSET(0x19A29570)
#define CUSTOMSKIN_NEWDEVICEVERIFY_CLICKCLOSEBTN_OFFSET UNITYSDK_OFFSET(0x19A295F0)
#define CUSTOMSKIN_NEWDEVICEVERIFY_CLICKPROBLEM_OFFSET UNITYSDK_OFFSET(0x19A29340)
#define CUSTOMSKIN_NEWDEVICEVERIFY_CLICKVERIFY_OFFSET UNITYSDK_OFFSET(0x19A293C0)
#define CUSTOMSKIN_NEWDEVICEVERIFY_INSTANCE_OFFSET UNITYSDK_OFFSET(0x19A28230)
#define CUSTOMSKIN_NEWDEVICEVERIFY_ONCLICKGETCAPTCHA_OFFSET UNITYSDK_OFFSET(0x19A29670)
#define CUSTOMSKIN_NEWDEVICEVERIFY_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x19A283F0)
#define CUSTOMSKIN_NEWDEVICEVERIFY_ONCONSOLECANCEL_OFFSET UNITYSDK_OFFSET(0x19A29A00)
#define CUSTOMSKIN_NEWDEVICEVERIFY_ONREQUESTCAPTCHACALLBACK_OFFSET UNITYSDK_OFFSET(0x19A29710)
#define CUSTOMSKIN_NEWDEVICEVERIFY_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19A28440)
#define CUSTOMSKIN_NEWDEVICEVERIFY_SETCAPTCHAINPUT_OFFSET UNITYSDK_OFFSET(0x19A290A0)
#define CUSTOMSKIN_NEWDEVICEVERIFY_SETNOTICE_OFFSET UNITYSDK_OFFSET(0x19A28EE0)
#define CUSTOMSKIN_NEWDEVICEVERIFY_SETPROBLEMBUTTON_OFFSET UNITYSDK_OFFSET(0x19A28DD0)
#define CUSTOMSKIN_NEWDEVICEVERIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x19A28360)
#define CUSTOMSKIN_NEWDEVICEVERIFY__ONREQUESTCAPTCHACALLBACK_B__14_0_OFFSET UNITYSDK_OFFSET(0x19A29B90)

inline static constexpr unsigned int CustomSkin_NewDeviceVerify_TypeDefinitionIndex = 56274;

class CustomSkin_NewDeviceVerify : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_NewDeviceVerify** StaticGet__instance()
	{
		return (::CustomSkin_NewDeviceVerify**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_NewDeviceVerify_TypeDefinitionIndex)->GetStaticField(0x371D0);
	}
	::MoleMole::UIGeneralLoginCheckDialogPopWindowController* popWidget; // 0x18
	::GNFNKHHJMFH* _view; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_NEWDEVICEVERIFY__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_NewDeviceVerify* Instance()
	{
		return ((::CustomSkin_NewDeviceVerify*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_NEWDEVICEVERIFY_INSTANCE_OFFSET))();
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_NEWDEVICEVERIFY_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_NEWDEVICEVERIFY_ONSHOW_OFFSET))(this);
	}

	::System::Void ClickProblem()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_NEWDEVICEVERIFY_CLICKPROBLEM_OFFSET))(this);
	}

	::System::Void ClickVerify()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_NEWDEVICEVERIFY_CLICKVERIFY_OFFSET))(this);
	}

	::System::Void ClickBackBtn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_NEWDEVICEVERIFY_CLICKBACKBTN_OFFSET))(this);
	}

	::System::Void ClickCloseBtn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_NEWDEVICEVERIFY_CLICKCLOSEBTN_OFFSET))(this);
	}

	::System::Void SetNotice()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_NEWDEVICEVERIFY_SETNOTICE_OFFSET))(this);
	}

	::System::Void SetCaptchaInput()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_NEWDEVICEVERIFY_SETCAPTCHAINPUT_OFFSET))(this);
	}

	::System::Void SetProblemButton()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_NEWDEVICEVERIFY_SETPROBLEMBUTTON_OFFSET))(this);
	}

	::System::Void OnClickGetCaptcha()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_NEWDEVICEVERIFY_ONCLICKGETCAPTCHA_OFFSET))(this);
	}

	::System::Void OnRequestCaptchaCallback(::System::String* strResult)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_NEWDEVICEVERIFY_ONREQUESTCAPTCHACALLBACK_OFFSET))(this, strResult);
	}

	::System::Void OnConsoleCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_NEWDEVICEVERIFY_ONCONSOLECANCEL_OFFSET))(this);
	}

	::System::Void _OnRequestCaptchaCallback_b__14_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_NEWDEVICEVERIFY__ONREQUESTCAPTCHACALLBACK_B__14_0_OFFSET))(this);
	}
};
