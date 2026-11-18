#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class EKADPOPDKDC;
namespace MoleMole { class UIGeneralDescriptConfrimDialogPopWindowController; }

#define CUSTOMSKIN_REACTIVATION_CLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x15A27F40)
#define CUSTOMSKIN_REACTIVATION_CLICKCONFRIM_OFFSET UNITYSDK_OFFSET(0x15A27FC0)
#define CUSTOMSKIN_REACTIVATION_INSTANCE_OFFSET UNITYSDK_OFFSET(0x15A27660)
#define CUSTOMSKIN_REACTIVATION_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x15A27820)
#define CUSTOMSKIN_REACTIVATION_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15A27940)
#define CUSTOMSKIN_REACTIVATION__CTOR_OFFSET UNITYSDK_OFFSET(0x15A27790)

inline static constexpr unsigned int CustomSkin_Reactivation_TypeDefinitionIndex = 52182;

class CustomSkin_Reactivation : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_Reactivation** StaticGet__instance()
	{
		return (::CustomSkin_Reactivation**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_Reactivation_TypeDefinitionIndex)->GetStaticField(0x4B6B0);
	}
	::MoleMole::UIGeneralDescriptConfrimDialogPopWindowController* _controller; // 0x18
	::EKADPOPDKDC* _view; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_REACTIVATION__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_Reactivation* Instance()
	{
		return ((::CustomSkin_Reactivation*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_REACTIVATION_INSTANCE_OFFSET))();
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_REACTIVATION_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_REACTIVATION_ONSHOW_OFFSET))(this);
	}

	::System::Void ClickClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_REACTIVATION_CLICKCLOSE_OFFSET))(this);
	}

	::System::Void ClickConfrim()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_REACTIVATION_CLICKCONFRIM_OFFSET))(this);
	}
};
