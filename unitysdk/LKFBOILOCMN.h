#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/GNGOLIDEKKN.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/ODKEAFLHAPC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AGAFGMPKAFA.h"
#include "unitysdk/CKMINKAIMOF.h"
#include "unitysdk/LKFBOILOCMN_JMBEGMIDNKD.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/OHCFLICGFEF.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ALDOKCCIFNB;
class ANOKJGCCGAO;
class BPHGNMNLLHF;
class CMFICBDLJKB;
class FHKFHJFLFDC;
class FJOFKBNIKNL;
class GEKNEEMAHBC;
class HJDNNLKBHBA;
class IECDFLHPLOE;
class LDMABLNCNPA;
class LHIOGJMEIEI;
class OAEFGCLEHHO;
class OIOMDBNBLLH;
namespace MoleMole { class QuickEditContext; }
namespace MoleMole { class UIActivePropsWindowContext; }
namespace MoleMole { class UIRoleSelectPageContext; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class ELKFEFPPPFL_2;

#define LKFBOILOCMN_ACCNPDKLKMH_OFFSET UNITYSDK_OFFSET(0x12584DB0)
#define LKFBOILOCMN_AEKPEAADGNE_OFFSET UNITYSDK_OFFSET(0x1258AE40)
#define LKFBOILOCMN_AIEIMFGPGEE_OFFSET UNITYSDK_OFFSET(0x1257F990)
#define LKFBOILOCMN_AJHLJNLKCMG_1_OFFSET UNITYSDK_OFFSET(0x12586FE0)
#define LKFBOILOCMN_AJHLJNLKCMG_OFFSET UNITYSDK_OFFSET(0x12586D60)
#define LKFBOILOCMN_BEGJLGFKCKC_OFFSET UNITYSDK_OFFSET(0x12584C30)
#define LKFBOILOCMN_BHPKBHCKBBA_OFFSET UNITYSDK_OFFSET(0x125876D0)
#define LKFBOILOCMN_BJKDNIHBCBE_OFFSET UNITYSDK_OFFSET(0x12585730)
#define LKFBOILOCMN_BMKIODPJENA_OFFSET UNITYSDK_OFFSET(0x12586980)
#define LKFBOILOCMN_BMMLIAEOPCP_OFFSET UNITYSDK_OFFSET(0x12581EC0)
#define LKFBOILOCMN_BOLFGCMCAHC_OFFSET UNITYSDK_OFFSET(0x1257D6D0)
#define LKFBOILOCMN_CBLFBEELFDJ_OFFSET UNITYSDK_OFFSET(0x125820C0)
#define LKFBOILOCMN_CDGFBEJMDOM_OFFSET UNITYSDK_OFFSET(0x1257C5C0)
#define LKFBOILOCMN_CHPHJAPCHAG_OFFSET UNITYSDK_OFFSET(0x1257D890)
#define LKFBOILOCMN_CLCPNMMPLNP_OFFSET UNITYSDK_OFFSET(0x1257D810)
#define LKFBOILOCMN_CMFGGMNHCPP_OFFSET UNITYSDK_OFFSET(0x12585950)
#define LKFBOILOCMN_CNOCNBIHAPG_OFFSET UNITYSDK_OFFSET(0x125836C0)
#define LKFBOILOCMN_CPDHOIIKPMK_OFFSET UNITYSDK_OFFSET(0x1257DB10)
#define LKFBOILOCMN_DCJLDAEIGKD_OFFSET UNITYSDK_OFFSET(0x12583D80)
#define LKFBOILOCMN_DDIEDADOGEJ_OFFSET UNITYSDK_OFFSET(0x1257F0C0)
#define LKFBOILOCMN_DHCGIOGGMFB_OFFSET UNITYSDK_OFFSET(0x12582B70)
#define LKFBOILOCMN_DJELLMKKHLL_OFFSET UNITYSDK_OFFSET(0x1257C730)
#define LKFBOILOCMN_DLLFAMGCNHH_OFFSET UNITYSDK_OFFSET(0x1257F830)
#define LKFBOILOCMN_DPEOJHNKBPB_OFFSET UNITYSDK_OFFSET(0x12580980)
#define LKFBOILOCMN_EEGOKJOMHEI_OFFSET UNITYSDK_OFFSET(0x12584930)
#define LKFBOILOCMN_EIFDLADCPPD_OFFSET UNITYSDK_OFFSET(0x125802B0)
#define LKFBOILOCMN_EINPEFADDJB_OFFSET UNITYSDK_OFFSET(0x1257D590)
#define LKFBOILOCMN_EOLKGIDJDKM_OFFSET UNITYSDK_OFFSET(0x12581FC0)
#define LKFBOILOCMN_FDFGLCEGPGM_OFFSET UNITYSDK_OFFSET(0x1258A180)
#define LKFBOILOCMN_FDJHNGAKPCF_OFFSET UNITYSDK_OFFSET(0x1258C6B0)
#define LKFBOILOCMN_FHEMFBPPDHD_OFFSET UNITYSDK_OFFSET(0x12580AA0)
#define LKFBOILOCMN_FJJHCLLBCKC_OFFSET UNITYSDK_OFFSET(0x1258AB60)
#define LKFBOILOCMN_FMDPIDJGAFM_OFFSET UNITYSDK_OFFSET(0x12584580)
#define LKFBOILOCMN_FNBIBOMGHFM_OFFSET UNITYSDK_OFFSET(0x12584710)
#define LKFBOILOCMN_GEPHNJOPJKL_OFFSET UNITYSDK_OFFSET(0x1258B040)
#define LKFBOILOCMN_GJDEEPMIJLB_OFFSET UNITYSDK_OFFSET(0x1257D300)
#define LKFBOILOCMN_GJNDAJHLJOB_OFFSET UNITYSDK_OFFSET(0x12581680)
#define LKFBOILOCMN_GLIFJOOADKK_OFFSET UNITYSDK_OFFSET(0x12585B10)
#define LKFBOILOCMN_GLPGNDOGOMM_OFFSET UNITYSDK_OFFSET(0x12589740)
#define LKFBOILOCMN_HFJKOBJJDOO_OFFSET UNITYSDK_OFFSET(0x12589430)
#define LKFBOILOCMN_HHLKGCEJANM_OFFSET UNITYSDK_OFFSET(0x12580A10)
#define LKFBOILOCMN_HKEOCEDPHDN_OFFSET UNITYSDK_OFFSET(0x1257D120)
#define LKFBOILOCMN_HMPDKPJKJND_OFFSET UNITYSDK_OFFSET(0x1258B5C0)
#define LKFBOILOCMN_HOEJJNABKLI_OFFSET UNITYSDK_OFFSET(0x12585010)
#define LKFBOILOCMN_IALLIOJBOPE_OFFSET UNITYSDK_OFFSET(0x1257CDE0)
#define LKFBOILOCMN_IBMNMNKLKGG_OFFSET UNITYSDK_OFFSET(0x1258B790)
#define LKFBOILOCMN_ICFGALCJAOM_OFFSET UNITYSDK_OFFSET(0x12580220)
#define LKFBOILOCMN_IDCCHELFMEM_OFFSET UNITYSDK_OFFSET(0x1258CFF0)
#define LKFBOILOCMN_IDFJHMNHJGF_OFFSET UNITYSDK_OFFSET(0x12580440)
#define LKFBOILOCMN_IHIOOMAHKLH_OFFSET UNITYSDK_OFFSET(0x12583AB0)
#define LKFBOILOCMN_ILIDPCKCAIE_OFFSET UNITYSDK_OFFSET(0x1257C610)
#define LKFBOILOCMN_IOAJAJCCKMK_OFFSET UNITYSDK_OFFSET(0x12588EB0)
#define LKFBOILOCMN_JBIIBFGBHAC_OFFSET UNITYSDK_OFFSET(0x1257FEE0)
#define LKFBOILOCMN_JCGPHGDJHJD_OFFSET UNITYSDK_OFFSET(0x12585F70)
#define LKFBOILOCMN_JCMAFPHMLCG_OFFSET UNITYSDK_OFFSET(0x12587460)
#define LKFBOILOCMN_JDCAEBEGDCG_OFFSET UNITYSDK_OFFSET(0x1257C570)
#define LKFBOILOCMN_JFLNDJFAODJ_OFFSET UNITYSDK_OFFSET(0x12581350)
#define LKFBOILOCMN_JGINBHHAILE_OFFSET UNITYSDK_OFFSET(0x12583850)
#define LKFBOILOCMN_JPHBKEGCNBH_OFFSET UNITYSDK_OFFSET(0x12587270)
#define LKFBOILOCMN_KCOBMMEBAMF_OFFSET UNITYSDK_OFFSET(0x1257E030)
#define LKFBOILOCMN_KFCNFDFGNNA_OFFSET UNITYSDK_OFFSET(0x12586B80)
#define LKFBOILOCMN_KJPINDCJEBH_OFFSET UNITYSDK_OFFSET(0x1257CFA0)
#define LKFBOILOCMN_KKPDLAIIMDG_OFFSET UNITYSDK_OFFSET(0x1258B850)
#define LKFBOILOCMN_KMACPALBEJF_OFFSET UNITYSDK_OFFSET(0x12580840)
#define LKFBOILOCMN_KNMEFCGAMOP_OFFSET UNITYSDK_OFFSET(0x12589A10)
#define LKFBOILOCMN_KNPKHMDMPIK_OFFSET UNITYSDK_OFFSET(0x12584050)
#define LKFBOILOCMN_KPBIOFBGBLB_OFFSET UNITYSDK_OFFSET(0x1258CA30)
#define LKFBOILOCMN_LCHKDIJPIDM_OFFSET UNITYSDK_OFFSET(0x125821C0)
#define LKFBOILOCMN_LDNFMMIHIAB_OFFSET UNITYSDK_OFFSET(0x12584AB0)
#define LKFBOILOCMN_LFIEJJNMNFG_OFFSET UNITYSDK_OFFSET(0x12584320)
#define LKFBOILOCMN_LOKDFDJCFMG_OFFSET UNITYSDK_OFFSET(0x1257FC30)
#define LKFBOILOCMN_MAINMNPIELH_OFFSET UNITYSDK_OFFSET(0x1258A3A0)
#define LKFBOILOCMN_MCCDDMOKCID_OFFSET UNITYSDK_OFFSET(0x12580B30)
#define LKFBOILOCMN_MGFIFNOELGC_OFFSET UNITYSDK_OFFSET(0x125828E0)
#define LKFBOILOCMN_MHGCNADOEHA_OFFSET UNITYSDK_OFFSET(0x1258A040)
#define LKFBOILOCMN_MLBBLGCODCM_OFFSET UNITYSDK_OFFSET(0x12588BB0)
#define LKFBOILOCMN_MMDKCBPGPED_OFFSET UNITYSDK_OFFSET(0x1257D450)
#define LKFBOILOCMN_MOBEMFBGDJC_OFFSET UNITYSDK_OFFSET(0x12585120)
#define LKFBOILOCMN_NABGAOEDKME_OFFSET UNITYSDK_OFFSET(0x12588FF0)
#define LKFBOILOCMN_NCHECBBKFBD_OFFSET UNITYSDK_OFFSET(0x1257C0D0)
#define LKFBOILOCMN_NMONBAFEIPI_OFFSET UNITYSDK_OFFSET(0x12583960)
#define LKFBOILOCMN_OEDDCCKBMND_OFFSET UNITYSDK_OFFSET(0x12583490)
#define LKFBOILOCMN_OELPNBEAFAP_OFFSET UNITYSDK_OFFSET(0x1257EB80)
#define LKFBOILOCMN_OFPGHCPOJNH_OFFSET UNITYSDK_OFFSET(0x12589C30)
#define LKFBOILOCMN_OMCMOKCFNFB_OFFSET UNITYSDK_OFFSET(0x12587CB0)
#define LKFBOILOCMN_PDGKLBKOLPH_OFFSET UNITYSDK_OFFSET(0x1257C170)
#define LKFBOILOCMN_PEJLICGACLC_OFFSET UNITYSDK_OFFSET(0x1258C880)
#define LKFBOILOCMN_PLDKEJPOBHD_OFFSET UNITYSDK_OFFSET(0x12581D90)
#define LKFBOILOCMN_PMMDEGNENLD_OFFSET UNITYSDK_OFFSET(0x1257F400)
#define LKFBOILOCMN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1257C030)

inline static constexpr unsigned int LKFBOILOCMN_TypeDefinitionIndex = 82627;

class LKFBOILOCMN : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::FJOFKBNIKNL*>** StaticGet_OONGGBOGGHM()
	{
		return (::System::Collections::Generic::List_1<::FJOFKBNIKNL*>**)Il2CppClass::FromTypeDefinitionIndex(LKFBOILOCMN_TypeDefinitionIndex)->GetStaticField(0x416B0);
	}
	static ::System::Collections::Generic::List_1<::Foundation::ViewObject::GroupMemberIdentifier>** StaticGet_KECLKAJMKPI()
	{
		return (::System::Collections::Generic::List_1<::Foundation::ViewObject::GroupMemberIdentifier>**)Il2CppClass::FromTypeDefinitionIndex(LKFBOILOCMN_TypeDefinitionIndex)->GetStaticField(0x416B8);
	}
	static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>** StaticGet_EMCGBLOKBOE()
	{
		return (::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(LKFBOILOCMN_TypeDefinitionIndex)->GetStaticField(0x416C0);
	}
	static ::System::Collections::Generic::List_1<::IECDFLHPLOE*>** StaticGet_FDGPBJMPJAK()
	{
		return (::System::Collections::Generic::List_1<::IECDFLHPLOE*>**)Il2CppClass::FromTypeDefinitionIndex(LKFBOILOCMN_TypeDefinitionIndex)->GetStaticField(0x416C8);
	}
	static ::System::Int32* StaticGet_HLPPNHCJNAO()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LKFBOILOCMN_TypeDefinitionIndex)->GetStaticField(0xEF70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKFBOILOCMN__CCTOR_OFFSET))();
	}

	static ::System::Boolean NCHECBBKFBD(::CMFICBDLJKB*& APBNGEAOJIC, ::GNGOLIDEKKN& CFPAPHGPDBK, ::System::Int32& IEJAIGNKBGB)
	{
		return ((::System::Boolean(*)(::CMFICBDLJKB*&, ::GNGOLIDEKKN&, ::System::Int32&))((::PBYTE)hIl2Cpp + LKFBOILOCMN_NCHECBBKFBD_OFFSET))(APBNGEAOJIC, CFPAPHGPDBK, IEJAIGNKBGB);
	}

	static ::System::Boolean PDGKLBKOLPH(::LHIOGJMEIEI* LDENMLEHKOC)
	{
		return ((::System::Boolean(*)(::LHIOGJMEIEI*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_PDGKLBKOLPH_OFFSET))(LDENMLEHKOC);
	}

	static ::MoleMole::UIRoleSelectPageContext* DJELLMKKHLL(::System::Int32 FOLKIBNJNHM, ::Il2CppArray<::BPHGNMNLLHF*>* DGFEMBEDHAC)
	{
		return ((::MoleMole::UIRoleSelectPageContext*(*)(::System::Int32, ::Il2CppArray<::BPHGNMNLLHF*>*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_DJELLMKKHLL_OFFSET))(FOLKIBNJNHM, DGFEMBEDHAC);
	}

	static ::ANOKJGCCGAO* IALLIOJBOPE(::System::Int32 NJNOHDNDNAF, ::System::Int32 MBHIIOBBDGD, ::System::Int32& AOCOIDIMLIH)
	{
		return ((::ANOKJGCCGAO*(*)(::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + LKFBOILOCMN_IALLIOJBOPE_OFFSET))(NJNOHDNDNAF, MBHIIOBBDGD, AOCOIDIMLIH);
	}

	static ::System::Boolean KJPINDCJEBH(::OIOMDBNBLLH* FCNIHGHAEEF, ::System::Action_1<::System::Boolean>* HNHFLCJLMMO)
	{
		return ((::System::Boolean(*)(::OIOMDBNBLLH*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_KJPINDCJEBH_OFFSET))(FCNIHGHAEEF, HNHFLCJLMMO);
	}

	static ::System::Void GJDEEPMIJLB(::CMFICBDLJKB*& APBNGEAOJIC, ::System::Single HNBKEFKFLJG)
	{
		return ((::System::Void(*)(::CMFICBDLJKB*&, ::System::Single))((::PBYTE)hIl2Cpp + LKFBOILOCMN_GJDEEPMIJLB_OFFSET))(APBNGEAOJIC, HNBKEFKFLJG);
	}

	static ::System::Void BOLFGCMCAHC(::CMFICBDLJKB*& APBNGEAOJIC, ::System::Single HNBKEFKFLJG)
	{
		return ((::System::Void(*)(::CMFICBDLJKB*&, ::System::Single))((::PBYTE)hIl2Cpp + LKFBOILOCMN_BOLFGCMCAHC_OFFSET))(APBNGEAOJIC, HNBKEFKFLJG);
	}

	static ::System::Boolean CHPHJAPCHAG(::System::Action_1<::System::Action*>* EPNFLCJMHKM, ::System::Action* NLNILOMOMFD, ::System::Action* JEKACJFJLPO, ::System::Boolean EDOBEKLNECK)
	{
		return ((::System::Boolean(*)(::System::Action_1<::System::Action*>*, ::System::Action*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + LKFBOILOCMN_CHPHJAPCHAG_OFFSET))(EPNFLCJMHKM, NLNILOMOMFD, JEKACJFJLPO, EDOBEKLNECK);
	}

	static ::System::Void KCOBMMEBAMF(::System::Action_1<::System::Action*>* EPNFLCJMHKM, ::System::Int32 BKJGCAOPGMD, ::System::Action* NLNILOMOMFD, ::System::Action* JEKACJFJLPO)
	{
		return ((::System::Void(*)(::System::Action_1<::System::Action*>*, ::System::Int32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_KCOBMMEBAMF_OFFSET))(EPNFLCJMHKM, BKJGCAOPGMD, NLNILOMOMFD, JEKACJFJLPO);
	}

	static ::System::Boolean DDIEDADOGEJ()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LKFBOILOCMN_DDIEDADOGEJ_OFFSET))();
	}

	static ::System::Boolean HKEOCEDPHDN(::System::Int32 PKMFBJMJCOO)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + LKFBOILOCMN_HKEOCEDPHDN_OFFSET))(PKMFBJMJCOO);
	}

	static ::System::Collections::Generic::IEnumerable_1<::MoleMole::EntityHandle>* PMMDEGNENLD(::System::Int32& ILOHMDELDKK)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::EntityHandle>*(*)(::System::Int32&))((::PBYTE)hIl2Cpp + LKFBOILOCMN_PMMDEGNENLD_OFFSET))(ILOHMDELDKK);
	}

	static ::MoleMole::EntityHandle AIEIMFGPGEE(::MoleMole::EntityHandle HPADNAEINPK, ::System::Int32 DBGAPPIIFOH)
	{
		return ((::MoleMole::EntityHandle(*)(::MoleMole::EntityHandle, ::System::Int32))((::PBYTE)hIl2Cpp + LKFBOILOCMN_AIEIMFGPGEE_OFFSET))(HPADNAEINPK, DBGAPPIIFOH);
	}

	static ::System::Void JBIIBFGBHAC(::System::Int32 BKJGCAOPGMD, ::System::Action_1<::System::Action*>* EPNFLCJMHKM)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Action_1<::System::Action*>*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_JBIIBFGBHAC_OFFSET))(BKJGCAOPGMD, EPNFLCJMHKM);
	}

	static ::System::Boolean ICFGALCJAOM(::MoleMole::Battle::Entity* BDHOILPIGKB)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_ICFGALCJAOM_OFFSET))(BDHOILPIGKB);
	}

	static ::System::Void EIFDLADCPPD(::System::Collections::Generic::IEnumerable_1<::CMFICBDLJKB*>* EJLCMLGODHL)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::CMFICBDLJKB*>*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_EIFDLADCPPD_OFFSET))(EJLCMLGODHL);
	}

	static ::System::Void KMACPALBEJF(::ELKFEFPPPFL_2<::System::UInt32, ::System::Int32>* JCBHIPPPCFG, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* PGHDHBINDDC, ::System::Int32 JICCEJHJKIB)
	{
		return ((::System::Void(*)(::ELKFEFPPPFL_2<::System::UInt32, ::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + LKFBOILOCMN_KMACPALBEJF_OFFSET))(JCBHIPPPCFG, PGHDHBINDDC, JICCEJHJKIB);
	}

	static ::System::Void HHLKGCEJANM(::ELKFEFPPPFL_2<::System::UInt32, ::System::Int32>* JCBHIPPPCFG, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* PGHDHBINDDC)
	{
		return ((::System::Void(*)(::ELKFEFPPPFL_2<::System::UInt32, ::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_HHLKGCEJANM_OFFSET))(JCBHIPPPCFG, PGHDHBINDDC);
	}

	static ::CKMINKAIMOF MCCDDMOKCID(::System::Int32 OEDINFCNEKC, ::UnityEngine::Vector3 EJGCDJLAGFI, ::Foundation::ViewObject::GroupMemberIdentifier HODAIDNDKHD, ::System::Int32 HIPAILNCBDN)
	{
		return ((::CKMINKAIMOF(*)(::System::Int32, ::UnityEngine::Vector3, ::Foundation::ViewObject::GroupMemberIdentifier, ::System::Int32))((::PBYTE)hIl2Cpp + LKFBOILOCMN_MCCDDMOKCID_OFFSET))(OEDINFCNEKC, EJGCDJLAGFI, HODAIDNDKHD, HIPAILNCBDN);
	}

	static ::System::Void DLLFAMGCNHH()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKFBOILOCMN_DLLFAMGCNHH_OFFSET))();
	}

	static ::System::Void PLDKEJPOBHD(::CMFICBDLJKB*& APBNGEAOJIC, ::System::Int32 EHNKHHJEHPJ)
	{
		return ((::System::Void(*)(::CMFICBDLJKB*&, ::System::Int32))((::PBYTE)hIl2Cpp + LKFBOILOCMN_PLDKEJPOBHD_OFFSET))(APBNGEAOJIC, EHNKHHJEHPJ);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*>* LCHKDIJPIDM(::System::Collections::Generic::List_1<::BPHGNMNLLHF*>* MAHNCNOAPPD, ::GEKNEEMAHBC* PGJBBDPMOOJ)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*>*(*)(::System::Collections::Generic::List_1<::BPHGNMNLLHF*>*, ::GEKNEEMAHBC*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_LCHKDIJPIDM_OFFSET))(MAHNCNOAPPD, PGJBBDPMOOJ);
	}

	static ::System::Void MMDKCBPGPED(::CMFICBDLJKB*& APBNGEAOJIC, ::System::Single HNBKEFKFLJG)
	{
		return ((::System::Void(*)(::CMFICBDLJKB*&, ::System::Single))((::PBYTE)hIl2Cpp + LKFBOILOCMN_MMDKCBPGPED_OFFSET))(APBNGEAOJIC, HNBKEFKFLJG);
	}

	static ::System::Single MGFIFNOELGC(::System::Int32 LEHABHCOMGH)
	{
		return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + LKFBOILOCMN_MGFIFNOELGC_OFFSET))(LEHABHCOMGH);
	}

	static ::System::Void DHCGIOGGMFB(::System::Boolean PNDEGDPKFIK)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + LKFBOILOCMN_DHCGIOGGMFB_OFFSET))(PNDEGDPKFIK);
	}

	static ::System::Boolean OEDDCCKBMND(::System::Int32 FKAOLLMPLKI)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + LKFBOILOCMN_OEDDCCKBMND_OFFSET))(FKAOLLMPLKI);
	}

	static ::MoleMole::EntityHandle JGINBHHAILE(::MoleMole::EntityHandle HPADNAEINPK, ::System::Int32 DBGAPPIIFOH)
	{
		return ((::MoleMole::EntityHandle(*)(::MoleMole::EntityHandle, ::System::Int32))((::PBYTE)hIl2Cpp + LKFBOILOCMN_JGINBHHAILE_OFFSET))(HPADNAEINPK, DBGAPPIIFOH);
	}

	static ::System::Void GJNDAJHLJOB(::System::Int32 OEDINFCNEKC, ::System::Int32 HIPAILNCBDN, ::System::Collections::Generic::List_1<::System::Int32>* NPMLDOOBGJK)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_GJNDAJHLJOB_OFFSET))(OEDINFCNEKC, HIPAILNCBDN, NPMLDOOBGJK);
	}

	static ::System::Boolean JDCAEBEGDCG(::LHIOGJMEIEI* LDENMLEHKOC)
	{
		return ((::System::Boolean(*)(::LHIOGJMEIEI*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_JDCAEBEGDCG_OFFSET))(LDENMLEHKOC);
	}

	static ::System::Void NMONBAFEIPI(::ELKFEFPPPFL_2<::System::UInt32, ::System::Int32>* JCBHIPPPCFG, ::HJDNNLKBHBA* ABMGKBFMFFD)
	{
		return ((::System::Void(*)(::ELKFEFPPPFL_2<::System::UInt32, ::System::Int32>*, ::HJDNNLKBHBA*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_NMONBAFEIPI_OFFSET))(JCBHIPPPCFG, ABMGKBFMFFD);
	}

	static ::System::Boolean CPDHOIIKPMK()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LKFBOILOCMN_CPDHOIIKPMK_OFFSET))();
	}

	static ::LDMABLNCNPA* LFIEJJNMNFG()
	{
		return ((::LDMABLNCNPA*(*)())((::PBYTE)hIl2Cpp + LKFBOILOCMN_LFIEJJNMNFG_OFFSET))();
	}

	static ::System::Void FMDPIDJGAFM()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKFBOILOCMN_FMDPIDJGAFM_OFFSET))();
	}

	static ::System::Void BMMLIAEOPCP(::CMFICBDLJKB*& APBNGEAOJIC, ::System::Int32 EHNKHHJEHPJ)
	{
		return ((::System::Void(*)(::CMFICBDLJKB*&, ::System::Int32))((::PBYTE)hIl2Cpp + LKFBOILOCMN_BMMLIAEOPCP_OFFSET))(APBNGEAOJIC, EHNKHHJEHPJ);
	}

	static ::System::Collections::Generic::IEnumerable_1<::CMFICBDLJKB*>* FNBIBOMGHFM(::System::Int32 ILOHMDELDKK)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::CMFICBDLJKB*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + LKFBOILOCMN_FNBIBOMGHFM_OFFSET))(ILOHMDELDKK);
	}

	static ::System::Boolean CDGFBEJMDOM(::LHIOGJMEIEI* LDENMLEHKOC)
	{
		return ((::System::Boolean(*)(::LHIOGJMEIEI*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_CDGFBEJMDOM_OFFSET))(LDENMLEHKOC);
	}

	static ::System::Boolean ILIDPCKCAIE(::CMFICBDLJKB* APBNGEAOJIC)
	{
		return ((::System::Boolean(*)(::CMFICBDLJKB*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_ILIDPCKCAIE_OFFSET))(APBNGEAOJIC);
	}

	static ::CMFICBDLJKB* ACCNPDKLKMH(::MoleMole::EntityHandle HPADNAEINPK)
	{
		return ((::CMFICBDLJKB*(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + LKFBOILOCMN_ACCNPDKLKMH_OFFSET))(HPADNAEINPK);
	}

	static ::CMFICBDLJKB* MOBEMFBGDJC(::MoleMole::EntityHandle& HPADNAEINPK)
	{
		return ((::CMFICBDLJKB*(*)(::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + LKFBOILOCMN_MOBEMFBGDJC_OFFSET))(HPADNAEINPK);
	}

	static ::System::Boolean BEGJLGFKCKC(::CMFICBDLJKB* APBNGEAOJIC)
	{
		return ((::System::Boolean(*)(::CMFICBDLJKB*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_BEGJLGFKCKC_OFFSET))(APBNGEAOJIC);
	}

	static ::System::Void FHEMFBPPDHD(::ELKFEFPPPFL_2<::System::UInt32, ::System::Int32>* JCBHIPPPCFG, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* PGHDHBINDDC)
	{
		return ((::System::Void(*)(::ELKFEFPPPFL_2<::System::UInt32, ::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_FHEMFBPPDHD_OFFSET))(JCBHIPPPCFG, PGHDHBINDDC);
	}

	static ::System::Boolean BJKDNIHBCBE(::System::Int32 FKAOLLMPLKI, ::System::Action* IKFEFIMLPOD)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_BJKDNIHBCBE_OFFSET))(FKAOLLMPLKI, IKFEFIMLPOD);
	}

	static ::System::Void GLIFJOOADKK(::OAEFGCLEHHO* GJBOGGLJBJN)
	{
		return ((::System::Void(*)(::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_GLIFJOOADKK_OFFSET))(GJBOGGLJBJN);
	}

	static ::System::Void LOKDFDJCFMG(::HJDNNLKBHBA*& POBADKEDFOE, ::MoleMole::Config::BaseProperty& BGJOPBCCMOC, ::System::Double& EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::HJDNNLKBHBA*&, ::MoleMole::Config::BaseProperty&, ::System::Double&))((::PBYTE)hIl2Cpp + LKFBOILOCMN_LOKDFDJCFMG_OFFSET))(POBADKEDFOE, BGJOPBCCMOC, EGEGIMGMJHN);
	}

	static ::System::Boolean JCGPHGDJHJD(::FHKFHJFLFDC* INKJNABEJKC, ::LKFBOILOCMN_JMBEGMIDNKD& param_1)
	{
		return ((::System::Boolean(*)(::FHKFHJFLFDC*, ::LKFBOILOCMN_JMBEGMIDNKD&))((::PBYTE)hIl2Cpp + LKFBOILOCMN_JCGPHGDJHJD_OFFSET))(INKJNABEJKC, param_1);
	}

	static ::System::Boolean CMFGGMNHCPP(::AGAFGMPKAFA HNOPAJLDCFB)
	{
		return ((::System::Boolean(*)(::AGAFGMPKAFA))((::PBYTE)hIl2Cpp + LKFBOILOCMN_CMFGGMNHCPP_OFFSET))(HNOPAJLDCFB);
	}

	static ::System::UInt32 HOEJJNABKLI(::MoleMole::EntityHandle& BDHOILPIGKB)
	{
		return ((::System::UInt32(*)(::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + LKFBOILOCMN_HOEJJNABKLI_OFFSET))(BDHOILPIGKB);
	}

	static ::System::Void DCJLDAEIGKD(::ELKFEFPPPFL_2<::System::UInt32, ::System::Int32>* JCBHIPPPCFG, ::HJDNNLKBHBA* ABMGKBFMFFD)
	{
		return ((::System::Void(*)(::ELKFEFPPPFL_2<::System::UInt32, ::System::Int32>*, ::HJDNNLKBHBA*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_DCJLDAEIGKD_OFFSET))(JCBHIPPPCFG, ABMGKBFMFFD);
	}

	static ::System::Void BMKIODPJENA(::AGAFGMPKAFA HNOPAJLDCFB, ::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::AGAFGMPKAFA, ::System::Action*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_BMKIODPJENA_OFFSET))(HNOPAJLDCFB, EJGDHCIBCJH);
	}

	static ::System::Boolean KFCNFDFGNNA(::System::Int32 MNDIBLLFAJI)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + LKFBOILOCMN_KFCNFDFGNNA_OFFSET))(MNDIBLLFAJI);
	}

	static ::System::Boolean AJHLJNLKCMG(::AGAFGMPKAFA HNOPAJLDCFB, ::System::Action* EDNJGMKPFHG, ::System::Action* IFKOKLCPMNF)
	{
		return ((::System::Boolean(*)(::AGAFGMPKAFA, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_AJHLJNLKCMG_OFFSET))(HNOPAJLDCFB, EDNJGMKPFHG, IFKOKLCPMNF);
	}

	static ::System::Boolean AJHLJNLKCMG_1(::System::Int32 FKAOLLMPLKI, ::System::Action* EDNJGMKPFHG, ::System::Action* IFKOKLCPMNF)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_AJHLJNLKCMG_1_OFFSET))(FKAOLLMPLKI, EDNJGMKPFHG, IFKOKLCPMNF);
	}

	static ::System::String* JPHBKEGCNBH(::System::Int32 MNDIBLLFAJI)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + LKFBOILOCMN_JPHBKEGCNBH_OFFSET))(MNDIBLLFAJI);
	}

	static ::System::Void JCMAFPHMLCG(::OAEFGCLEHHO* GJBOGGLJBJN)
	{
		return ((::System::Void(*)(::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_JCMAFPHMLCG_OFFSET))(GJBOGGLJBJN);
	}

	static ::System::Void IDFJHMNHJGF()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKFBOILOCMN_IDFJHMNHJGF_OFFSET))();
	}

	static ::System::Void BHPKBHCKBBA(::ALDOKCCIFNB* LJBPECKCCEA, ::System::Action_1<::System::Action*>* EPNFLCJMHKM, ::System::Action* JEKACJFJLPO)
	{
		return ((::System::Void(*)(::ALDOKCCIFNB*, ::System::Action_1<::System::Action*>*, ::System::Action*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_BHPKBHCKBBA_OFFSET))(LJBPECKCCEA, EPNFLCJMHKM, JEKACJFJLPO);
	}

	static ::System::Boolean MLBBLGCODCM()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LKFBOILOCMN_MLBBLGCODCM_OFFSET))();
	}

	static ::System::String* IOAJAJCCKMK(::System::Int32 MODAECOCCBC)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + LKFBOILOCMN_IOAJAJCCKMK_OFFSET))(MODAECOCCBC);
	}

	static ::System::Boolean CNOCNBIHAPG(::System::Int32 FKAOLLMPLKI)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + LKFBOILOCMN_CNOCNBIHAPG_OFFSET))(FKAOLLMPLKI);
	}

	static ::System::Boolean NABGAOEDKME(::System::Collections::Generic::List_1<::System::UInt32>* MOGGEOEAKJP, ::System::Collections::Generic::List_1<::System::Int32>* DDELCLKIFPM)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_NABGAOEDKME_OFFSET))(MOGGEOEAKJP, DDELCLKIFPM);
	}

	static ::System::Void OELPNBEAFAP(::ODKEAFLHAPC MHPNHKJPIEH)
	{
		return ((::System::Void(*)(::ODKEAFLHAPC))((::PBYTE)hIl2Cpp + LKFBOILOCMN_OELPNBEAFAP_OFFSET))(MHPNHKJPIEH);
	}

	static ::MoleMole::UIActivePropsWindowContext* GLPGNDOGOMM(::MoleMole::UIActivePropsWindowContext* AAOCANGHBDG)
	{
		return ((::MoleMole::UIActivePropsWindowContext*(*)(::MoleMole::UIActivePropsWindowContext*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_GLPGNDOGOMM_OFFSET))(AAOCANGHBDG);
	}

	static ::System::Collections::Generic::IEnumerable_1<::CMFICBDLJKB*>* KNMEFCGAMOP(::System::Int32 HFKPDCHKNFD)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::CMFICBDLJKB*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + LKFBOILOCMN_KNMEFCGAMOP_OFFSET))(HFKPDCHKNFD);
	}

	static ::System::Boolean JFLNDJFAODJ(::System::Int32 JCJIOEOKCIJ, ::System::Int32 BDCIOBKMJMA, ::Foundation::ViewObject::GroupMemberIdentifier& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::Foundation::ViewObject::GroupMemberIdentifier&))((::PBYTE)hIl2Cpp + LKFBOILOCMN_JFLNDJFAODJ_OFFSET))(JCJIOEOKCIJ, BDCIOBKMJMA, IGAAKDOIPNN);
	}

	static ::System::Collections::Generic::IEnumerable_1<::MoleMole::EntityHandle>* OFPGHCPOJNH(::System::Int32& HFKPDCHKNFD)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::EntityHandle>*(*)(::System::Int32&))((::PBYTE)hIl2Cpp + LKFBOILOCMN_OFPGHCPOJNH_OFFSET))(HFKPDCHKNFD);
	}

	static ::System::Boolean MHGCNADOEHA(::CMFICBDLJKB*& APBNGEAOJIC, ::GNGOLIDEKKN& CFPAPHGPDBK, ::System::Int32& IEJAIGNKBGB)
	{
		return ((::System::Boolean(*)(::CMFICBDLJKB*&, ::GNGOLIDEKKN&, ::System::Int32&))((::PBYTE)hIl2Cpp + LKFBOILOCMN_MHGCNADOEHA_OFFSET))(APBNGEAOJIC, CFPAPHGPDBK, IEJAIGNKBGB);
	}

	static ::System::Boolean FDFGLCEGPGM(::System::Int32 LEHABHCOMGH)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + LKFBOILOCMN_FDFGLCEGPGM_OFFSET))(LEHABHCOMGH);
	}

	static ::System::Void MAINMNPIELH(::System::Boolean HJNEKMOJAEI, ::OHCFLICGFEF IAHPJLAHLBG, ::System::Action* KMHAPMLAIDN, ::System::Boolean NPEGCHKPKJK)
	{
		return ((::System::Void(*)(::System::Boolean, ::OHCFLICGFEF, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + LKFBOILOCMN_MAINMNPIELH_OFFSET))(HJNEKMOJAEI, IAHPJLAHLBG, KMHAPMLAIDN, NPEGCHKPKJK);
	}

	static ::System::Boolean LDNFMMIHIAB(::CMFICBDLJKB* APBNGEAOJIC)
	{
		return ((::System::Boolean(*)(::CMFICBDLJKB*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_LDNFMMIHIAB_OFFSET))(APBNGEAOJIC);
	}

	static ::CMFICBDLJKB* AEKPEAADGNE(::LHIOGJMEIEI*& LDENMLEHKOC, ::System::Int32& EHNKHHJEHPJ)
	{
		return ((::CMFICBDLJKB*(*)(::LHIOGJMEIEI*&, ::System::Int32&))((::PBYTE)hIl2Cpp + LKFBOILOCMN_AEKPEAADGNE_OFFSET))(LDENMLEHKOC, EHNKHHJEHPJ);
	}

	static ::System::Void GEPHNJOPJKL(::OAEFGCLEHHO* GJBOGGLJBJN)
	{
		return ((::System::Void(*)(::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_GEPHNJOPJKL_OFFSET))(GJBOGGLJBJN);
	}

	static ::System::Boolean HMPDKPJKJND(::System::Int32 HPEMFJDOAKL)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + LKFBOILOCMN_HMPDKPJKJND_OFFSET))(HPEMFJDOAKL);
	}

	static ::System::Boolean HFJKOBJJDOO()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LKFBOILOCMN_HFJKOBJJDOO_OFFSET))();
	}

	static ::System::Void IBMNMNKLKGG(::MoleMole::QuickEditContext* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::MoleMole::QuickEditContext*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_IBMNMNKLKGG_OFFSET))(AAOCANGHBDG);
	}

	static ::System::Void KKPDLAIIMDG()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKFBOILOCMN_KKPDLAIIMDG_OFFSET))();
	}

	static ::System::Void IHIOOMAHKLH(::ELKFEFPPPFL_2<::System::UInt32, ::System::Int32>* JCBHIPPPCFG, ::HJDNNLKBHBA* ABMGKBFMFFD)
	{
		return ((::System::Void(*)(::ELKFEFPPPFL_2<::System::UInt32, ::System::Int32>*, ::HJDNNLKBHBA*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_IHIOOMAHKLH_OFFSET))(JCBHIPPPCFG, ABMGKBFMFFD);
	}

	static ::System::Void FDJHNGAKPCF(::System::Int32& ILOHMDELDKK, ::System::Int32& HFKPDCHKNFD)
	{
		return ((::System::Void(*)(::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + LKFBOILOCMN_FDJHNGAKPCF_OFFSET))(ILOHMDELDKK, HFKPDCHKNFD);
	}

	static ::System::String* PEJLICGACLC(::System::Int32 MODAECOCCBC)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + LKFBOILOCMN_PEJLICGACLC_OFFSET))(MODAECOCCBC);
	}

	static ::System::Boolean EEGOKJOMHEI(::CMFICBDLJKB* APBNGEAOJIC)
	{
		return ((::System::Boolean(*)(::CMFICBDLJKB*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_EEGOKJOMHEI_OFFSET))(APBNGEAOJIC);
	}

	static ::System::Void EINPEFADDJB(::CMFICBDLJKB*& APBNGEAOJIC, ::System::Single HNBKEFKFLJG)
	{
		return ((::System::Void(*)(::CMFICBDLJKB*&, ::System::Single))((::PBYTE)hIl2Cpp + LKFBOILOCMN_EINPEFADDJB_OFFSET))(APBNGEAOJIC, HNBKEFKFLJG);
	}

	static ::System::Void EOLKGIDJDKM(::CMFICBDLJKB*& APBNGEAOJIC, ::System::Int32 EHNKHHJEHPJ)
	{
		return ((::System::Void(*)(::CMFICBDLJKB*&, ::System::Int32))((::PBYTE)hIl2Cpp + LKFBOILOCMN_EOLKGIDJDKM_OFFSET))(APBNGEAOJIC, EHNKHHJEHPJ);
	}

	static ::System::Void CLCPNMMPLNP(::CMFICBDLJKB*& APBNGEAOJIC, ::GNGOLIDEKKN& CFPAPHGPDBK, ::System::Int32& IEJAIGNKBGB)
	{
		return ((::System::Void(*)(::CMFICBDLJKB*&, ::GNGOLIDEKKN&, ::System::Int32&))((::PBYTE)hIl2Cpp + LKFBOILOCMN_CLCPNMMPLNP_OFFSET))(APBNGEAOJIC, CFPAPHGPDBK, IEJAIGNKBGB);
	}

	static ::System::Void OMCMOKCFNFB(::ALDOKCCIFNB* LJBPECKCCEA, ::System::Action_1<::System::Action*>* EPNFLCJMHKM, ::System::Action* JEKACJFJLPO)
	{
		return ((::System::Void(*)(::ALDOKCCIFNB*, ::System::Action_1<::System::Action*>*, ::System::Action*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_OMCMOKCFNFB_OFFSET))(LJBPECKCCEA, EPNFLCJMHKM, JEKACJFJLPO);
	}

	static ::System::Void CBLFBEELFDJ(::CMFICBDLJKB*& APBNGEAOJIC, ::System::Int32 EHNKHHJEHPJ)
	{
		return ((::System::Void(*)(::CMFICBDLJKB*&, ::System::Int32))((::PBYTE)hIl2Cpp + LKFBOILOCMN_CBLFBEELFDJ_OFFSET))(APBNGEAOJIC, EHNKHHJEHPJ);
	}

	static ::System::Boolean KPBIOFBGBLB(::ALDOKCCIFNB* HPPAGLFMPBN)
	{
		return ((::System::Boolean(*)(::ALDOKCCIFNB*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_KPBIOFBGBLB_OFFSET))(HPPAGLFMPBN);
	}

	static ::System::Void KNPKHMDMPIK(::ELKFEFPPPFL_2<::System::UInt32, ::System::Int32>* JCBHIPPPCFG, ::HJDNNLKBHBA* ABMGKBFMFFD)
	{
		return ((::System::Void(*)(::ELKFEFPPPFL_2<::System::UInt32, ::System::Int32>*, ::HJDNNLKBHBA*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_KNPKHMDMPIK_OFFSET))(JCBHIPPPCFG, ABMGKBFMFFD);
	}

	static ::System::Void FJJHCLLBCKC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKFBOILOCMN_FJJHCLLBCKC_OFFSET))();
	}

	static ::System::Void DPEOJHNKBPB(::ELKFEFPPPFL_2<::System::UInt32, ::System::Int32>* JCBHIPPPCFG, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* PGHDHBINDDC)
	{
		return ((::System::Void(*)(::ELKFEFPPPFL_2<::System::UInt32, ::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_DPEOJHNKBPB_OFFSET))(JCBHIPPPCFG, PGHDHBINDDC);
	}

	static ::CMFICBDLJKB* IDCCHELFMEM(::MoleMole::EntityHandle HPADNAEINPK)
	{
		return ((::CMFICBDLJKB*(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + LKFBOILOCMN_IDCCHELFMEM_OFFSET))(HPADNAEINPK);
	}
};
