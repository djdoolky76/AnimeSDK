#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class BPPPBAHJEIE;
namespace MoleMole { class UILoginMessageBoxPopWindowController; }

#define KACFGNDHMJN_DDJKEDHKPBG_OFFSET UNITYSDK_OFFSET(0x13CD9320)
#define KACFGNDHMJN_FIHGKFLOKCG_OFFSET UNITYSDK_OFFSET(0x13CD94D0)
#define KACFGNDHMJN_NJLLMPCDOEB_OFFSET UNITYSDK_OFFSET(0x13CD93A0)
#define KACFGNDHMJN_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x13CD9230)
#define KACFGNDHMJN_ONSHOW_OFFSET UNITYSDK_OFFSET(0x13CD8E40)
#define KACFGNDHMJN__CTOR_OFFSET UNITYSDK_OFFSET(0x13CD9290)

inline static constexpr unsigned int KACFGNDHMJN_TypeDefinitionIndex = 77656;

class KACFGNDHMJN : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::KACFGNDHMJN** StaticGet_PMKINFHDLFD()
	{
		return (::KACFGNDHMJN**)Il2CppClass::FromTypeDefinitionIndex(KACFGNDHMJN_TypeDefinitionIndex)->GetStaticField(0x467D0);
	}
	::BPPPBAHJEIE* KMMKMGDHCOI; // 0x18
	::MoleMole::UILoginMessageBoxPopWindowController* HDNKMBCIOHD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KACFGNDHMJN__CTOR_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KACFGNDHMJN_ONSHOW_OFFSET))(this);
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KACFGNDHMJN_ONCLOSE_OFFSET))(this);
	}

	::System::Void DDJKEDHKPBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KACFGNDHMJN_DDJKEDHKPBG_OFFSET))(this);
	}

	static ::KACFGNDHMJN* NJLLMPCDOEB()
	{
		return ((::KACFGNDHMJN*(*)())((::PBYTE)hIl2Cpp + KACFGNDHMJN_NJLLMPCDOEB_OFFSET))();
	}

	::System::Void FIHGKFLOKCG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KACFGNDHMJN_FIHGKFLOKCG_OFFSET))(this);
	}
};
