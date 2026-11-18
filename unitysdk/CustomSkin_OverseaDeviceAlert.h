#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class GNFNKHHJMFH;
namespace MoleMole { class UIGeneralLoginCheckDialogPopWindowController; }

#define CUSTOMSKIN_OVERSEADEVICEALERT_CLICKBACKBTN_OFFSET UNITYSDK_OFFSET(0x132834E0)
#define CUSTOMSKIN_OVERSEADEVICEALERT_CLICKBIND_OFFSET UNITYSDK_OFFSET(0x13283330)
#define CUSTOMSKIN_OVERSEADEVICEALERT_CLICKCLOSEBTN_OFFSET UNITYSDK_OFFSET(0x13283560)
#define CUSTOMSKIN_OVERSEADEVICEALERT_CLICKNOW_OFFSET UNITYSDK_OFFSET(0x132832B0)
#define CUSTOMSKIN_OVERSEADEVICEALERT_INSTANCE_OFFSET UNITYSDK_OFFSET(0x13282250)
#define CUSTOMSKIN_OVERSEADEVICEALERT_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x13282410)
#define CUSTOMSKIN_OVERSEADEVICEALERT_ONCONSOLECANCEL_OFFSET UNITYSDK_OFFSET(0x132835E0)
#define CUSTOMSKIN_OVERSEADEVICEALERT_ONSHOW_OFFSET UNITYSDK_OFFSET(0x13282470)
#define CUSTOMSKIN_OVERSEADEVICEALERT_SETDEVICELIST_OFFSET UNITYSDK_OFFSET(0x13282F90)
#define CUSTOMSKIN_OVERSEADEVICEALERT_SETNOTICE_OFFSET UNITYSDK_OFFSET(0x13282DB0)
#define CUSTOMSKIN_OVERSEADEVICEALERT__CTOR_OFFSET UNITYSDK_OFFSET(0x13282380)

inline static constexpr unsigned int CustomSkin_OverseaDeviceAlert_TypeDefinitionIndex = 78724;

class CustomSkin_OverseaDeviceAlert : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_OverseaDeviceAlert** StaticGet__instance()
	{
		return (::CustomSkin_OverseaDeviceAlert**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_OverseaDeviceAlert_TypeDefinitionIndex)->GetStaticField(0x49940);
	}
	::MoleMole::UIGeneralLoginCheckDialogPopWindowController* popWidget; // 0x18
	::GNFNKHHJMFH* _view; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEADEVICEALERT__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_OverseaDeviceAlert* Instance()
	{
		return ((::CustomSkin_OverseaDeviceAlert*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEADEVICEALERT_INSTANCE_OFFSET))();
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEADEVICEALERT_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEADEVICEALERT_ONSHOW_OFFSET))(this);
	}

	::System::Void ClicKnow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEADEVICEALERT_CLICKNOW_OFFSET))(this);
	}

	::System::Void ClickBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEADEVICEALERT_CLICKBIND_OFFSET))(this);
	}

	::System::Void ClickBackBtn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEADEVICEALERT_CLICKBACKBTN_OFFSET))(this);
	}

	::System::Void ClickCloseBtn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEADEVICEALERT_CLICKCLOSEBTN_OFFSET))(this);
	}

	::System::Void SetNotice()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEADEVICEALERT_SETNOTICE_OFFSET))(this);
	}

	::System::Void SetDeviceList()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEADEVICEALERT_SETDEVICELIST_OFFSET))(this);
	}

	::System::Void OnConsoleCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEADEVICEALERT_ONCONSOLECANCEL_OFFSET))(this);
	}
};
