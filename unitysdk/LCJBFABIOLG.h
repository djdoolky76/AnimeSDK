#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFOPAEHFPMM.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class JIGFJGLOAID;
namespace MoleMole { class UIGeneralDynamicTipsPopWindowController; }
namespace MoleMole { class UIGeneralLoginDropDownBoxRowWidgetController; }
namespace MoleMole { class UIGeneralMobileLoginPopWindowController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LCJBFABIOLG_BALCJKNMHAJ_OFFSET UNITYSDK_OFFSET(0x129C1420)
#define LCJBFABIOLG_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x129BF780)
#define LCJBFABIOLG_CEBGEGCDMPD_OFFSET UNITYSDK_OFFSET(0x129C1470)
#define LCJBFABIOLG_EBAJKNDBPFB_OFFSET UNITYSDK_OFFSET(0x129C1200)
#define LCJBFABIOLG_GPBKKJKFIKI_OFFSET UNITYSDK_OFFSET(0x129C1620)
#define LCJBFABIOLG_HBOKMDJGADB_OFFSET UNITYSDK_OFFSET(0x129C14C0)
#define LCJBFABIOLG_HHKPHOCMOCG_OFFSET UNITYSDK_OFFSET(0x129C1080)
#define LCJBFABIOLG_IJPFDELIGHC_OFFSET UNITYSDK_OFFSET(0x129C0410)
#define LCJBFABIOLG_LDDFAEJGAOE_OFFSET UNITYSDK_OFFSET(0x129BFD50)
#define LCJBFABIOLG_LGCHBPAJGDF_OFFSET UNITYSDK_OFFSET(0x129C0670)
#define LCJBFABIOLG_LMKMHKLKEBP_OFFSET UNITYSDK_OFFSET(0x129C0000)
#define LCJBFABIOLG_LMNDPNDILMB_OFFSET UNITYSDK_OFFSET(0x129C0D40)
#define LCJBFABIOLG_MHCBDJKFEJO_OFFSET UNITYSDK_OFFSET(0x129C1410)
#define LCJBFABIOLG_MOONKMLDKPA_OFFSET UNITYSDK_OFFSET(0x129C1360)
#define LCJBFABIOLG_NBIEDFHPCKH_OFFSET UNITYSDK_OFFSET(0x129C0E70)
#define LCJBFABIOLG_NMAOGEGKKEC_OFFSET UNITYSDK_OFFSET(0x129C12A0)
#define LCJBFABIOLG_OFJOHCHIBDG_OFFSET UNITYSDK_OFFSET(0x129C0BB0)
#define LCJBFABIOLG_OHBKJBFMEIH_OFFSET UNITYSDK_OFFSET(0x129C1310)
#define LCJBFABIOLG_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x129BFB90)
#define LCJBFABIOLG_ONHIDEELEMENT_OFFSET UNITYSDK_OFFSET(0x129BFF10)
#define LCJBFABIOLG_ONSHOWELEMENT_OFFSET UNITYSDK_OFFSET(0x129BFCF0)
#define LCJBFABIOLG_ONSHOW_OFFSET UNITYSDK_OFFSET(0x129BF1E0)
#define LCJBFABIOLG_OOJLMIINBGJ_OFFSET UNITYSDK_OFFSET(0x129C1610)
#define LCJBFABIOLG_PJPDMAELKPK_OFFSET UNITYSDK_OFFSET(0x129C1190)
#define LCJBFABIOLG__CTOR_OFFSET UNITYSDK_OFFSET(0x129BFF70)

inline static constexpr unsigned int LCJBFABIOLG_TypeDefinitionIndex = 53686;

class LCJBFABIOLG : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	::System::String* HIFDDHECCNB; // 0x18
	::System::String* MCNEHLMILPE; // 0x20
	::System::String* EFPJHDFAFIB; // 0x28
	::System::String* INPPLGEHPPI; // 0x30
	::System::String* ACDFEOMHBCM; // 0x38
	::JIGFJGLOAID* KMMKMGDHCOI; // 0x40
	::System::String* FMNBAFLJLPF; // 0x48
	::System::String* MCKMLPFIMHO; // 0x50
	::System::String* JDMJLOANEOI; // 0x58
	::System::String* PHADNOADJJL; // 0x60
	::System::String* ABGMPOLMKCE; // 0x68
	::System::String* FNLHNMHPCBE; // 0x70
	::System::String* EJDGJJEGOEM; // 0x78
	::System::Collections::Generic::List_1<::BFOPAEHFPMM>* MNFJILMALNP; // 0x80
	::System::String* PJPAOLHNKDB; // 0x88
	::System::String* JAGJOJLNHED; // 0x90
	::MoleMole::UIGeneralDynamicTipsPopWindowController* IDDKNFDAGMN; // 0x98
	::MoleMole::UIGeneralMobileLoginPopWindowController* JMLHCKKNDID; // 0xA0
	::System::String* NNIKLFOPHJN; // 0xA8
	::System::Boolean LBLMLNFKGEE; // 0xB0
	::System::Boolean GFHGGMMIGLG; // 0xB1
	::System::Boolean NAKPKGJLFJB; // 0xB2

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJBFABIOLG__CTOR_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJBFABIOLG_ONSHOW_OFFSET))(this);
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJBFABIOLG_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShowElement(::System::Collections::Generic::List_1<::System::String*>* NAFPLJGACAN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + LCJBFABIOLG_ONSHOWELEMENT_OFFSET))(this, NAFPLJGACAN);
	}

	::System::Void OnHideElement(::System::Collections::Generic::List_1<::System::String*>* NAFPLJGACAN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + LCJBFABIOLG_ONHIDEELEMENT_OFFSET))(this, NAFPLJGACAN);
	}

	::System::Void LMKMHKLKEBP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJBFABIOLG_LMKMHKLKEBP_OFFSET))(this);
	}

	::System::Void LDDFAEJGAOE(::System::Collections::Generic::List_1<::System::String*>* NAFPLJGACAN, ::System::Boolean IDDCDGMAHEJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LCJBFABIOLG_LDDFAEJGAOE_OFFSET))(this, NAFPLJGACAN, IDDCDGMAHEJ);
	}

	::System::Void IJPFDELIGHC(::System::String* CAEKEEGMIHE, ::MoleMole::UIGeneralLoginDropDownBoxRowWidgetController* FPPPIIFJOBO)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::UIGeneralLoginDropDownBoxRowWidgetController*))((::PBYTE)hIl2Cpp + LCJBFABIOLG_IJPFDELIGHC_OFFSET))(this, CAEKEEGMIHE, FPPPIIFJOBO);
	}

	::System::Void LGCHBPAJGDF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJBFABIOLG_LGCHBPAJGDF_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJBFABIOLG_BBOMJDBNHIC_OFFSET))(this);
	}

	::System::Void HHKPHOCMOCG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJBFABIOLG_HHKPHOCMOCG_OFFSET))(this);
	}

	::System::Void PJPDMAELKPK(::System::String* NKMFDGNPICC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LCJBFABIOLG_PJPDMAELKPK_OFFSET))(this, NKMFDGNPICC);
	}

	::System::Void EBAJKNDBPFB(::System::Boolean FLHOJMEBHJE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LCJBFABIOLG_EBAJKNDBPFB_OFFSET))(this, FLHOJMEBHJE);
	}

	::System::Void NMAOGEGKKEC(::System::String* DBGJLGPNKJM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LCJBFABIOLG_NMAOGEGKKEC_OFFSET))(this, DBGJLGPNKJM);
	}

	::System::Void OHBKJBFMEIH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJBFABIOLG_OHBKJBFMEIH_OFFSET))(this);
	}

	::System::Void MOONKMLDKPA(::System::Int32 CKPGOKHECCH, ::System::Boolean LIEJIGMGGOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + LCJBFABIOLG_MOONKMLDKPA_OFFSET))(this, CKPGOKHECCH, LIEJIGMGGOL);
	}

	::System::Void MHCBDJKFEJO(::System::Collections::Generic::List_1<::System::String*>* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + LCJBFABIOLG_MHCBDJKFEJO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void BALCJKNMHAJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJBFABIOLG_BALCJKNMHAJ_OFFSET))(this);
	}

	::System::Void CEBGEGCDMPD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJBFABIOLG_CEBGEGCDMPD_OFFSET))(this);
	}

	::System::Void HBOKMDJGADB(::System::String* BDIPNONFJDG)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LCJBFABIOLG_HBOKMDJGADB_OFFSET))(this, BDIPNONFJDG);
	}

	::System::Void NBIEDFHPCKH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJBFABIOLG_NBIEDFHPCKH_OFFSET))(this);
	}

	::System::Void OFJOHCHIBDG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJBFABIOLG_OFJOHCHIBDG_OFFSET))(this);
	}

	::System::Void LMNDPNDILMB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJBFABIOLG_LMNDPNDILMB_OFFSET))(this);
	}

	::System::Void OOJLMIINBGJ(::System::Collections::Generic::List_1<::System::String*>* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + LCJBFABIOLG_OOJLMIINBGJ_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GPBKKJKFIKI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJBFABIOLG_GPBKKJKFIKI_OFFSET))(this);
	}
};
