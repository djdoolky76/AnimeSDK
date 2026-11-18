#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class EKADPOPDKDC;
namespace MoleMole { class UIGeneralDescriptConfrimDialogPopWindowController; }

#define KMOPEJAOGLO_EEJFGABFNON_OFFSET UNITYSDK_OFFSET(0x1A2D4270)
#define KMOPEJAOGLO_GBNBNILPDAA_OFFSET UNITYSDK_OFFSET(0x1A2D40A0)
#define KMOPEJAOGLO_GFDEIAKGDKB_OFFSET UNITYSDK_OFFSET(0x1A2D44F0)
#define KMOPEJAOGLO_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x1A2D3C60)
#define KMOPEJAOGLO_KPAAECFGKOD_OFFSET UNITYSDK_OFFSET(0x1A2D4310)
#define KMOPEJAOGLO_LHAGNNDHKCC_OFFSET UNITYSDK_OFFSET(0x1A2D4A90)
#define KMOPEJAOGLO_LMNDPNDILMB_OFFSET UNITYSDK_OFFSET(0x1A2D4540)
#define KMOPEJAOGLO_NECJJPOPLMA_OFFSET UNITYSDK_OFFSET(0x1A2D4A10)
#define KMOPEJAOGLO_NJLLMPCDOEB_OFFSET UNITYSDK_OFFSET(0x1A2D48E0)
#define KMOPEJAOGLO_NKPBGNCKFDM_OFFSET UNITYSDK_OFFSET(0x1A2D4490)
#define KMOPEJAOGLO_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1A2D38E0)
#define KMOPEJAOGLO_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1A2D3A70)
#define KMOPEJAOGLO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2D41E0)

inline static constexpr unsigned int KMOPEJAOGLO_TypeDefinitionIndex = 53291;

class KMOPEJAOGLO : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::KMOPEJAOGLO** StaticGet_PMKINFHDLFD()
	{
		return (::KMOPEJAOGLO**)Il2CppClass::FromTypeDefinitionIndex(KMOPEJAOGLO_TypeDefinitionIndex)->GetStaticField(0x4A0E0);
	}
	::EKADPOPDKDC* KMMKMGDHCOI; // 0x18
	::MoleMole::UIGeneralDescriptConfrimDialogPopWindowController* HDNKMBCIOHD; // 0x20
	::System::Boolean BKKKGOJKICI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOPEJAOGLO__CTOR_OFFSET))(this);
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOPEJAOGLO_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOPEJAOGLO_ONSHOW_OFFSET))(this);
	}

	::System::Void EEJFGABFNON(::System::Boolean BKKKGOJKICI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KMOPEJAOGLO_EEJFGABFNON_OFFSET))(this, BKKKGOJKICI);
	}

	::System::Void KPAAECFGKOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOPEJAOGLO_KPAAECFGKOD_OFFSET))(this);
	}

	::System::Void NKPBGNCKFDM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOPEJAOGLO_NKPBGNCKFDM_OFFSET))(this);
	}

	::System::Void GFDEIAKGDKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOPEJAOGLO_GFDEIAKGDKB_OFFSET))(this);
	}

	::System::Void GBNBNILPDAA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOPEJAOGLO_GBNBNILPDAA_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOPEJAOGLO_HFBPONNNLBA_OFFSET))(this);
	}

	static ::KMOPEJAOGLO* NJLLMPCDOEB()
	{
		return ((::KMOPEJAOGLO*(*)())((::PBYTE)hIl2Cpp + KMOPEJAOGLO_NJLLMPCDOEB_OFFSET))();
	}

	::System::Void NECJJPOPLMA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOPEJAOGLO_NECJJPOPLMA_OFFSET))(this);
	}

	::System::Void LHAGNNDHKCC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOPEJAOGLO_LHAGNNDHKCC_OFFSET))(this);
	}

	::System::Void LMNDPNDILMB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOPEJAOGLO_LMNDPNDILMB_OFFSET))(this);
	}
};
