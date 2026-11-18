#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class PHIDBAMPHMP;
namespace MoleMole { class UIGeneralSDKLoginDialogPopWindowController; }
namespace System { class String; }
namespace UnityEngine::Events { class UnityAction; }

#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA_ENTERGAME_OFFSET UNITYSDK_OFFSET(0x123FBCE0)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA_FORGETPASSWORD_OFFSET UNITYSDK_OFFSET(0x123FB5B0)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA_GENENTRYCALLBACK_OFFSET UNITYSDK_OFFSET(0x123FBA00)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA_INIT_OFFSET UNITYSDK_OFFSET(0x123F9F10)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA_INSTANCE_OFFSET UNITYSDK_OFFSET(0x123F9220)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA_ISREGISTERVISIBLE_OFFSET UNITYSDK_OFFSET(0x123FAA00)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0x123FBAB0)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA_ONCLICKBACK_OFFSET UNITYSDK_OFFSET(0x123FBC60)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x123F9450)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA_ONCONSOLECANCEL_OFFSET UNITYSDK_OFFSET(0x123FBFF0)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA_ONOPENLOGIN_OFFSET UNITYSDK_OFFSET(0x123F9AC0)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA_ONREGISTERACCOUNT_OFFSET UNITYSDK_OFFSET(0x123FB6D0)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA_ONSHOW_OFFSET UNITYSDK_OFFSET(0x123F98B0)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA_ONUILAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x123FC140)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA_REFRESHCONSOLERELATEUI_OFFSET UNITYSDK_OFFSET(0x123FA810)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA_REGISTER_OFFSET UNITYSDK_OFFSET(0x123FB630)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA_RESET_OFFSET UNITYSDK_OFFSET(0x123F9570)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA_SETPLATFORM_OFFSET UNITYSDK_OFFSET(0x123FA5A0)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA_SETTHIRDLOGIN_OFFSET UNITYSDK_OFFSET(0x123FAAD0)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA_UPDATE_OFFSET UNITYSDK_OFFSET(0x123FB210)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA__CCTOR_OFFSET UNITYSDK_OFFSET(0x123FC190)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA__CTOR_OFFSET UNITYSDK_OFFSET(0x123F93C0)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA__INIT_B__9_0_OFFSET UNITYSDK_OFFSET(0x123FC3F0)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA__INIT_B__9_1_OFFSET UNITYSDK_OFFSET(0x123FC460)

inline static constexpr unsigned int CustomSkin_AccountLoginOversea_TypeDefinitionIndex = 60402;

class CustomSkin_AccountLoginOversea : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_AccountLoginOversea** StaticGet__instance()
	{
		return (::CustomSkin_AccountLoginOversea**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_AccountLoginOversea_TypeDefinitionIndex)->GetStaticField(0x4B690);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_thirdEntryNameList()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_AccountLoginOversea_TypeDefinitionIndex)->GetStaticField(0x4B698);
	}
	static ::Il2CppArray<::Foundation::AssetPath>** StaticGet_thirdEntryIconList()
	{
		return (::Il2CppArray<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_AccountLoginOversea_TypeDefinitionIndex)->GetStaticField(0x4B6A0);
	}
	::MoleMole::UIGeneralSDKLoginDialogPopWindowController* _acctountPage; // 0x18
	::PHIDBAMPHMP* _loginView; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA__CCTOR_OFFSET))();
	}

	static ::CustomSkin_AccountLoginOversea* Instance()
	{
		return ((::CustomSkin_AccountLoginOversea*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA_INSTANCE_OFFSET))();
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA_ONSHOW_OFFSET))(this);
	}

	::System::Void OnOpenLogin(::MoleMole::UIGeneralSDKLoginDialogPopWindowController* widget)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralSDKLoginDialogPopWindowController*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA_ONOPENLOGIN_OFFSET))(this, widget);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA_INIT_OFFSET))(this);
	}

	::System::Void RefreshConsoleRelateUI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA_REFRESHCONSOLERELATEUI_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA_UPDATE_OFFSET))(this);
	}

	::System::Void ForgetPassword()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA_FORGETPASSWORD_OFFSET))(this);
	}

	::System::Void Register()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA_REGISTER_OFFSET))(this);
	}

	::System::Void OnRegisterAccount(::System::String* strArgs)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA_ONREGISTERACCOUNT_OFFSET))(this, strArgs);
	}

	::System::Void SetThirdLogin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA_SETTHIRDLOGIN_OFFSET))(this);
	}

	::UnityEngine::Events::UnityAction* GenEntryCallback(::System::Int32 index)
	{
		return ((::UnityEngine::Events::UnityAction*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA_GENENTRYCALLBACK_OFFSET))(this, index);
	}

	::System::Void OnBtnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA_ONBTNCLOSE_OFFSET))(this);
	}

	::System::Void OnClickBack()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA_ONCLICKBACK_OFFSET))(this);
	}

	::System::Void EnterGame()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA_ENTERGAME_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA_RESET_OFFSET))(this);
	}

	::System::Void OnConsoleCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA_ONCONSOLECANCEL_OFFSET))(this);
	}

	::System::Void OnUILayoutPlatformChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA_ONUILAYOUTPLATFORMCHANGED_OFFSET))(this);
	}

	::System::Void SetPlatform()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA_SETPLATFORM_OFFSET))(this);
	}

	::System::Boolean IsRegisterVisible()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA_ISREGISTERVISIBLE_OFFSET))(this);
	}

	::System::Void _Init_b__9_0(::System::String* acctoun)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA__INIT_B__9_0_OFFSET))(this, acctoun);
	}

	::System::Void _Init_b__9_1(::System::String* strNewText)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA__INIT_B__9_1_OFFSET))(this, strNewText);
	}
};
