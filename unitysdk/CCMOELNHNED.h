#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
class ZzzUiCurveGraphic;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadSpaceList; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole::Config { class UIAnimationCurveConfig; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CCMOELNHNED_AAEPGMCNIDB_OFFSET UNITYSDK_OFFSET(0x14F18380)
#define CCMOELNHNED_AIJFDAOBFPI_OFFSET UNITYSDK_OFFSET(0x14F18470)
#define CCMOELNHNED_ALKBMMOANPH_OFFSET UNITYSDK_OFFSET(0x14F184A0)
#define CCMOELNHNED_ANONBDGILCO_OFFSET UNITYSDK_OFFSET(0x14F18620)
#define CCMOELNHNED_AOHCDNPHOMJ_OFFSET UNITYSDK_OFFSET(0x14F18230)
#define CCMOELNHNED_BCBDHLEPMDD_OFFSET UNITYSDK_OFFSET(0x14F18330)
#define CCMOELNHNED_BCKHJNDMMDC_OFFSET UNITYSDK_OFFSET(0x14F181C0)
#define CCMOELNHNED_BDMLPCELJDF_OFFSET UNITYSDK_OFFSET(0x14F18350)
#define CCMOELNHNED_BEPFAAKODEG_OFFSET UNITYSDK_OFFSET(0x14F18150)
#define CCMOELNHNED_BFEEKMCPLIM_OFFSET UNITYSDK_OFFSET(0x14F18460)
#define CCMOELNHNED_BHPPFMOJODL_OFFSET UNITYSDK_OFFSET(0x14F181D0)
#define CCMOELNHNED_BILKAMPDGHI_OFFSET UNITYSDK_OFFSET(0x14F18320)
#define CCMOELNHNED_BIPIAJMGKII_OFFSET UNITYSDK_OFFSET(0x14F186C0)
#define CCMOELNHNED_BJPDFAAEMGA_OFFSET UNITYSDK_OFFSET(0x14F18540)
#define CCMOELNHNED_BKPIPCMGBLC_OFFSET UNITYSDK_OFFSET(0x14F18180)
#define CCMOELNHNED_BLPCGENLEBJ_OFFSET UNITYSDK_OFFSET(0x14F18410)
#define CCMOELNHNED_BPDIJNOKEIP_OFFSET UNITYSDK_OFFSET(0x14F18440)
#define CCMOELNHNED_BPNENGINGDO_OFFSET UNITYSDK_OFFSET(0x14F18680)
#define CCMOELNHNED_CBLKPGBPNNC_OFFSET UNITYSDK_OFFSET(0x14F185F0)
#define CCMOELNHNED_CGCINFEDHGL_OFFSET UNITYSDK_OFFSET(0x14F18670)
#define CCMOELNHNED_CIADMPMDAEJ_OFFSET UNITYSDK_OFFSET(0x14F185D0)
#define CCMOELNHNED_CJKJNDLNNIP_OFFSET UNITYSDK_OFFSET(0x14F18360)
#define CCMOELNHNED_CLKBHHGPGIK_OFFSET UNITYSDK_OFFSET(0x14F184B0)
#define CCMOELNHNED_CMFPDBFOLGJ_OFFSET UNITYSDK_OFFSET(0x14F18430)
#define CCMOELNHNED_CNGPGFIMPJO_OFFSET UNITYSDK_OFFSET(0x14F182D0)
#define CCMOELNHNED_DAIELOLHDHH_OFFSET UNITYSDK_OFFSET(0x14F185C0)
#define CCMOELNHNED_DANBKCGLKKM_OFFSET UNITYSDK_OFFSET(0x14F18600)
#define CCMOELNHNED_DIEMEPOLGEO_OFFSET UNITYSDK_OFFSET(0x14F18400)
#define CCMOELNHNED_DNDNMPGBJIJ_OFFSET UNITYSDK_OFFSET(0x14F18160)
#define CCMOELNHNED_DNGFOMFOJEI_OFFSET UNITYSDK_OFFSET(0x14F18610)
#define CCMOELNHNED_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x14F16EB0)
#define CCMOELNHNED_EGADALJPPEJ_OFFSET UNITYSDK_OFFSET(0x14F18520)
#define CCMOELNHNED_EOLFFOGGLEB_OFFSET UNITYSDK_OFFSET(0x14F18280)
#define CCMOELNHNED_FBBIMPJFFHE_OFFSET UNITYSDK_OFFSET(0x14F184D0)
#define CCMOELNHNED_FEMGFNKMEGM_OFFSET UNITYSDK_OFFSET(0x14F186A0)
#define CCMOELNHNED_FGLCBEKEKNC_OFFSET UNITYSDK_OFFSET(0x14F18390)
#define CCMOELNHNED_FHDGCFLAFFK_OFFSET UNITYSDK_OFFSET(0x14F186B0)
#define CCMOELNHNED_FIKIOEBCEJB_OFFSET UNITYSDK_OFFSET(0x14F185E0)
#define CCMOELNHNED_GEJAPMBAFFK_OFFSET UNITYSDK_OFFSET(0x14F183F0)
#define CCMOELNHNED_GFDDEBHIKKF_OFFSET UNITYSDK_OFFSET(0x14F18590)
#define CCMOELNHNED_GGLJNMGJJPM_OFFSET UNITYSDK_OFFSET(0x14F184E0)
#define CCMOELNHNED_GJNBAFKGJPA_OFFSET UNITYSDK_OFFSET(0x14F18570)
#define CCMOELNHNED_GOPCNCLHIOJ_OFFSET UNITYSDK_OFFSET(0x14F18420)
#define CCMOELNHNED_HCFDMGFAGOO_OFFSET UNITYSDK_OFFSET(0x14F18190)
#define CCMOELNHNED_HFFKAAGAKBK_OFFSET UNITYSDK_OFFSET(0x14F18200)
#define CCMOELNHNED_HGBPEHLCIFH_OFFSET UNITYSDK_OFFSET(0x14F18170)
#define CCMOELNHNED_HMOBEJPCHKI_OFFSET UNITYSDK_OFFSET(0x14F181B0)
#define CCMOELNHNED_HOEMBOAMNLC_OFFSET UNITYSDK_OFFSET(0x14F18340)
#define CCMOELNHNED_IECOLFPADNN_OFFSET UNITYSDK_OFFSET(0x14F18530)
#define CCMOELNHNED_IGPOHFHGCHE_OFFSET UNITYSDK_OFFSET(0x14F18300)
#define CCMOELNHNED_IJMFNHHDGDM_OFFSET UNITYSDK_OFFSET(0x14F182F0)
#define CCMOELNHNED_IPEHJIECDJL_OFFSET UNITYSDK_OFFSET(0x14F18290)
#define CCMOELNHNED_IPFGEIDINMP_OFFSET UNITYSDK_OFFSET(0x14F181F0)
#define CCMOELNHNED_JAMEPIGHHEI_OFFSET UNITYSDK_OFFSET(0x14F18650)
#define CCMOELNHNED_JBADMJJPENM_OFFSET UNITYSDK_OFFSET(0x14F18580)
#define CCMOELNHNED_JEFJIKCELLB_OFFSET UNITYSDK_OFFSET(0x14F18510)
#define CCMOELNHNED_JHOAIJILHIA_OFFSET UNITYSDK_OFFSET(0x14F184F0)
#define CCMOELNHNED_JJGDGOAHBNN_OFFSET UNITYSDK_OFFSET(0x14F18550)
#define CCMOELNHNED_JMCOBIDKEKB_OFFSET UNITYSDK_OFFSET(0x14F18370)
#define CCMOELNHNED_JNFOJLLELGD_OFFSET UNITYSDK_OFFSET(0x14F182A0)
#define CCMOELNHNED_KDPDIENANBJ_OFFSET UNITYSDK_OFFSET(0x14F18660)
#define CCMOELNHNED_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14F16D00)
#define CCMOELNHNED_KGJBCMOHJCM_OFFSET UNITYSDK_OFFSET(0x14F18310)
#define CCMOELNHNED_KLJMNCMIFPM_OFFSET UNITYSDK_OFFSET(0x14F18690)
#define CCMOELNHNED_KMGEGCCCHEJ_OFFSET UNITYSDK_OFFSET(0x14F18240)
#define CCMOELNHNED_KOKEJADLIJJ_OFFSET UNITYSDK_OFFSET(0x14F18500)
#define CCMOELNHNED_KPCCKKHNDPP_OFFSET UNITYSDK_OFFSET(0x14F183B0)
#define CCMOELNHNED_LGEFCEKCJJK_OFFSET UNITYSDK_OFFSET(0x14F182C0)
#define CCMOELNHNED_LGLOFJHIJJK_OFFSET UNITYSDK_OFFSET(0x14F183D0)
#define CCMOELNHNED_LKJAOMAGKIG_OFFSET UNITYSDK_OFFSET(0x14F183A0)
#define CCMOELNHNED_LMDJEFFHDEJ_OFFSET UNITYSDK_OFFSET(0x14F18250)
#define CCMOELNHNED_MAFAFEHEMCM_OFFSET UNITYSDK_OFFSET(0x14F18260)
#define CCMOELNHNED_MAINHNHNJNO_OFFSET UNITYSDK_OFFSET(0x14F18480)
#define CCMOELNHNED_MALMPFFNBAO_OFFSET UNITYSDK_OFFSET(0x14F18640)
#define CCMOELNHNED_MAMCNEOALKE_OFFSET UNITYSDK_OFFSET(0x14F183C0)
#define CCMOELNHNED_MNKHIKMLGFN_OFFSET UNITYSDK_OFFSET(0x14F18560)
#define CCMOELNHNED_MPBOAFLJIHB_OFFSET UNITYSDK_OFFSET(0x14F181E0)
#define CCMOELNHNED_NAAILKGBODH_OFFSET UNITYSDK_OFFSET(0x14F181A0)
#define CCMOELNHNED_NDLAINIDACC_OFFSET UNITYSDK_OFFSET(0x14F182B0)
#define CCMOELNHNED_NMIDPBEMMAO_OFFSET UNITYSDK_OFFSET(0x14F18270)
#define CCMOELNHNED_NNJGNMMLBOM_OFFSET UNITYSDK_OFFSET(0x14F18450)
#define CCMOELNHNED_OIIKCOAKOFL_OFFSET UNITYSDK_OFFSET(0x14F185A0)
#define CCMOELNHNED_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14F166B0)
#define CCMOELNHNED_OLIPLCBHDJG_OFFSET UNITYSDK_OFFSET(0x14F185B0)
#define CCMOELNHNED_OMCEDACDCBM_OFFSET UNITYSDK_OFFSET(0x14F183E0)
#define CCMOELNHNED_OMGJPCFHMKA_OFFSET UNITYSDK_OFFSET(0x14F18210)
#define CCMOELNHNED_OMIBMNFAJEI_OFFSET UNITYSDK_OFFSET(0x14F18490)
#define CCMOELNHNED_OMKFALOCGJM_OFFSET UNITYSDK_OFFSET(0x14F18220)
#define CCMOELNHNED_PBPDLBDHHHF_OFFSET UNITYSDK_OFFSET(0x14F18630)
#define CCMOELNHNED_PCMIMDKPAPM_OFFSET UNITYSDK_OFFSET(0x14F182E0)
#define CCMOELNHNED_PEFMJGDFCJL_OFFSET UNITYSDK_OFFSET(0x14F184C0)
#define CCMOELNHNED__CTOR_OFFSET UNITYSDK_OFFSET(0x14F180C0)

inline static constexpr unsigned int CCMOELNHNED_TypeDefinitionIndex = 47796;

class CCMOELNHNED : public ::IOOIHHOJOPI
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* _JLENAJKDFAF_k__BackingField; // 0x28
	::LGINJIKKBJA* _EBOLPKKNMDF_k__BackingField; // 0x30
	::UnityEngine::RectTransform* _MIHMOJIPFFF_k__BackingField; // 0x38
	::LGINJIKKBJA* _KPKILNGKHPK_k__BackingField; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* _PDEIEOPMBPI_k__BackingField; // 0x48
	::UnityEngine::GameObject* _FJIEDLIPKEL_k__BackingField; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* _IPENIDLANGO_k__BackingField; // 0x58
	::UnityEngine::GameObject* _BLHAPBBBLOA_k__BackingField; // 0x60
	::MonoUITableScrollV2* _HHBFPBIPKNF_k__BackingField; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* _ADDKOFGJION_k__BackingField; // 0x70
	::LGINJIKKBJA* _HAPMDHLJNKG_k__BackingField; // 0x78
	::LGINJIKKBJA* _LBEGCLICIKO_k__BackingField; // 0x80
	::UnityEngine::UI::Extension::UILocalizationText* _HPBMKFAHJPF_k__BackingField; // 0x88
	::UnityEngine::GameObject* _OLDLMKFGGIE_k__BackingField; // 0x90
	::FGCOIBFFCHB* _PFLEBMBMFLK_k__BackingField; // 0x98
	::UnityEngine::Transform* _AOPFLNKLGGH_k__BackingField; // 0xA0
	::UnityEngine::GameObject* _APEFFBELHEB_k__BackingField; // 0xA8
	::UnityEngine::UI::Extension::UILocalizationText* _DNDHLLJLFLL_k__BackingField; // 0xB0
	::UnityEngine::UI::Extension::UILocalizationText* _LBDCLAIBCFC_k__BackingField; // 0xB8
	::UnityEngine::UI::Extension::UILocalizationText* _HAFEKMAPOBN_k__BackingField; // 0xC0
	::LGINJIKKBJA* _JLHGKIJIEDG_k__BackingField; // 0xC8
	::ZzzUiCurveGraphic* _HBMAEMFPGHE_k__BackingField; // 0xD0
	::UnityEngine::UI::Extension::UILocalizationText* _PBBNPDHALIG_k__BackingField; // 0xD8
	::UnityEngine::GameObject* _CMHPDAEMGDK_k__BackingField; // 0xE0
	::UnityEngine::UI::Extension::UILocalizationText* _FOPLCBFOFGP_k__BackingField; // 0xE8
	::UnityEngine::UI::Extension::UILocalizationText* _AHDAHEPPNEH_k__BackingField; // 0xF0
	::UnityEngine::RectTransform* _LOCBGALDKIO_k__BackingField; // 0xF8
	::UnityEngine::GameObject* _BHPPJBJDCHE_k__BackingField; // 0x100
	::UnityEngine::UI::Extension::UILocalizationText* _OHEFBBOCKNB_k__BackingField; // 0x108
	::UnityEngine::UI::Extension::UILocalizationText* _CAFOJOJNDNP_k__BackingField; // 0x110
	::MoleMole::MonoGamepadModule* _ILGKDMFGOGD_k__BackingField; // 0x118
	::MoleMole::MonoGamepadSpaceList* _CGFIPKICBBE_k__BackingField; // 0x120
	::UnityEngine::GameObject* _FFHPOLDIDFK_k__BackingField; // 0x128
	::UnityEngine::GameObject* _PDBPIGIIJMI_k__BackingField; // 0x130
	::MonoUITableScrollV2* _FOPNNOOGHLI_k__BackingField; // 0x138
	::FGCOIBFFCHB* _ECIDPKAGOCC_k__BackingField; // 0x140
	::UnityEngine::GameObject* _ACLLAINPHIK_k__BackingField; // 0x148
	::LGINJIKKBJA* _ELPLJEHAAKM_k__BackingField; // 0x150
	::GCIMMDDIFBJ* _ENPJCLEMNBJ_k__BackingField; // 0x158
	::LGINJIKKBJA* _KKJGCCMDNOD_k__BackingField; // 0x160
	::MoleMole::Config::UIAnimationCurveConfig* _KFLOEFBOGCF_k__BackingField; // 0x168
	::UnityEngine::GameObject* _NJPJDDCEBFB_k__BackingField; // 0x170
	::UnityEngine::UI::Extension::UILocalizationText* _KONALJAGMAO_k__BackingField; // 0x178
	::UnityEngine::GameObject* _KAAPHHJEMOA_k__BackingField; // 0x180

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CCMOELNHNED_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void BEPFAAKODEG(::UnityEngine::GameObject* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CCMOELNHNED_BEPFAAKODEG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DNDNMPGBJIJ(::UnityEngine::GameObject* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CCMOELNHNED_DNDNMPGBJIJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::LGINJIKKBJA* HGBPEHLCIFH()
	{
		return ((::LGINJIKKBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_HGBPEHLCIFH_OFFSET))(this);
	}

	::System::Void BKPIPCMGBLC(::LGINJIKKBJA* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LGINJIKKBJA*))((::PBYTE)hIl2Cpp + CCMOELNHNED_BKPIPCMGBLC_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::UI::Extension::UILocalizationText* HCFDMGFAGOO()
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_HCFDMGFAGOO_OFFSET))(this);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_EFKGNFCEENK_OFFSET))(this);
	}

	::System::Void NAAILKGBODH(::UnityEngine::GameObject* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CCMOELNHNED_NAAILKGBODH_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::GameObject* HMOBEJPCHKI()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_HMOBEJPCHKI_OFFSET))(this);
	}

	::System::Void BCKHJNDMMDC(::FGCOIBFFCHB* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FGCOIBFFCHB*))((::PBYTE)hIl2Cpp + CCMOELNHNED_BCKHJNDMMDC_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::Transform* BHPPFMOJODL()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_BHPPFMOJODL_OFFSET))(this);
	}

	::UnityEngine::UI::Extension::UILocalizationText* MPBOAFLJIHB()
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_MPBOAFLJIHB_OFFSET))(this);
	}

	::LGINJIKKBJA* IPFGEIDINMP()
	{
		return ((::LGINJIKKBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_IPFGEIDINMP_OFFSET))(this);
	}

	::UnityEngine::GameObject* HFFKAAGAKBK()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_HFFKAAGAKBK_OFFSET))(this);
	}

	::UnityEngine::GameObject* OMGJPCFHMKA()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_OMGJPCFHMKA_OFFSET))(this);
	}

	::MoleMole::Config::UIAnimationCurveConfig* OMKFALOCGJM()
	{
		return ((::MoleMole::Config::UIAnimationCurveConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_OMKFALOCGJM_OFFSET))(this);
	}

	::System::Void AOHCDNPHOMJ(::MoleMole::MonoGamepadModule* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + CCMOELNHNED_AOHCDNPHOMJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::GameObject* KMGEGCCCHEJ()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_KMGEGCCCHEJ_OFFSET))(this);
	}

	::System::Void LMDJEFFHDEJ(::FGCOIBFFCHB* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FGCOIBFFCHB*))((::PBYTE)hIl2Cpp + CCMOELNHNED_LMDJEFFHDEJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::UI::Extension::UILocalizationText* MAFAFEHEMCM()
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_MAFAFEHEMCM_OFFSET))(this);
	}

	::FGCOIBFFCHB* NMIDPBEMMAO()
	{
		return ((::FGCOIBFFCHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_NMIDPBEMMAO_OFFSET))(this);
	}

	::System::Void EOLFFOGGLEB(::LGINJIKKBJA* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LGINJIKKBJA*))((::PBYTE)hIl2Cpp + CCMOELNHNED_EOLFFOGGLEB_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::UI::Extension::UILocalizationText* IPEHJIECDJL()
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_IPEHJIECDJL_OFFSET))(this);
	}

	::System::Void JNFOJLLELGD(::UnityEngine::UI::Extension::UILocalizationText* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + CCMOELNHNED_JNFOJLLELGD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void NDLAINIDACC(::MoleMole::Config::UIAnimationCurveConfig* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::UIAnimationCurveConfig*))((::PBYTE)hIl2Cpp + CCMOELNHNED_NDLAINIDACC_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::GameObject* LGEFCEKCJJK()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_LGEFCEKCJJK_OFFSET))(this);
	}

	::UnityEngine::GameObject* CNGPGFIMPJO()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_CNGPGFIMPJO_OFFSET))(this);
	}

	::System::Void PCMIMDKPAPM(::MonoUITableScrollV2* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + CCMOELNHNED_PCMIMDKPAPM_OFFSET))(this, EGEGIMGMJHN);
	}

	::MonoUITableScrollV2* IJMFNHHDGDM()
	{
		return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_IJMFNHHDGDM_OFFSET))(this);
	}

	::System::Void IGPOHFHGCHE(::UnityEngine::GameObject* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CCMOELNHNED_IGPOHFHGCHE_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::RectTransform* KGJBCMOHJCM()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_KGJBCMOHJCM_OFFSET))(this);
	}

	::System::Void BILKAMPDGHI(::ZzzUiCurveGraphic* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::ZzzUiCurveGraphic*))((::PBYTE)hIl2Cpp + CCMOELNHNED_BILKAMPDGHI_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::GameObject* BCBDHLEPMDD()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_BCBDHLEPMDD_OFFSET))(this);
	}

	::System::Void HOEMBOAMNLC(::UnityEngine::UI::Extension::UILocalizationText* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + CCMOELNHNED_HOEMBOAMNLC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BDMLPCELJDF(::UnityEngine::UI::Extension::UILocalizationText* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + CCMOELNHNED_BDMLPCELJDF_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::UI::Extension::UILocalizationText* CJKJNDLNNIP()
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_CJKJNDLNNIP_OFFSET))(this);
	}

	::UnityEngine::UI::Extension::UILocalizationText* JMCOBIDKEKB()
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_JMCOBIDKEKB_OFFSET))(this);
	}

	::System::Void AAEPGMCNIDB(::UnityEngine::UI::Extension::UILocalizationText* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + CCMOELNHNED_AAEPGMCNIDB_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::RectTransform* FGLCBEKEKNC()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_FGLCBEKEKNC_OFFSET))(this);
	}

	::UnityEngine::UI::Extension::UILocalizationText* LKJAOMAGKIG()
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_LKJAOMAGKIG_OFFSET))(this);
	}

	::System::Void KPCCKKHNDPP(::UnityEngine::UI::Extension::UILocalizationText* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + CCMOELNHNED_KPCCKKHNDPP_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::GameObject* MAMCNEOALKE()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_MAMCNEOALKE_OFFSET))(this);
	}

	::UnityEngine::UI::Extension::UILocalizationText* LGLOFJHIJJK()
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_LGLOFJHIJJK_OFFSET))(this);
	}

	::MoleMole::MonoGamepadModule* OMCEDACDCBM()
	{
		return ((::MoleMole::MonoGamepadModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_OMCEDACDCBM_OFFSET))(this);
	}

	::System::Void GEJAPMBAFFK(::UnityEngine::UI::Extension::UILocalizationText* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + CCMOELNHNED_GEJAPMBAFFK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DIEMEPOLGEO(::UnityEngine::UI::Extension::UILocalizationText* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + CCMOELNHNED_DIEMEPOLGEO_OFFSET))(this, EGEGIMGMJHN);
	}

	::LGINJIKKBJA* BLPCGENLEBJ()
	{
		return ((::LGINJIKKBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_BLPCGENLEBJ_OFFSET))(this);
	}

	::LGINJIKKBJA* GOPCNCLHIOJ()
	{
		return ((::LGINJIKKBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_GOPCNCLHIOJ_OFFSET))(this);
	}

	::GCIMMDDIFBJ* CMFPDBFOLGJ()
	{
		return ((::GCIMMDDIFBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_CMFPDBFOLGJ_OFFSET))(this);
	}

	::System::Void BPDIJNOKEIP(::UnityEngine::UI::Extension::UILocalizationText* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + CCMOELNHNED_BPDIJNOKEIP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void NNJGNMMLBOM(::UnityEngine::UI::Extension::UILocalizationText* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + CCMOELNHNED_NNJGNMMLBOM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BFEEKMCPLIM(::LGINJIKKBJA* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LGINJIKKBJA*))((::PBYTE)hIl2Cpp + CCMOELNHNED_BFEEKMCPLIM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void AIJFDAOBFPI(::LGINJIKKBJA* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LGINJIKKBJA*))((::PBYTE)hIl2Cpp + CCMOELNHNED_AIJFDAOBFPI_OFFSET))(this, EGEGIMGMJHN);
	}

	::LGINJIKKBJA* MAINHNHNJNO()
	{
		return ((::LGINJIKKBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_MAINHNHNJNO_OFFSET))(this);
	}

	::FGCOIBFFCHB* OMIBMNFAJEI()
	{
		return ((::FGCOIBFFCHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_OMIBMNFAJEI_OFFSET))(this);
	}

	::System::Void ALKBMMOANPH(::UnityEngine::UI::Extension::UILocalizationText* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + CCMOELNHNED_ALKBMMOANPH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CLKBHHGPGIK(::UnityEngine::GameObject* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CCMOELNHNED_CLKBHHGPGIK_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::MonoGamepadSpaceList* PEFMJGDFCJL()
	{
		return ((::MoleMole::MonoGamepadSpaceList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_PEFMJGDFCJL_OFFSET))(this);
	}

	::UnityEngine::UI::Extension::UILocalizationText* FBBIMPJFFHE()
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_FBBIMPJFFHE_OFFSET))(this);
	}

	::System::Void GGLJNMGJJPM(::GCIMMDDIFBJ* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::GCIMMDDIFBJ*))((::PBYTE)hIl2Cpp + CCMOELNHNED_GGLJNMGJJPM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JHOAIJILHIA(::UnityEngine::GameObject* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CCMOELNHNED_JHOAIJILHIA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KOKEJADLIJJ(::UnityEngine::UI::Extension::UILocalizationText* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + CCMOELNHNED_KOKEJADLIJJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::GameObject* JEFJIKCELLB()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_JEFJIKCELLB_OFFSET))(this);
	}

	::System::Void EGADALJPPEJ(::UnityEngine::GameObject* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CCMOELNHNED_EGADALJPPEJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void IECOLFPADNN(::UnityEngine::GameObject* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CCMOELNHNED_IECOLFPADNN_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::UI::Extension::UILocalizationText* BJPDFAAEMGA()
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_BJPDFAAEMGA_OFFSET))(this);
	}

	::System::Void JJGDGOAHBNN(::UnityEngine::GameObject* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CCMOELNHNED_JJGDGOAHBNN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MNKHIKMLGFN(::UnityEngine::UI::Extension::UILocalizationText* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + CCMOELNHNED_MNKHIKMLGFN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GJNBAFKGJPA(::MonoUITableScrollV2* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + CCMOELNHNED_GJNBAFKGJPA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JBADMJJPENM(::UnityEngine::GameObject* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CCMOELNHNED_JBADMJJPENM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GFDDEBHIKKF(::UnityEngine::UI::Extension::UILocalizationText* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + CCMOELNHNED_GFDDEBHIKKF_OFFSET))(this, EGEGIMGMJHN);
	}

	::LGINJIKKBJA* OIIKCOAKOFL()
	{
		return ((::LGINJIKKBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_OIIKCOAKOFL_OFFSET))(this);
	}

	::System::Void OLIPLCBHDJG(::LGINJIKKBJA* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LGINJIKKBJA*))((::PBYTE)hIl2Cpp + CCMOELNHNED_OLIPLCBHDJG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DAIELOLHDHH(::UnityEngine::RectTransform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CCMOELNHNED_DAIELOLHDHH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_KGEBDLGBGNM_OFFSET))(this);
	}

	::UnityEngine::UI::Extension::UILocalizationText* CIADMPMDAEJ()
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_CIADMPMDAEJ_OFFSET))(this);
	}

	::UnityEngine::GameObject* FIKIOEBCEJB()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_FIKIOEBCEJB_OFFSET))(this);
	}

	::MonoUITableScrollV2* CBLKPGBPNNC()
	{
		return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_CBLKPGBPNNC_OFFSET))(this);
	}

	::ZzzUiCurveGraphic* DANBKCGLKKM()
	{
		return ((::ZzzUiCurveGraphic*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_DANBKCGLKKM_OFFSET))(this);
	}

	::UnityEngine::UI::Extension::UILocalizationText* DNGFOMFOJEI()
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_DNGFOMFOJEI_OFFSET))(this);
	}

	::LGINJIKKBJA* ANONBDGILCO()
	{
		return ((::LGINJIKKBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_ANONBDGILCO_OFFSET))(this);
	}

	::System::Void PBPDLBDHHHF(::LGINJIKKBJA* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LGINJIKKBJA*))((::PBYTE)hIl2Cpp + CCMOELNHNED_PBPDLBDHHHF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MALMPFFNBAO(::UnityEngine::Transform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CCMOELNHNED_MALMPFFNBAO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JAMEPIGHHEI(::UnityEngine::UI::Extension::UILocalizationText* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + CCMOELNHNED_JAMEPIGHHEI_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::UI::Extension::UILocalizationText* KDPDIENANBJ()
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_KDPDIENANBJ_OFFSET))(this);
	}

	::System::Void CGCINFEDHGL(::UnityEngine::GameObject* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CCMOELNHNED_CGCINFEDHGL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BPNENGINGDO(::MoleMole::MonoGamepadSpaceList* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadSpaceList*))((::PBYTE)hIl2Cpp + CCMOELNHNED_BPNENGINGDO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KLJMNCMIFPM(::UnityEngine::RectTransform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CCMOELNHNED_KLJMNCMIFPM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FEMGFNKMEGM(::LGINJIKKBJA* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LGINJIKKBJA*))((::PBYTE)hIl2Cpp + CCMOELNHNED_FEMGFNKMEGM_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::UI::Extension::UILocalizationText* FHDGCFLAFFK()
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_FHDGCFLAFFK_OFFSET))(this);
	}

	::UnityEngine::GameObject* BIPIAJMGKII()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOELNHNED_BIPIAJMGKII_OFFSET))(this);
	}
};
