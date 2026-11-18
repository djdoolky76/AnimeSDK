#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOEHMFIFFAJ.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"

namespace MiHoYo::SDK::PluginUI { class MiHoYoSDKUIContainer; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIGeneralLoginCheckDialogPopWindowController; }
namespace MoleMole { class UIGeneralSDKLoginDialogPopWindowController; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MHAAEPJEDOB_AEPIIFGLJBN_OFFSET UNITYSDK_OFFSET(0x1853A3C0)
#define MHAAEPJEDOB_CHJNPPKFLAN_OFFSET UNITYSDK_OFFSET(0x18539320)
#define MHAAEPJEDOB_DCOOMFJEPEJ_OFFSET UNITYSDK_OFFSET(0x1853A0D0)
#define MHAAEPJEDOB_DDLGLOGCKDA_OFFSET UNITYSDK_OFFSET(0x18539610)
#define MHAAEPJEDOB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18538350)
#define MHAAEPJEDOB_EKJGELIOJDA_OFFSET UNITYSDK_OFFSET(0x18538450)
#define MHAAEPJEDOB_EMECIIOCHAG_OFFSET UNITYSDK_OFFSET(0x18538990)
#define MHAAEPJEDOB_EMLJPPPNNDF_OFFSET UNITYSDK_OFFSET(0x1853A2D0)
#define MHAAEPJEDOB_EONACNNJCEG_OFFSET UNITYSDK_OFFSET(0x18539E60)
#define MHAAEPJEDOB_GMBHPCIJDIH_OFFSET UNITYSDK_OFFSET(0x1853A320)
#define MHAAEPJEDOB_HIFLHCGIHFH_OFFSET UNITYSDK_OFFSET(0x1853A4E0)
#define MHAAEPJEDOB_HLJLAOKJKJJ_OFFSET UNITYSDK_OFFSET(0x18538E80)
#define MHAAEPJEDOB_KLFJBAHODDN_OFFSET UNITYSDK_OFFSET(0x185394B0)
#define MHAAEPJEDOB_LGLOJCAKPOG_OFFSET UNITYSDK_OFFSET(0x18539BC0)
#define MHAAEPJEDOB_MMGLHOHGHMP_OFFSET UNITYSDK_OFFSET(0x18538EC0)
#define MHAAEPJEDOB_MOLNLOKGKII_OFFSET UNITYSDK_OFFSET(0x18539830)
#define MHAAEPJEDOB_NIEOKKDNOCC_OFFSET UNITYSDK_OFFSET(0x185399F0)
#define MHAAEPJEDOB_NIFIDFLKDJL_OFFSET UNITYSDK_OFFSET(0x1853A220)
#define MHAAEPJEDOB_OBJCKBGBFHK_OFFSET UNITYSDK_OFFSET(0x1853A280)
#define MHAAEPJEDOB_OBNJPAJNFOJ_OFFSET UNITYSDK_OFFSET(0x1853A010)
#define MHAAEPJEDOB_ONCREATE_OFFSET UNITYSDK_OFFSET(0x18538390)
#define MHAAEPJEDOB__CTOR_OFFSET UNITYSDK_OFFSET(0x18538E20)

inline static constexpr unsigned int MHAAEPJEDOB_TypeDefinitionIndex = 58073;

class MHAAEPJEDOB
{
public:
	::System::Collections::Generic::List_1<::MoleMole::UIBaseController*>* NMPPLLGPNOK; // 0x10
	::MoleMole::UIGeneralSDKLoginDialogPopWindowController* KOFOFPHHJDO; // 0x18
	::System::Action* CPDPCAFPBJF; // 0x20
	::System::Action_2<::System::Action_1<::System::String*>*, ::System::Boolean>* PGLHHIONECE; // 0x28
	::MoleMole::UIGeneralSDKLoginDialogPopWindowController* EJDDKGOHGBN; // 0x30
	::MoleMole::UIGeneralSDKLoginDialogPopWindowController* PKNGNODGOBO; // 0x38
	::MoleMole::UIGeneralSDKLoginDialogPopWindowController* MBEOOJFKGBG; // 0x40
	::System::Int32 LENPFOMPLND; // 0x48
	::Foundation::Coroutine::CoroutineHandle LHPDEJEGLED; // 0x4C
	::System::Single IMGIHIFCBFK; // 0x50
	::System::Boolean AKPPBNAKKMM; // 0x54
	::System::Boolean EIKCINGMDKB; // 0x55
	::System::Boolean MAOOFPECAPJ; // 0x56
	::System::Boolean LHODADNHPAE; // 0x57

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHAAEPJEDOB__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHAAEPJEDOB_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHAAEPJEDOB_ONCREATE_OFFSET))(this);
	}

	::System::Void HLJLAOKJKJJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHAAEPJEDOB_HLJLAOKJKJJ_OFFSET))(this);
	}

	::System::Void MMGLHOHGHMP(::System::String* PJCNAIPAJPN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MHAAEPJEDOB_MMGLHOHGHMP_OFFSET))(this, PJCNAIPAJPN);
	}

	::System::Void KLFJBAHODDN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHAAEPJEDOB_KLFJBAHODDN_OFFSET))(this);
	}

	::System::Void CHJNPPKFLAN(::MoleMole::UIBaseController* CAIGAPCBCGK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + MHAAEPJEDOB_CHJNPPKFLAN_OFFSET))(this, CAIGAPCBCGK);
	}

	::System::Void DDLGLOGCKDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHAAEPJEDOB_DDLGLOGCKDA_OFFSET))(this);
	}

	::System::Void MOLNLOKGKII(::FOEHMFIFFAJ OBNIAHNMHPF, ::System::String* GFAFMKBICMC)
	{
		return ((::System::Void(*)(::PVOID, ::FOEHMFIFFAJ, ::System::String*))((::PBYTE)hIl2Cpp + MHAAEPJEDOB_MOLNLOKGKII_OFFSET))(this, OBNIAHNMHPF, GFAFMKBICMC);
	}

	::System::Void NIEOKKDNOCC(::System::String* ECGCGPDOJIA, ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer* ECMMKCJLBMD)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer*))((::PBYTE)hIl2Cpp + MHAAEPJEDOB_NIEOKKDNOCC_OFFSET))(this, ECGCGPDOJIA, ECMMKCJLBMD);
	}

	::System::Void EMECIIOCHAG(::System::Boolean DDHJLIANCPF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MHAAEPJEDOB_EMECIIOCHAG_OFFSET))(this, DDHJLIANCPF);
	}

	::System::Void LGLOJCAKPOG(::System::Action_1<::MoleMole::UIGeneralSDKLoginDialogPopWindowController*>* FKHOJLMBILE, ::System::String* KPIAFDELPJL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::UIGeneralSDKLoginDialogPopWindowController*>*, ::System::String*))((::PBYTE)hIl2Cpp + MHAAEPJEDOB_LGLOJCAKPOG_OFFSET))(this, FKHOJLMBILE, KPIAFDELPJL);
	}

	static ::System::Void OBNJPAJNFOJ(::System::String* KHDJIKKJKJN)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MHAAEPJEDOB_OBNJPAJNFOJ_OFFSET))(KHDJIKKJKJN);
	}

	::MoleMole::UIGeneralLoginCheckDialogPopWindowController* DCOOMFJEPEJ()
	{
		return ((::MoleMole::UIGeneralLoginCheckDialogPopWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHAAEPJEDOB_DCOOMFJEPEJ_OFFSET))(this);
	}

	::MoleMole::UIGeneralSDKLoginDialogPopWindowController* EONACNNJCEG(::System::Boolean HIFAOHFLEMM)
	{
		return ((::MoleMole::UIGeneralSDKLoginDialogPopWindowController*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MHAAEPJEDOB_EONACNNJCEG_OFFSET))(this, HIFAOHFLEMM);
	}

	::System::Void NIFIDFLKDJL(::System::String* JBIADOFJMMH)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MHAAEPJEDOB_NIFIDFLKDJL_OFFSET))(this, JBIADOFJMMH);
	}

	::MoleMole::UIGeneralSDKLoginDialogPopWindowController* OBJCKBGBFHK()
	{
		return ((::MoleMole::UIGeneralSDKLoginDialogPopWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHAAEPJEDOB_OBJCKBGBFHK_OFFSET))(this);
	}

	::System::Void EMLJPPPNNDF(::System::Boolean AOBBOCLDJOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MHAAEPJEDOB_EMLJPPPNNDF_OFFSET))(this, AOBBOCLDJOL);
	}

	::System::Void EKJGELIOJDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHAAEPJEDOB_EKJGELIOJDA_OFFSET))(this);
	}

	::System::Void GMBHPCIJDIH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHAAEPJEDOB_GMBHPCIJDIH_OFFSET))(this);
	}

	::System::Void AEPIIFGLJBN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHAAEPJEDOB_AEPIIFGLJBN_OFFSET))(this);
	}

	::System::Void HIFLHCGIHFH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHAAEPJEDOB_HIFLHCGIHFH_OFFSET))(this);
	}
};
