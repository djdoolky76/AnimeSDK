#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class FMCGDEACGHG;
namespace MoleMole { class UIGeneralGoogleLoginDialogPopWindowController; }
namespace System { class String; }

#define CEDLJLFNPFO_AOJOIBMCMPD_OFFSET UNITYSDK_OFFSET(0x16945FE0)
#define CEDLJLFNPFO_FGLNMKHIFHG_OFFSET UNITYSDK_OFFSET(0x169460E0)
#define CEDLJLFNPFO_HHKPHOCMOCG_OFFSET UNITYSDK_OFFSET(0x16945C50)
#define CEDLJLFNPFO_LKBGHADKMNI_OFFSET UNITYSDK_OFFSET(0x16945E80)
#define CEDLJLFNPFO_LMNDPNDILMB_OFFSET UNITYSDK_OFFSET(0x16945660)
#define CEDLJLFNPFO_NJBMHPCCNKE_OFFSET UNITYSDK_OFFSET(0x16945E50)
#define CEDLJLFNPFO_NJLLMPCDOEB_OFFSET UNITYSDK_OFFSET(0x16945EB0)
#define CEDLJLFNPFO_OGMOCILKNMN_OFFSET UNITYSDK_OFFSET(0x169458A0)
#define CEDLJLFNPFO_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x16945D60)
#define CEDLJLFNPFO_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16945200)
#define CEDLJLFNPFO_PPDKHENCBJH_OFFSET UNITYSDK_OFFSET(0x16946060)
#define CEDLJLFNPFO__CTOR_OFFSET UNITYSDK_OFFSET(0x16945DC0)

inline static constexpr unsigned int CEDLJLFNPFO_TypeDefinitionIndex = 52866;

class CEDLJLFNPFO : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CEDLJLFNPFO** StaticGet_PMKINFHDLFD()
	{
		return (::CEDLJLFNPFO**)Il2CppClass::FromTypeDefinitionIndex(CEDLJLFNPFO_TypeDefinitionIndex)->GetStaticField(0x45D60);
	}
	::MoleMole::UIGeneralGoogleLoginDialogPopWindowController* NAIIPLIGCDK; // 0x18
	::FMCGDEACGHG* KMMKMGDHCOI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDLJLFNPFO__CTOR_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDLJLFNPFO_ONSHOW_OFFSET))(this);
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDLJLFNPFO_ONCLOSE_OFFSET))(this);
	}

	::System::Void NJBMHPCCNKE(::System::String* IAOAHKDAKIK)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CEDLJLFNPFO_NJBMHPCCNKE_OFFSET))(this, IAOAHKDAKIK);
	}

	::System::Void OGMOCILKNMN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDLJLFNPFO_OGMOCILKNMN_OFFSET))(this);
	}

	::System::Void LKBGHADKMNI(::System::String* KKDABAIDLNG)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CEDLJLFNPFO_LKBGHADKMNI_OFFSET))(this, KKDABAIDLNG);
	}

	static ::CEDLJLFNPFO* NJLLMPCDOEB()
	{
		return ((::CEDLJLFNPFO*(*)())((::PBYTE)hIl2Cpp + CEDLJLFNPFO_NJLLMPCDOEB_OFFSET))();
	}

	::System::Void AOJOIBMCMPD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDLJLFNPFO_AOJOIBMCMPD_OFFSET))(this);
	}

	::System::Void PPDKHENCBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDLJLFNPFO_PPDKHENCBJH_OFFSET))(this);
	}

	::System::Void HHKPHOCMOCG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDLJLFNPFO_HHKPHOCMOCG_OFFSET))(this);
	}

	::System::Void LMNDPNDILMB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDLJLFNPFO_LMNDPNDILMB_OFFSET))(this);
	}

	::System::Void FGLNMKHIFHG(::System::String* CIIJOODEMAD)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CEDLJLFNPFO_FGLNMKHIFHG_OFFSET))(this, CIIJOODEMAD);
	}
};
