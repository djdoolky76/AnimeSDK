#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/NodeGraph/VariantUnion.h"

class AMLFPKAKENC;
class AOEHPGLBLIH;
class BPHGNMNLLHF;
class GGFCDBIEFNK;
class IBENDELLLAO;
class JNNGKJFNLOM;
class KOIOODIJLIG;
class NMAJANNDDJA;
class PEFHNKMDMOI;
namespace System { class EventArgs; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FFILFOAOIMP_AAHPAFNOHHP_OFFSET UNITYSDK_OFFSET(0x169D2340)
#define FFILFOAOIMP_ABGHEDODEFM_OFFSET UNITYSDK_OFFSET(0x169D2930)
#define FFILFOAOIMP_AMODFACBPKA_OFFSET UNITYSDK_OFFSET(0x169D0C50)
#define FFILFOAOIMP_BDANHCEHLCA_OFFSET UNITYSDK_OFFSET(0x169D5440)
#define FFILFOAOIMP_BDBDHACIKOA_OFFSET UNITYSDK_OFFSET(0x169D0F00)
#define FFILFOAOIMP_BINIMEEFOFB_OFFSET UNITYSDK_OFFSET(0x169D2F80)
#define FFILFOAOIMP_BKACALELCKI_OFFSET UNITYSDK_OFFSET(0x169D2E20)
#define FFILFOAOIMP_BKHEMBKGLNL_OFFSET UNITYSDK_OFFSET(0x169D29B0)
#define FFILFOAOIMP_CJHIPHLOBAL_OFFSET UNITYSDK_OFFSET(0x169D04B0)
#define FFILFOAOIMP_CJKHKCELEGH_OFFSET UNITYSDK_OFFSET(0x169CEBA0)
#define FFILFOAOIMP_DACGKGIAMEI_OFFSET UNITYSDK_OFFSET(0x169D0820)
#define FFILFOAOIMP_DFIKHNOFCGM_OFFSET UNITYSDK_OFFSET(0x169D3D40)
#define FFILFOAOIMP_DHJKEEFALHG_OFFSET UNITYSDK_OFFSET(0x169D05E0)
#define FFILFOAOIMP_DICCDHEPHCC_1_OFFSET UNITYSDK_OFFSET(0x169CFFB0)
#define FFILFOAOIMP_DICCDHEPHCC_2_OFFSET UNITYSDK_OFFSET(0x1697F5D0)
#define FFILFOAOIMP_DICCDHEPHCC_OFFSET UNITYSDK_OFFSET(0x169CFBA0)
#define FFILFOAOIMP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x169CEE80)
#define FFILFOAOIMP_DMGBAMBBGJM_1_OFFSET UNITYSDK_OFFSET(0x169D4860)
#define FFILFOAOIMP_DMGBAMBBGJM_OFFSET UNITYSDK_OFFSET(0x169D3C20)
#define FFILFOAOIMP_DOMLOJPHOPO_OFFSET UNITYSDK_OFFSET(0x169D39F0)
#define FFILFOAOIMP_ENFGENGCCNN_OFFSET UNITYSDK_OFFSET(0x169D17B0)
#define FFILFOAOIMP_FDOEKPLJFEE_OFFSET UNITYSDK_OFFSET(0x169CEB50)
#define FFILFOAOIMP_FFOBGMGKIBN_OFFSET UNITYSDK_OFFSET(0x169D1B60)
#define FFILFOAOIMP_FGNGFEMMJEO_1_OFFSET UNITYSDK_OFFSET(0x169D51A0)
#define FFILFOAOIMP_FGNGFEMMJEO_OFFSET UNITYSDK_OFFSET(0x169D2CF0)
#define FFILFOAOIMP_FHOPFPLIBHN_OFFSET UNITYSDK_OFFSET(0x169D5550)
#define FFILFOAOIMP_FKEFOFICBOF_OFFSET UNITYSDK_OFFSET(0x169D37D0)
#define FFILFOAOIMP_GCJECKPLICP_OFFSET UNITYSDK_OFFSET(0x169D31D0)
#define FFILFOAOIMP_GCPGCIMGLLK_OFFSET UNITYSDK_OFFSET(0x169D3DE0)
#define FFILFOAOIMP_GEDDANJBMAO_OFFSET UNITYSDK_OFFSET(0x169D4960)
#define FFILFOAOIMP_GLKMNNBIDEC_OFFSET UNITYSDK_OFFSET(0x169CECB0)
#define FFILFOAOIMP_GOOECNMMOJL_OFFSET UNITYSDK_OFFSET(0x169D5310)
#define FFILFOAOIMP_HFGAIGAKNNG_OFFSET UNITYSDK_OFFSET(0x169D3040)
#define FFILFOAOIMP_HIEIOKKIPFO_OFFSET UNITYSDK_OFFSET(0x169D49B0)
#define FFILFOAOIMP_HKBCAEALAEG_OFFSET UNITYSDK_OFFSET(0x169D1C70)
#define FFILFOAOIMP_HPJIDBKMNHN_1_OFFSET UNITYSDK_OFFSET(0x169D27C0)
#define FFILFOAOIMP_HPJIDBKMNHN_OFFSET UNITYSDK_OFFSET(0x169D3890)
#define FFILFOAOIMP_IDKEFIOBFFC_1_OFFSET UNITYSDK_OFFSET(0x169D0B10)
#define FFILFOAOIMP_IDKEFIOBFFC_OFFSET UNITYSDK_OFFSET(0x169D00C0)
#define FFILFOAOIMP_IHMAPIMBMNC_OFFSET UNITYSDK_OFFSET(0x169D3BC0)
#define FFILFOAOIMP_JJAGKDBFFBA_OFFSET UNITYSDK_OFFSET(0x169D47B0)
#define FFILFOAOIMP_KAMDGKCMCFD_OFFSET UNITYSDK_OFFSET(0x169CF3F0)
#define FFILFOAOIMP_KGHIAKNFNHP_OFFSET UNITYSDK_OFFSET(0x169D3450)
#define FFILFOAOIMP_KLDPLMKJDID_1_OFFSET UNITYSDK_OFFSET(0x169D5450)
#define FFILFOAOIMP_KLDPLMKJDID_OFFSET UNITYSDK_OFFSET(0x169D1AA0)
#define FFILFOAOIMP_KMKGJAICOAC_OFFSET UNITYSDK_OFFSET(0x169CD870)
#define FFILFOAOIMP_LHFNKFPOOHA_OFFSET UNITYSDK_OFFSET(0x169D42E0)
#define FFILFOAOIMP_LHNBJLCAJJC_OFFSET UNITYSDK_OFFSET(0x169D0360)
#define FFILFOAOIMP_LJONHFBKBAF_OFFSET UNITYSDK_OFFSET(0x169D4680)
#define FFILFOAOIMP_LLDLIFIAPME_OFFSET UNITYSDK_OFFSET(0x169CF590)
#define FFILFOAOIMP_LNIAFJBLMKH_OFFSET UNITYSDK_OFFSET(0x169D4A10)
#define FFILFOAOIMP_MFGCMNGHKEG_OFFSET UNITYSDK_OFFSET(0x169D0440)
#define FFILFOAOIMP_MGPPHPIFKCC_OFFSET UNITYSDK_OFFSET(0x169D4040)
#define FFILFOAOIMP_MJIOKPHHOPL_OFFSET UNITYSDK_OFFSET(0x169D2FE0)
#define FFILFOAOIMP_MJLODIENJJC_OFFSET UNITYSDK_OFFSET(0x169D54F0)
#define FFILFOAOIMP_MJPMJFOGNOD_OFFSET UNITYSDK_OFFSET(0x169D4580)
#define FFILFOAOIMP_NCKLDOKAJLE_OFFSET UNITYSDK_OFFSET(0x169D16B0)
#define FFILFOAOIMP_NCOLCLFJIHO_OFFSET UNITYSDK_OFFSET(0x169CD940)
#define FFILFOAOIMP_NFIKNKFECNI_OFFSET UNITYSDK_OFFSET(0x169CFE40)
#define FFILFOAOIMP_OCDJLFDDDHN_OFFSET UNITYSDK_OFFSET(0x169D4C40)
#define FFILFOAOIMP_ODLABLBFFDL_OFFSET UNITYSDK_OFFSET(0x169D5060)
#define FFILFOAOIMP_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x169CFE90)
#define FFILFOAOIMP_ONCREATE_OFFSET UNITYSDK_OFFSET(0x169CD500)
#define FFILFOAOIMP_ONSTART_OFFSET UNITYSDK_OFFSET(0x169CE990)
#define FFILFOAOIMP_OPDDBALGNCD_OFFSET UNITYSDK_OFFSET(0x169D19A0)
#define FFILFOAOIMP_OPMKAPAMABE_OFFSET UNITYSDK_OFFSET(0x169D1290)
#define FFILFOAOIMP_PFCEEOPDIMK_OFFSET UNITYSDK_OFFSET(0x169CDF30)
#define FFILFOAOIMP_PMDGPKOALIE_OFFSET UNITYSDK_OFFSET(0x169D08B0)
#define FFILFOAOIMP_POFJHHHKFBJ_OFFSET UNITYSDK_OFFSET(0x169D52D0)
#define FFILFOAOIMP__CTOR_OFFSET UNITYSDK_OFFSET(0x169CF700)

inline static constexpr unsigned int FFILFOAOIMP_TypeDefinitionIndex = 91869;

class FFILFOAOIMP
{
public:
	::KOIOODIJLIG* HDJMCDKNEAI; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* CPPDMMCBCDL; // 0x18
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::IBENDELLLAO*, ::System::Int32>>* IOOIDCBDMCI; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::JNNGKJFNLOM*>* FAFAPMLEFHE; // 0x28
	::System::Collections::Generic::HashSet_1<::PEFHNKMDMOI*>* ABJPMJJOKEN; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::IBENDELLLAO*>* LAPFONDOJBF; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* IPCOPENCDKN; // 0x40
	::System::Collections::Generic::Dictionary_2<::IBENDELLLAO*, ::System::Int32>* GMLANFEJPKP; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::IBENDELLLAO*>*>* HNBPPAIDJIL; // 0x50
	::GGFCDBIEFNK* DBMGJMJGCNN; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::NMAJANNDDJA*>* MJGLPGELBOJ; // 0x60
	::Foundation::Coroutine::CoroutineHandle OIEKILLFCLE; // 0x68
	::Foundation::Coroutine::CoroutineHandle AEDPFCDPCMP; // 0x6C
	::System::Int32 CHIPIBOALNN; // 0x70
	::System::Boolean FFNGLKKDGHN; // 0x74
	::System::Boolean AKCJHOFCFFL; // 0x75
	::System::Boolean HJMABDDKKGI; // 0x76

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFILFOAOIMP__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFILFOAOIMP_ONCREATE_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFILFOAOIMP_ONSTART_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFILFOAOIMP_DISPOSE_OFFSET))(this);
	}

	::IBENDELLLAO* DICCDHEPHCC(::Share::ENotificationBadgeType OBNIAHNMHPF, ::NodeGraph::VariantUnion OPEEPGDDJEE, ::NodeGraph::VariantUnion HDMBDMCBGJD)
	{
		return ((::IBENDELLLAO*(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + FFILFOAOIMP_DICCDHEPHCC_OFFSET))(this, OBNIAHNMHPF, OPEEPGDDJEE, HDMBDMCBGJD);
	}

	::System::Void NFIKNKFECNI(::Share::ENotificationBadgeType OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + FFILFOAOIMP_NFIKNKFECNI_OFFSET))(this, OBNIAHNMHPF);
	}

	::System::Void KMKGJAICOAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFILFOAOIMP_KMKGJAICOAC_OFFSET))(this);
	}

	::IBENDELLLAO* DICCDHEPHCC_1(::Share::ENotificationBadgeType OBNIAHNMHPF, ::NodeGraph::VariantUnion KMFOONLDBFA, ::System::Int32 ABHBKFJKINO)
	{
		return ((::IBENDELLLAO*(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion, ::System::Int32))((::PBYTE)hIl2Cpp + FFILFOAOIMP_DICCDHEPHCC_1_OFFSET))(this, OBNIAHNMHPF, KMFOONLDBFA, ABHBKFJKINO);
	}

	::System::Void IDKEFIOBFFC(::BPHGNMNLLHF* NHEPEEIPENO)
	{
		return ((::System::Void(*)(::PVOID, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + FFILFOAOIMP_IDKEFIOBFFC_OFFSET))(this, NHEPEEIPENO);
	}

	::System::Void MFGCMNGHKEG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFILFOAOIMP_MFGCMNGHKEG_OFFSET))(this);
	}

	::System::Int32 DHJKEEFALHG(::NodeGraph::VariantUnion MGMDLMBEDJF)
	{
		return ((::System::Int32(*)(::PVOID, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + FFILFOAOIMP_DHJKEEFALHG_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void DACGKGIAMEI(::Share::ENotificationBadgeType OBNIAHNMHPF, ::NodeGraph::VariantUnion MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + FFILFOAOIMP_DACGKGIAMEI_OFFSET))(this, OBNIAHNMHPF, MGMDLMBEDJF);
	}

	::System::Void PMDGPKOALIE(::System::Int32 LABJKINHNMH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FFILFOAOIMP_PMDGPKOALIE_OFFSET))(this, LABJKINHNMH);
	}

	::NMAJANNDDJA* LHNBJLCAJJC(::Share::ENotificationBadgeType OBNIAHNMHPF)
	{
		return ((::NMAJANNDDJA*(*)(::PVOID, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + FFILFOAOIMP_LHNBJLCAJJC_OFFSET))(this, OBNIAHNMHPF);
	}

	::System::Void IDKEFIOBFFC_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFILFOAOIMP_IDKEFIOBFFC_1_OFFSET))(this);
	}

	::System::Void AMODFACBPKA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFILFOAOIMP_AMODFACBPKA_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::Share::ENotificationBadgeType OBNIAHNMHPF, ::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::System::Int32))((::PBYTE)hIl2Cpp + FFILFOAOIMP_OKJCHFGIKBH_OFFSET))(this, OBNIAHNMHPF, EGEGIMGMJHN);
	}

	::System::Int32 BDBDHACIKOA(::NodeGraph::VariantUnion MGMDLMBEDJF)
	{
		return ((::System::Int32(*)(::PVOID, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + FFILFOAOIMP_BDBDHACIKOA_OFFSET))(this, MGMDLMBEDJF);
	}

	::IBENDELLLAO* DICCDHEPHCC_2(::Share::ENotificationBadgeType OBNIAHNMHPF, ::NodeGraph::VariantUnion KMFOONLDBFA)
	{
		return ((::IBENDELLLAO*(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + FFILFOAOIMP_DICCDHEPHCC_2_OFFSET))(this, OBNIAHNMHPF, KMFOONLDBFA);
	}

	::System::Int32 OPMKAPAMABE(::NodeGraph::VariantUnion MGMDLMBEDJF)
	{
		return ((::System::Int32(*)(::PVOID, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + FFILFOAOIMP_OPMKAPAMABE_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void LLDLIFIAPME()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFILFOAOIMP_LLDLIFIAPME_OFFSET))(this);
	}

	::System::Void ENFGENGCCNN(::BPHGNMNLLHF* NHEPEEIPENO)
	{
		return ((::System::Void(*)(::PVOID, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + FFILFOAOIMP_ENFGENGCCNN_OFFSET))(this, NHEPEEIPENO);
	}

	::System::Void OPDDBALGNCD(::BPHGNMNLLHF* JGHNEGMOGHC)
	{
		return ((::System::Void(*)(::PVOID, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + FFILFOAOIMP_OPDDBALGNCD_OFFSET))(this, JGHNEGMOGHC);
	}

	::System::Void GLKMNNBIDEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFILFOAOIMP_GLKMNNBIDEC_OFFSET))(this);
	}

	::System::Void KLDPLMKJDID(::Share::ENotificationBadgeType OBNIAHNMHPF, ::NodeGraph::VariantUnion KMFOONLDBFA, ::System::Int32 ABHBKFJKINO, ::System::Action_1<::System::Int32>* OIIGKOLGMMO)
	{
		return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + FFILFOAOIMP_KLDPLMKJDID_OFFSET))(this, OBNIAHNMHPF, KMFOONLDBFA, ABHBKFJKINO, OIIGKOLGMMO);
	}

	::System::Void PFCEEOPDIMK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFILFOAOIMP_PFCEEOPDIMK_OFFSET))(this);
	}

	::System::Int32 BKHEMBKGLNL(::NodeGraph::VariantUnion MGMDLMBEDJF)
	{
		return ((::System::Int32(*)(::PVOID, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + FFILFOAOIMP_BKHEMBKGLNL_OFFSET))(this, MGMDLMBEDJF);
	}

	::AMLFPKAKENC* FGNGFEMMJEO(::System::Int32 OBNIAHNMHPF)
	{
		return ((::AMLFPKAKENC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FFILFOAOIMP_FGNGFEMMJEO_OFFSET))(this, OBNIAHNMHPF);
	}

	::System::Void BKACALELCKI(::BPHGNMNLLHF* NHEPEEIPENO)
	{
		return ((::System::Void(*)(::PVOID, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + FFILFOAOIMP_BKACALELCKI_OFFSET))(this, NHEPEEIPENO);
	}

	::System::Boolean BINIMEEFOFB(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FFILFOAOIMP_BINIMEEFOFB_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void MJIOKPHHOPL(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + FFILFOAOIMP_MJIOKPHHOPL_OFFSET))(this, KOIBHLHLMFC);
	}

	::IBENDELLLAO* HFGAIGAKNNG(::Share::ENotificationBadgeType OBNIAHNMHPF, ::NodeGraph::VariantUnion KMFOONLDBFA)
	{
		return ((::IBENDELLLAO*(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + FFILFOAOIMP_HFGAIGAKNNG_OFFSET))(this, OBNIAHNMHPF, KMFOONLDBFA);
	}

	::System::Void KGHIAKNFNHP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFILFOAOIMP_KGHIAKNFNHP_OFFSET))(this);
	}

	::System::Void FKEFOFICBOF(::IBENDELLLAO* OIFCABKOGFP, ::System::Int32 BHIEPHHAGAN)
	{
		return ((::System::Void(*)(::PVOID, ::IBENDELLLAO*, ::System::Int32))((::PBYTE)hIl2Cpp + FFILFOAOIMP_FKEFOFICBOF_OFFSET))(this, OIFCABKOGFP, BHIEPHHAGAN);
	}

	::System::Void ABGHEDODEFM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFILFOAOIMP_ABGHEDODEFM_OFFSET))(this);
	}

	::System::Void HPJIDBKMNHN(::Share::ENotificationBadgeType DLINOADFMCK, ::System::Func_2<::NodeGraph::VariantUnion, ::System::Int32>* EACNBJIJJBP)
	{
		return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::System::Func_2<::NodeGraph::VariantUnion, ::System::Int32>*))((::PBYTE)hIl2Cpp + FFILFOAOIMP_HPJIDBKMNHN_OFFSET))(this, DLINOADFMCK, EACNBJIJJBP);
	}

	::System::Void DOMLOJPHOPO(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + FFILFOAOIMP_DOMLOJPHOPO_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void DMGBAMBBGJM(::Share::ENotificationBadgeType OBNIAHNMHPF, ::NodeGraph::VariantUnion KMFOONLDBFA, ::System::Int32 ABHBKFJKINO, ::System::Action_1<::System::Int32>* OIIGKOLGMMO)
	{
		return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + FFILFOAOIMP_DMGBAMBBGJM_OFFSET))(this, OBNIAHNMHPF, KMFOONLDBFA, ABHBKFJKINO, OIIGKOLGMMO);
	}

	::System::Void DFIKHNOFCGM(::IBENDELLLAO* HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::PVOID, ::IBENDELLLAO*))((::PBYTE)hIl2Cpp + FFILFOAOIMP_DFIKHNOFCGM_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Collections::Generic::List_1<::AOEHPGLBLIH*>* HKBCAEALAEG()
	{
		return ((::System::Collections::Generic::List_1<::AOEHPGLBLIH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFILFOAOIMP_HKBCAEALAEG_OFFSET))(this);
	}

	::AMLFPKAKENC* GCJECKPLICP(::Share::ENotificationBadgeType OBNIAHNMHPF)
	{
		return ((::AMLFPKAKENC*(*)(::PVOID, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + FFILFOAOIMP_GCJECKPLICP_OFFSET))(this, OBNIAHNMHPF);
	}

	::System::Void MGPPHPIFKCC(::BPHGNMNLLHF* NHEPEEIPENO)
	{
		return ((::System::Void(*)(::PVOID, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + FFILFOAOIMP_MGPPHPIFKCC_OFFSET))(this, NHEPEEIPENO);
	}

	::System::Void LHFNKFPOOHA(::BPHGNMNLLHF* NHEPEEIPENO)
	{
		return ((::System::Void(*)(::PVOID, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + FFILFOAOIMP_LHFNKFPOOHA_OFFSET))(this, NHEPEEIPENO);
	}

	::System::Int32 MJPMJFOGNOD(::Share::ENotificationBadgeType OBNIAHNMHPF)
	{
		return ((::System::Int32(*)(::PVOID, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + FFILFOAOIMP_MJPMJFOGNOD_OFFSET))(this, OBNIAHNMHPF);
	}

	::System::Void KAMDGKCMCFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFILFOAOIMP_KAMDGKCMCFD_OFFSET))(this);
	}

	::System::Void HPJIDBKMNHN_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFILFOAOIMP_HPJIDBKMNHN_1_OFFSET))(this);
	}

	::System::Void LJONHFBKBAF(::Share::ENotificationBadgeType OBNIAHNMHPF, ::System::Action_1<::System::Int32>* OIIGKOLGMMO)
	{
		return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + FFILFOAOIMP_LJONHFBKBAF_OFFSET))(this, OBNIAHNMHPF, OIIGKOLGMMO);
	}

	::System::Void JJAGKDBFFBA(::PEFHNKMDMOI* MECOFDHMKEB)
	{
		return ((::System::Void(*)(::PVOID, ::PEFHNKMDMOI*))((::PBYTE)hIl2Cpp + FFILFOAOIMP_JJAGKDBFFBA_OFFSET))(this, MECOFDHMKEB);
	}

	::System::Void FDOEKPLJFEE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFILFOAOIMP_FDOEKPLJFEE_OFFSET))(this);
	}

	::System::Void DMGBAMBBGJM_1(::Share::ENotificationBadgeType OBNIAHNMHPF, ::NodeGraph::VariantUnion KMFOONLDBFA, ::System::Action_1<::System::Int32>* OIIGKOLGMMO)
	{
		return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + FFILFOAOIMP_DMGBAMBBGJM_1_OFFSET))(this, OBNIAHNMHPF, KMFOONLDBFA, OIIGKOLGMMO);
	}

	::System::Void GEDDANJBMAO(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + FFILFOAOIMP_GEDDANJBMAO_OFFSET))(this, KOIBHLHLMFC);
	}

	::IBENDELLLAO* FFOBGMGKIBN(::Share::ENotificationBadgeType OBNIAHNMHPF, ::NodeGraph::VariantUnion MGMDLMBEDJF, ::System::Int32 ABHBKFJKINO)
	{
		return ((::IBENDELLLAO*(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion, ::System::Int32))((::PBYTE)hIl2Cpp + FFILFOAOIMP_FFOBGMGKIBN_OFFSET))(this, OBNIAHNMHPF, MGMDLMBEDJF, ABHBKFJKINO);
	}

	::System::Int32 HIEIOKKIPFO(::NodeGraph::VariantUnion MGMDLMBEDJF)
	{
		return ((::System::Int32(*)(::PVOID, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + FFILFOAOIMP_HIEIOKKIPFO_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void LNIAFJBLMKH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFILFOAOIMP_LNIAFJBLMKH_OFFSET))(this);
	}

	::System::Void OCDJLFDDDHN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFILFOAOIMP_OCDJLFDDDHN_OFFSET))(this);
	}

	::System::Void ODLABLBFFDL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFILFOAOIMP_ODLABLBFFDL_OFFSET))(this);
	}

	::IBENDELLLAO* CJHIPHLOBAL(::Share::ENotificationBadgeType OBNIAHNMHPF)
	{
		return ((::IBENDELLLAO*(*)(::PVOID, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + FFILFOAOIMP_CJHIPHLOBAL_OFFSET))(this, OBNIAHNMHPF);
	}

	::System::Void AAHPAFNOHHP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFILFOAOIMP_AAHPAFNOHHP_OFFSET))(this);
	}

	::AMLFPKAKENC* FGNGFEMMJEO_1(::Share::ENotificationBadgeType OBNIAHNMHPF)
	{
		return ((::AMLFPKAKENC*(*)(::PVOID, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + FFILFOAOIMP_FGNGFEMMJEO_1_OFFSET))(this, OBNIAHNMHPF);
	}

	::System::Void GCPGCIMGLLK(::AOEHPGLBLIH* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::AOEHPGLBLIH*))((::PBYTE)hIl2Cpp + FFILFOAOIMP_GCPGCIMGLLK_OFFSET))(this, DFMKILICPFB);
	}

	::System::Int32 NCKLDOKAJLE(::Share::ENotificationBadgeType OBNIAHNMHPF, ::NodeGraph::VariantUnion MGMDLMBEDJF)
	{
		return ((::System::Int32(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + FFILFOAOIMP_NCKLDOKAJLE_OFFSET))(this, OBNIAHNMHPF, MGMDLMBEDJF);
	}

	::System::Boolean POFJHHHKFBJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FFILFOAOIMP_POFJHHHKFBJ_OFFSET))(this);
	}

	::System::Void CJKHKCELEGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFILFOAOIMP_CJKHKCELEGH_OFFSET))(this);
	}

	::System::Void GOOECNMMOJL(::Share::ENotificationBadgeType OBNIAHNMHPF, ::System::Action_1<::System::Int32>* OIIGKOLGMMO)
	{
		return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + FFILFOAOIMP_GOOECNMMOJL_OFFSET))(this, OBNIAHNMHPF, OIIGKOLGMMO);
	}

	::System::Void NCOLCLFJIHO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFILFOAOIMP_NCOLCLFJIHO_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::IBENDELLLAO*>* BDANHCEHLCA()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::IBENDELLLAO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFILFOAOIMP_BDANHCEHLCA_OFFSET))(this);
	}

	::System::Void KLDPLMKJDID_1(::Share::ENotificationBadgeType OBNIAHNMHPF, ::NodeGraph::VariantUnion KMFOONLDBFA, ::System::Action_1<::System::Int32>* OIIGKOLGMMO)
	{
		return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + FFILFOAOIMP_KLDPLMKJDID_1_OFFSET))(this, OBNIAHNMHPF, KMFOONLDBFA, OIIGKOLGMMO);
	}

	::System::Void MJLODIENJJC(::System::Boolean DEBGKPLOPCG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FFILFOAOIMP_MJLODIENJJC_OFFSET))(this, DEBGKPLOPCG);
	}

	::System::Void FHOPFPLIBHN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFILFOAOIMP_FHOPFPLIBHN_OFFSET))(this);
	}

	::System::Void IHMAPIMBMNC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFILFOAOIMP_IHMAPIMBMNC_OFFSET))(this);
	}
};
