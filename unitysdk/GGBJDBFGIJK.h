#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGBJDBFGIJK_KMPKGHFLCCM.h"
#include "unitysdk/GGBJDBFGIJK_PIMDDJMPMDB.h"
#include "unitysdk/MoleMole/UINounDetailPanelWidgetController_HeightState.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/LIBOIKJGAIH.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/UnityEngine/UI/Extension/LinkClickInfo.h"
#include "unitysdk/UnityEngine/UI/Extension/NavigableLink.h"
#include "unitysdk/UnityEngine/UI/Extension/TermData.h"

class BCGHNGEEBMB;
class GGBJDBFGIJK_FJIFEPHBDCM;
class IOOIHHOJOPI;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadLinkModule; }
namespace MoleMole { class MonoGamepadScrollView; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UINounDetailPanelWidgetController; }
namespace MoleMole { class UINounDetailPanelWidgetController_Data; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class ABGINBDKGEK_1;
template <typename T> class LJHFMILANJA_1;

#define GGBJDBFGIJK_AAEHBDPHLBN_OFFSET UNITYSDK_OFFSET(0x11DA56F0)
#define GGBJDBFGIJK_AEJCHEJEHPL_OFFSET UNITYSDK_OFFSET(0x11DA5550)
#define GGBJDBFGIJK_BBGMKGKEAOM_OFFSET UNITYSDK_OFFSET(0x11DA6F50)
#define GGBJDBFGIJK_BDPBPDGBLOK_OFFSET UNITYSDK_OFFSET(0x11DA6AF0)
#define GGBJDBFGIJK_BEGMNCEOIEA_OFFSET UNITYSDK_OFFSET(0x11DA8140)
#define GGBJDBFGIJK_BKCBIPKKIAK_OFFSET UNITYSDK_OFFSET(0x11DA70B0)
#define GGBJDBFGIJK_BLADIPKMKLH_OFFSET UNITYSDK_OFFSET(0x11DA6440)
#define GGBJDBFGIJK_BNIPPHFNCLH_OFFSET UNITYSDK_OFFSET(0x11DA5C70)
#define GGBJDBFGIJK_CDLJGKCNOJI_OFFSET UNITYSDK_OFFSET(0x11DA6BB0)
#define GGBJDBFGIJK_CFBIKNJIMAF_OFFSET UNITYSDK_OFFSET(0x11DA7840)
#define GGBJDBFGIJK_CHCLANIDANG_OFFSET UNITYSDK_OFFSET(0x11DA3CC0)
#define GGBJDBFGIJK_COLGCMJIGGA_OFFSET UNITYSDK_OFFSET(0x11DA80B0)
#define GGBJDBFGIJK_DMJLFEKBBGL_OFFSET UNITYSDK_OFFSET(0x11DA85A0)
#define GGBJDBFGIJK_EEHPOBIGIKG_OFFSET UNITYSDK_OFFSET(0x11DA6780)
#define GGBJDBFGIJK_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x11DA2F40)
#define GGBJDBFGIJK_ELLCPDONEGN_OFFSET UNITYSDK_OFFSET(0x11DA6EE0)
#define GGBJDBFGIJK_FBOKPEFDKOH_OFFSET UNITYSDK_OFFSET(0x11DA4770)
#define GGBJDBFGIJK_FBPIMIMEEDD_OFFSET UNITYSDK_OFFSET(0x11DA74E0)
#define GGBJDBFGIJK_FCPJBPCHICK_OFFSET UNITYSDK_OFFSET(0x11DA8B30)
#define GGBJDBFGIJK_FKONAEJBKML_OFFSET UNITYSDK_OFFSET(0x11DA4DF0)
#define GGBJDBFGIJK_FNDGFKFKKCJ_OFFSET UNITYSDK_OFFSET(0x11DA6370)
#define GGBJDBFGIJK_GDJMJAAGFJA_OFFSET UNITYSDK_OFFSET(0x11DA7A30)
#define GGBJDBFGIJK_GFBJLHMNBAD_OFFSET UNITYSDK_OFFSET(0x11DA8150)
#define GGBJDBFGIJK_GKPNNLKBIBJ_OFFSET UNITYSDK_OFFSET(0x11DA79E0)
#define GGBJDBFGIJK_HBKHPHCPLOM_OFFSET UNITYSDK_OFFSET(0x11DA6CB0)
#define GGBJDBFGIJK_HCLHOOKJIAI_OFFSET UNITYSDK_OFFSET(0x11DA6E20)
#define GGBJDBFGIJK_HFLLKFNCKKK_OFFSET UNITYSDK_OFFSET(0x11DA7920)
#define GGBJDBFGIJK_HONKDNFJEGH_OFFSET UNITYSDK_OFFSET(0x11DA5DC0)
#define GGBJDBFGIJK_IAHAJGNLAMH_OFFSET UNITYSDK_OFFSET(0x11DA7030)
#define GGBJDBFGIJK_IFPGNBOGHBP_OFFSET UNITYSDK_OFFSET(0x11DA4070)
#define GGBJDBFGIJK_IIOBICPBCGG_OFFSET UNITYSDK_OFFSET(0x11DA6680)
#define GGBJDBFGIJK_IJNBKEKMNHD_OFFSET UNITYSDK_OFFSET(0x11DA5430)
#define GGBJDBFGIJK_IMHDJLJMDCO_OFFSET UNITYSDK_OFFSET(0x11DA75D0)
#define GGBJDBFGIJK_IOEINNCFOKF_OFFSET UNITYSDK_OFFSET(0x11DA43B0)
#define GGBJDBFGIJK_IPENCCNBMNG_OFFSET UNITYSDK_OFFSET(0x11DA5B30)
#define GGBJDBFGIJK_JMEONEBAJFH_OFFSET UNITYSDK_OFFSET(0x11DA7320)
#define GGBJDBFGIJK_JPMMBALNCHK_OFFSET UNITYSDK_OFFSET(0x11DA8020)
#define GGBJDBFGIJK_KJFNMLLKINN_OFFSET UNITYSDK_OFFSET(0x11DA83F0)
#define GGBJDBFGIJK_KLLIPIOKLEF_OFFSET UNITYSDK_OFFSET(0x11DA72C0)
#define GGBJDBFGIJK_KMCPKHONHFA_OFFSET UNITYSDK_OFFSET(0x11DA7640)
#define GGBJDBFGIJK_LDIPBBCCODF_OFFSET UNITYSDK_OFFSET(0x11DA8A20)
#define GGBJDBFGIJK_LIBPKNDKDCP_OFFSET UNITYSDK_OFFSET(0x11DA6ED0)
#define GGBJDBFGIJK_LKNBCFOKJLO_OFFSET UNITYSDK_OFFSET(0x11DA6D90)
#define GGBJDBFGIJK_LLGIPKGKDGN_OFFSET UNITYSDK_OFFSET(0x11DA8160)
#define GGBJDBFGIJK_LOCDCIKFDKM_OFFSET UNITYSDK_OFFSET(0x11DA4800)
#define GGBJDBFGIJK_MCPOABOBIKI_OFFSET UNITYSDK_OFFSET(0x11DA4880)
#define GGBJDBFGIJK_MOIADHOGMAD_OFFSET UNITYSDK_OFFSET(0x11DA54B0)
#define GGBJDBFGIJK_MOKINDNACHI_OFFSET UNITYSDK_OFFSET(0x11DA35A0)
#define GGBJDBFGIJK_MPNFJMCDHHD_OFFSET UNITYSDK_OFFSET(0x11DA5BB0)
#define GGBJDBFGIJK_NEFNCOIAIMF_OFFSET UNITYSDK_OFFSET(0x11DA61E0)
#define GGBJDBFGIJK_NGAKPPNJAFH_OFFSET UNITYSDK_OFFSET(0x11DA62F0)
#define GGBJDBFGIJK_NGPHFJKHNCL_OFFSET UNITYSDK_OFFSET(0x11DA7D70)
#define GGBJDBFGIJK_NJDODHGFAEC_OFFSET UNITYSDK_OFFSET(0x11DA60B0)
#define GGBJDBFGIJK_NKNLKBMIMID_OFFSET UNITYSDK_OFFSET(0x11DA7D80)
#define GGBJDBFGIJK_NKPAGONEHCH_OFFSET UNITYSDK_OFFSET(0x11DA3830)
#define GGBJDBFGIJK_NNJIFGFHGEK_OFFSET UNITYSDK_OFFSET(0x11DA5620)
#define GGBJDBFGIJK_NPKBDILPMHJ_OFFSET UNITYSDK_OFFSET(0x11DA6C20)
#define GGBJDBFGIJK_OAACKLJIKAO_OFFSET UNITYSDK_OFFSET(0x11DA87E0)
#define GGBJDBFGIJK_OBBJKALBMFL_OFFSET UNITYSDK_OFFSET(0x11DA6FA0)
#define GGBJDBFGIJK_ODMPHIDGGIL_OFFSET UNITYSDK_OFFSET(0x11DA4E80)
#define GGBJDBFGIJK_OLOHILMELBL_OFFSET UNITYSDK_OFFSET(0x11DA50F0)
#define GGBJDBFGIJK_OMMBODPLOMG_OFFSET UNITYSDK_OFFSET(0x11DA8960)
#define GGBJDBFGIJK_PILPKINFMBA_OFFSET UNITYSDK_OFFSET(0x11DA3660)
#define GGBJDBFGIJK__CTOR_OFFSET UNITYSDK_OFFSET(0x11DA4CF0)

inline static constexpr unsigned int GGBJDBFGIJK_TypeDefinitionIndex = 92289;

class GGBJDBFGIJK : public ::PBJOCICFNGK
{
public:
	// static const ::System::String* NLPNOEJJLHH; // 0x0
	::MoleMole::MonoGamepadLinkModule* HDBNBIPAIEP; // 0x50
	::System::Collections::Generic::List_1<::System::Object*>* NOPNPHOBJDC; // 0x58
	::MonoUITableScrollV2* NBJALMGLPJB; // 0x60
	::ABGINBDKGEK_1<::System::Object*>* _MNAMJLMNMHP_k__BackingField; // 0x68
	::BCGHNGEEBMB* GLMNCBDBKBG; // 0x70
	::LJHFMILANJA_1<::System::Object*>* _NFMCJBAAGIF_k__BackingField; // 0x78
	::MoleMole::MonoGamepadScrollView* GAIGHOIFIED; // 0x80
	::System::Threading::CancellationTokenSource* IAOIKHCFFED; // 0x88
	::System::Collections::Generic::List_1<::System::Object*>* BJLHFJKFOHE; // 0x90
	::MonoUITableScrollV2* NFBBNPNHMJB; // 0x98
	::GGBJDBFGIJK_KMPKGHFLCCM MBIBALELBOH; // 0xA0
	::System::Boolean FDEIGILPLJB; // 0xA4
	::System::Boolean ALFEAGMHCLF; // 0xA5
	::System::Byte _padding0[0x2];
	::GGBJDBFGIJK_PIMDDJMPMDB FBOJFMJDFPF; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBJDBFGIJK__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void MOKINDNACHI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_MOKINDNACHI_OFFSET))(this);
	}

	::System::Void PILPKINFMBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_PILPKINFMBA_OFFSET))(this);
	}

	::System::Void NKPAGONEHCH(::MoleMole::UIControllerContextBase* KMCJLGLCOHD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_NKPAGONEHCH_OFFSET))(this, KMCJLGLCOHD);
	}

	::System::Void IFPGNBOGHBP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_IFPGNBOGHBP_OFFSET))(this);
	}

	::System::Boolean LOCDCIKFDKM(::UnityEngine::UI::Extension::LinkClickInfo LKGOLAAECJB)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Extension::LinkClickInfo))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_LOCDCIKFDKM_OFFSET))(this, LKGOLAAECJB);
	}

	::System::Void FKONAEJBKML()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_FKONAEJBKML_OFFSET))(this);
	}

	::System::Void IOEINNCFOKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_IOEINNCFOKF_OFFSET))(this);
	}

	::System::Int32 OLOHILMELBL(::System::String* EKIIGDPIELF)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_OLOHILMELBL_OFFSET))(this, EKIIGDPIELF);
	}

	::System::Void IJNBKEKMNHD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_IJNBKEKMNHD_OFFSET))(this);
	}

	::System::Threading::CancellationToken AEJCHEJEHPL()
	{
		return ((::System::Threading::CancellationToken(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_AEJCHEJEHPL_OFFSET))(this);
	}

	::System::Void NNJIFGFHGEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_NNJIFGFHGEK_OFFSET))(this);
	}

	::System::Boolean IPENCCNBMNG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_IPENCCNBMNG_OFFSET))(this);
	}

	::System::Void HONKDNFJEGH(::System::Int32 NDINEJNGCFG, ::UnityEngine::UI::Extension::TermData JBFFOGMPNGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::UI::Extension::TermData))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_HONKDNFJEGH_OFFSET))(this, NDINEJNGCFG, JBFFOGMPNGM);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid NGAKPPNJAFH(::MoleMole::UINounDetailPanelWidgetController_Data* LJBPECKCCEA)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::MoleMole::UINounDetailPanelWidgetController_Data*))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_NGAKPPNJAFH_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void FNDGFKFKKCJ(::System::Int32 NDINEJNGCFG, ::UnityEngine::UI::Extension::TermData JBFFOGMPNGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::UI::Extension::TermData))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_FNDGFKFKKCJ_OFFSET))(this, NDINEJNGCFG, JBFFOGMPNGM);
	}

	::System::Boolean AAEHBDPHLBN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_AAEHBDPHLBN_OFFSET))(this);
	}

	::System::Void BLADIPKMKLH(::System::Int32 NDINEJNGCFG, ::UnityEngine::UI::Extension::TermData JBFFOGMPNGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::UI::Extension::TermData))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_BLADIPKMKLH_OFFSET))(this, NDINEJNGCFG, JBFFOGMPNGM);
	}

	static ::System::Boolean EEHPOBIGIKG(::UnityEngine::UI::Extension::UILocalizationText* FCCLIEJAKLI, ::MonoUITableScrollV2* FAMGIABLFPH)
	{
		return ((::System::Boolean(*)(::UnityEngine::UI::Extension::UILocalizationText*, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_EEHPOBIGIKG_OFFSET))(FCCLIEJAKLI, FAMGIABLFPH);
	}

	::MoleMole::UINounDetailPanelWidgetController* BDPBPDGBLOK(::System::Int32 BLIIBGEDDEI)
	{
		return ((::MoleMole::UINounDetailPanelWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_BDPBPDGBLOK_OFFSET))(this, BLIIBGEDDEI);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid CDLJGKCNOJI()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_CDLJGKCNOJI_OFFSET))(this);
	}

	::System::Void NPKBDILPMHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_NPKBDILPMHJ_OFFSET))(this);
	}

	::System::Void ODMPHIDGGIL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_ODMPHIDGGIL_OFFSET))(this);
	}

	::System::Void LKNBCFOKJLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_LKNBCFOKJLO_OFFSET))(this);
	}

	::System::Void CHCLANIDANG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_CHCLANIDANG_OFFSET))(this);
	}

	::System::Int32 HCLHOOKJIAI(::System::Int32 NDINEJNGCFG)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_HCLHOOKJIAI_OFFSET))(this, NDINEJNGCFG);
	}

	::ABGINBDKGEK_1<::System::Object*>* LIBPKNDKDCP()
	{
		return ((::ABGINBDKGEK_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_LIBPKNDKDCP_OFFSET))(this);
	}

	::System::Void ELLCPDONEGN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_ELLCPDONEGN_OFFSET))(this);
	}

	::System::Void OBBJKALBMFL(::MoleMole::UIControllerContextBase* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_OBBJKALBMFL_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void BBGMKGKEAOM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_BBGMKGKEAOM_OFFSET))(this);
	}

	::System::Boolean IAHAJGNLAMH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_IAHAJGNLAMH_OFFSET))(this);
	}

	static ::System::Boolean BKCBIPKKIAK(::System::String* FCCLIEJAKLI, ::System::String* LMAOPJIHOKI)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_BKCBIPKKIAK_OFFSET))(FCCLIEJAKLI, LMAOPJIHOKI);
	}

	::MoleMole::UINounDetailPanelWidgetController* HBKHPHCPLOM()
	{
		return ((::MoleMole::UINounDetailPanelWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_HBKHPHCPLOM_OFFSET))(this);
	}

	::MoleMole::UINounDetailPanelWidgetController_Data* NEFNCOIAIMF(::GGBJDBFGIJK_FJIFEPHBDCM* AAIJGGIEOGK, ::MoleMole::UINounDetailPanelWidgetController_HeightState LIFGKDLPIDM)
	{
		return ((::MoleMole::UINounDetailPanelWidgetController_Data*(*)(::PVOID, ::GGBJDBFGIJK_FJIFEPHBDCM*, ::MoleMole::UINounDetailPanelWidgetController_HeightState))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_NEFNCOIAIMF_OFFSET))(this, AAIJGGIEOGK, LIFGKDLPIDM);
	}

	static ::MoleMole::UINounDetailPanelWidgetController_HeightState KLLIPIOKLEF(::System::Int32 ABHBKFJKINO, ::System::Int32 JGDJIDCIIGE)
	{
		return ((::MoleMole::UINounDetailPanelWidgetController_HeightState(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_KLLIPIOKLEF_OFFSET))(ABHBKFJKINO, JGDJIDCIIGE);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Object*>* JMEONEBAJFH()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_JMEONEBAJFH_OFFSET))(this);
	}

	static ::System::Int32 FBPIMIMEEDD(::System::Collections::Generic::List_1<::System::String*>* FJEJEEHMEOL, ::System::String* EKIIGDPIELF)
	{
		return ((::System::Int32(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_FBPIMIMEEDD_OFFSET))(FJEJEEHMEOL, EKIIGDPIELF);
	}

	::System::Boolean IMHDJLJMDCO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_IMHDJLJMDCO_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid IIOBICPBCGG(::System::Int32 NDINEJNGCFG, ::UnityEngine::UI::Extension::TermData JBFFOGMPNGM)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Int32, ::UnityEngine::UI::Extension::TermData))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_IIOBICPBCGG_OFFSET))(this, NDINEJNGCFG, JBFFOGMPNGM);
	}

	::System::Void MCPOABOBIKI(::System::String* EKIIGDPIELF, ::UnityEngine::UI::Extension::UILocalizationText* FCCLIEJAKLI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_MCPOABOBIKI_OFFSET))(this, EKIIGDPIELF, FCCLIEJAKLI);
	}

	::System::Void KMCPKHONHFA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_KMCPKHONHFA_OFFSET))(this);
	}

	::System::Void HFLLKFNCKKK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_HFLLKFNCKKK_OFFSET))(this);
	}

	::System::Void MOIADHOGMAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_MOIADHOGMAD_OFFSET))(this);
	}

	::System::Collections::IEnumerable* GKPNNLKBIBJ()
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_GKPNNLKBIBJ_OFFSET))(this);
	}

	static ::GGBJDBFGIJK_FJIFEPHBDCM* NJDODHGFAEC(::System::Int32 NDINEJNGCFG, ::UnityEngine::UI::Extension::TermData JBFFOGMPNGM)
	{
		return ((::GGBJDBFGIJK_FJIFEPHBDCM*(*)(::System::Int32, ::UnityEngine::UI::Extension::TermData))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_NJDODHGFAEC_OFFSET))(NDINEJNGCFG, JBFFOGMPNGM);
	}

	::System::Void GDJMJAAGFJA(::UnityEngine::UI::Extension::NavigableLink HMJBCOIFCCF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::NavigableLink))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_GDJMJAAGFJA_OFFSET))(this, HMJBCOIFCCF);
	}

	::System::Void NGPHFJKHNCL(::ABGINBDKGEK_1<::System::Object*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::ABGINBDKGEK_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_NGPHFJKHNCL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void NKNLKBMIMID()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_NKNLKBMIMID_OFFSET))(this);
	}

	::System::Void BNIPPHFNCLH(::System::Int32 AKGGKGEPJLP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_BNIPPHFNCLH_OFFSET))(this, AKGGKGEPJLP);
	}

	::UnityEngine::UI::Extension::UILocalizationText* COLGCMJIGGA(::System::Int32 ABHBKFJKINO)
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_COLGCMJIGGA_OFFSET))(this, ABHBKFJKINO);
	}

	static ::System::Int32 CFBIKNJIMAF(::System::Collections::Generic::List_1<::System::String*>* FJEJEEHMEOL, ::System::String* EMLCLBNJJCL)
	{
		return ((::System::Int32(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_CFBIKNJIMAF_OFFSET))(FJEJEEHMEOL, EMLCLBNJJCL);
	}

	::System::Void BEGMNCEOIEA(::LJHFMILANJA_1<::System::Object*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LJHFMILANJA_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_BEGMNCEOIEA_OFFSET))(this, EGEGIMGMJHN);
	}

	::LJHFMILANJA_1<::System::Object*>* GFBJLHMNBAD()
	{
		return ((::LJHFMILANJA_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_GFBJLHMNBAD_OFFSET))(this);
	}

	::System::Void LLGIPKGKDGN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_LLGIPKGKDGN_OFFSET))(this);
	}

	::System::Void KJFNMLLKINN(::System::Int32 AKGGKGEPJLP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_KJFNMLLKINN_OFFSET))(this, AKGGKGEPJLP);
	}

	static ::System::Void DMJLFEKBBGL(::MoleMole::UINounDetailPanelWidgetController* JOLDOMEIKEF, ::MoleMole::UINounDetailPanelWidgetController_Data* LJBPECKCCEA, ::MoleMole::UINounDetailPanelWidgetController_HeightState JBAAOKJHJMH, ::System::Boolean JMMMIAHKEFB, ::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>* PIGJMDBMCGD)
	{
		return ((::System::Void(*)(::MoleMole::UINounDetailPanelWidgetController*, ::MoleMole::UINounDetailPanelWidgetController_Data*, ::MoleMole::UINounDetailPanelWidgetController_HeightState, ::System::Boolean, ::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>*))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_DMJLFEKBBGL_OFFSET))(JOLDOMEIKEF, LJBPECKCCEA, JBAAOKJHJMH, JMMMIAHKEFB, PIGJMDBMCGD);
	}

	::System::Void OAACKLJIKAO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_OAACKLJIKAO_OFFSET))(this);
	}

	::System::Void MPNFJMCDHHD(::GGBJDBFGIJK_KMPKGHFLCCM FMMIJOCCIAG, ::System::Int32 OJPBBAPMHFI)
	{
		return ((::System::Void(*)(::PVOID, ::GGBJDBFGIJK_KMPKGHFLCCM, ::System::Int32))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_MPNFJMCDHHD_OFFSET))(this, FMMIJOCCIAG, OJPBBAPMHFI);
	}

	::System::Void FBOKPEFDKOH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_FBOKPEFDKOH_OFFSET))(this);
	}

	::System::Void OMMBODPLOMG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_OMMBODPLOMG_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid JPMMBALNCHK(::System::Int32 AKGGKGEPJLP)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_JPMMBALNCHK_OFFSET))(this, AKGGKGEPJLP);
	}

	::System::Void LDIPBBCCODF(::MoleMole::UINounDetailPanelWidgetController_Data* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UINounDetailPanelWidgetController_Data*))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_LDIPBBCCODF_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void FCPJBPCHICK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_FCPJBPCHICK_OFFSET))(this);
	}
};
