#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BPBFCHPINDD_FadingDoneActionType.h"
#include "unitysdk/PAOIIOIGCOJ.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingConsequenceClass.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingDistanceTier.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingEntryResolveResult.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingImmediateFinishReason.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingInvalidReason.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingLowRejectedReason.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingPriority.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingPriorityModifierFlags.h"
#include "unitysdk/RPG/Client/OpenWorld/FadingSizeTier.h"
#include "unitysdk/OGLAJJBODAH.h"
class BHHGMJKJIBJ;
class GDMONJOAKHD;
class HPKACEPPPCA;
class KLEFGGIHGMI;
class LJFHKAJPFNE;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MEHCCAJLFIL_ACLPKBGLKLG_OFFSET UNITYSDK_OFFSET(0xC178320)
#define MEHCCAJLFIL_AEEBEMFEAHG_OFFSET UNITYSDK_OFFSET(0xC17C4F0)
#define MEHCCAJLFIL_AFAPNANHGEK_OFFSET UNITYSDK_OFFSET(0xC17B190)
#define MEHCCAJLFIL_AIEKHJBBPBF_OFFSET UNITYSDK_OFFSET(0xC17D3E0)
#define MEHCCAJLFIL_AJHCEAGKBMD_OFFSET UNITYSDK_OFFSET(0xC17D5F0)
#define MEHCCAJLFIL_ANNBMLHIFIJ_OFFSET UNITYSDK_OFFSET(0xC17EDA0)
#define MEHCCAJLFIL_BDMAKCIBEPH_OFFSET UNITYSDK_OFFSET(0xC177520)
#define MEHCCAJLFIL_BIDNENBACHH_OFFSET UNITYSDK_OFFSET(0xC17A030)
#define MEHCCAJLFIL_BJPJEHGAJDM_OFFSET UNITYSDK_OFFSET(0xC17D9E0)
#define MEHCCAJLFIL_BKJGMFOKKKN_OFFSET UNITYSDK_OFFSET(0xC1763F0)
#define MEHCCAJLFIL_BKPCHKIKJKD_OFFSET UNITYSDK_OFFSET(0xC17EB70)
#define MEHCCAJLFIL_BOFJABIMGLF_OFFSET UNITYSDK_OFFSET(0xC17E280)
#define MEHCCAJLFIL_BPFHBMJCEAH_OFFSET UNITYSDK_OFFSET(0xC177D70)
#define MEHCCAJLFIL_CCTOR_OFFSET UNITYSDK_OFFSET(0xC17F350)
#define MEHCCAJLFIL_CTOR_OFFSET UNITYSDK_OFFSET(0xC1757F0)
#define MEHCCAJLFIL_DFLIFOHKEGC_OFFSET UNITYSDK_OFFSET(0xC175F90)
#define MEHCCAJLFIL_DGCKOLHIAOF_OFFSET UNITYSDK_OFFSET(0xC17D390)
#define MEHCCAJLFIL_DIGFFBDFEBC_OFFSET UNITYSDK_OFFSET(0xC17E830)
#define MEHCCAJLFIL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC1761B0)
#define MEHCCAJLFIL_DKLJHADJDFB_OFFSET UNITYSDK_OFFSET(0xC17B250)
#define MEHCCAJLFIL_DPCGMABBPGB_OFFSET UNITYSDK_OFFSET(0xC17F290)
#define MEHCCAJLFIL_EBOOKENLOOL_OFFSET UNITYSDK_OFFSET(0xC177810)
#define MEHCCAJLFIL_EHEDEFJDKNO_OFFSET UNITYSDK_OFFSET(0xC17CB90)
#define MEHCCAJLFIL_EJNPLLFPHAD_OFFSET UNITYSDK_OFFSET(0xC178120)
#define MEHCCAJLFIL_EKAKPNGEKNK_OFFSET UNITYSDK_OFFSET(0xC17E230)
#define MEHCCAJLFIL_EKEMMENOAGF_OFFSET UNITYSDK_OFFSET(0xC1775D0)
#define MEHCCAJLFIL_FBIMDDBBIAF_OFFSET UNITYSDK_OFFSET(0xC17F1A0)
#define MEHCCAJLFIL_FJMBGPFKBPM_OFFSET UNITYSDK_OFFSET(0xC17C6A0)
#define MEHCCAJLFIL_FOFPMBLJDOC_OFFSET UNITYSDK_OFFSET(0xC17D700)
#define MEHCCAJLFIL_FONCGJEEDMF_OFFSET UNITYSDK_OFFSET(0xC177C20)
#define MEHCCAJLFIL_GEEMPHBJHPD_OFFSET UNITYSDK_OFFSET(0xC17B340)
#define MEHCCAJLFIL_GFAOLOPDCPE_OFFSET UNITYSDK_OFFSET(0xC17CEF0)
#define MEHCCAJLFIL_GNJIELMAGAC_OFFSET UNITYSDK_OFFSET(0xC17A0F0)
#define MEHCCAJLFIL_GOGAOKDNOHK_OFFSET UNITYSDK_OFFSET(0xC17B2F0)
#define MEHCCAJLFIL_HCENLOJJGAA_OFFSET UNITYSDK_OFFSET(0xC17E350)
#define MEHCCAJLFIL_HDJEDDACJKH_OFFSET UNITYSDK_OFFSET(0xC17EAC0)
#define MEHCCAJLFIL_HFENOLGMDJG_OFFSET UNITYSDK_OFFSET(0xC17F310)
#define MEHCCAJLFIL_HFMHEIEALLE_OFFSET UNITYSDK_OFFSET(0xC1771B0)
#define MEHCCAJLFIL_IAEHBBHCGDF_OFFSET UNITYSDK_OFFSET(0xC17CA00)
#define MEHCCAJLFIL_IDGNFNNJGHL_OFFSET UNITYSDK_OFFSET(0xC1772F0)
#define MEHCCAJLFIL_IFEAONBBEAG_OFFSET UNITYSDK_OFFSET(0xC179B40)
#define MEHCCAJLFIL_IGFAKILGPDJ_OFFSET UNITYSDK_OFFSET(0xC179720)
#define MEHCCAJLFIL_IGGPNOIMGIF_OFFSET UNITYSDK_OFFSET(0xC17C5D0)
#define MEHCCAJLFIL_IGKBGKEOELJ_OFFSET UNITYSDK_OFFSET(0xC17C190)
#define MEHCCAJLFIL_IICOIHHAGFK_OFFSET UNITYSDK_OFFSET(0xC17DCF0)
#define MEHCCAJLFIL_INELDBCHHAL_OFFSET UNITYSDK_OFFSET(0xC1757A0)
#define MEHCCAJLFIL_JBFKLNDDIKC_OFFSET UNITYSDK_OFFSET(0xC178520)
#define MEHCCAJLFIL_JJIEBIBFPLE_OFFSET UNITYSDK_OFFSET(0xC17C400)
#define MEHCCAJLFIL_JJMOGJFOBBC_OFFSET UNITYSDK_OFFSET(0xC17EA40)
#define MEHCCAJLFIL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC1790F0)
#define MEHCCAJLFIL_JMBHDCNOFJG_OFFSET UNITYSDK_OFFSET(0xC17DC50)
#define MEHCCAJLFIL_KEJEIHELGNM_OFFSET UNITYSDK_OFFSET(0xC17D690)
#define MEHCCAJLFIL_KFGCOGKDLAM_OFFSET UNITYSDK_OFFSET(0xC17ED40)
#define MEHCCAJLFIL_KKBIHCPNDAL_OFFSET UNITYSDK_OFFSET(0xC17D630)
#define MEHCCAJLFIL_KKDNAHPBOGF_OFFSET UNITYSDK_OFFSET(0xC1773C0)
#define MEHCCAJLFIL_KKEBEEJNILF_OFFSET UNITYSDK_OFFSET(0xC17E2D0)
#define MEHCCAJLFIL_KLGANGOKPBA_OFFSET UNITYSDK_OFFSET(0xC17ECE0)
#define MEHCCAJLFIL_KLOBDLLOMJL_OFFSET UNITYSDK_OFFSET(0xC177580)
#define MEHCCAJLFIL_KMGMCKOHLKO_OFFSET UNITYSDK_OFFSET(0xC17C950)
#define MEHCCAJLFIL_LAODHBDKHAG_OFFSET UNITYSDK_OFFSET(0xC177B00)
#define MEHCCAJLFIL_LCEIBLPNNMP_OFFSET UNITYSDK_OFFSET(0xC177870)
#define MEHCCAJLFIL_LEJFCEPAEEC_OFFSET UNITYSDK_OFFSET(0xC17AE00)
#define MEHCCAJLFIL_LFNJDLHLAPO_OFFSET UNITYSDK_OFFSET(0xC17F220)
#define MEHCCAJLFIL_LLDMAGDBPNL_OFFSET UNITYSDK_OFFSET(0xC17DD40)
#define MEHCCAJLFIL_MBABMBBLADO_OFFSET UNITYSDK_OFFSET(0xC17C7F0)
#define MEHCCAJLFIL_MBBJMJDKELP_OFFSET UNITYSDK_OFFSET(0xC179BF0)
#define MEHCCAJLFIL_MCDKNOCIDCA_OFFSET UNITYSDK_OFFSET(0xC17CA50)
#define MEHCCAJLFIL_MIKJNDMEDNM_OFFSET UNITYSDK_OFFSET(0xC17B470)
#define MEHCCAJLFIL_MJKJBEAGGMG_OFFSET UNITYSDK_OFFSET(0xC178720)
#define MEHCCAJLFIL_MNGHCEPNHCD_OFFSET UNITYSDK_OFFSET(0xC179C30)
#define MEHCCAJLFIL_NADKJDJKLDL_OFFSET UNITYSDK_OFFSET(0xC179CB0)
#define MEHCCAJLFIL_NBMPCBADGEI_OFFSET UNITYSDK_OFFSET(0xC1777D0)
#define MEHCCAJLFIL_NCIAFGCHGDL_OFFSET UNITYSDK_OFFSET(0xC17B610)
#define MEHCCAJLFIL_NFJOFDGCFJI_OFFSET UNITYSDK_OFFSET(0xC17F0A0)
#define MEHCCAJLFIL_NHHDBKCEBIL_OFFSET UNITYSDK_OFFSET(0xC179DC0)
#define MEHCCAJLFIL_NLAEDDMCJOM_OFFSET UNITYSDK_OFFSET(0xC17C8B0)
#define MEHCCAJLFIL_NLEEMFPNOLC_OFFSET UNITYSDK_OFFSET(0xC17E180)
#define MEHCCAJLFIL_NONBDLMNKAP_OFFSET UNITYSDK_OFFSET(0xC17F2D0)
#define MEHCCAJLFIL_NPMODHKLHII_OFFSET UNITYSDK_OFFSET(0xC17CAE0)
#define MEHCCAJLFIL_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xC175D00)
#define MEHCCAJLFIL_OJFNCOFNBLK_OFFSET UNITYSDK_OFFSET(0xC17E970)
#define MEHCCAJLFIL_OLDIKDMOOGK_OFFSET UNITYSDK_OFFSET(0xC178E50)
#define MEHCCAJLFIL_OPGOOLGLCFO_OFFSET UNITYSDK_OFFSET(0xC17CD40)
#define MEHCCAJLFIL_OPMMFIDFBJA_OFFSET UNITYSDK_OFFSET(0xC17A490)
#define MEHCCAJLFIL_PJNLIJIDFCF_OFFSET UNITYSDK_OFFSET(0xC17D1F0)
#define MEHCCAJLFIL_PNOJKCIKMAD_OFFSET UNITYSDK_OFFSET(0xC17D510)

inline static constexpr unsigned int MEHCCAJLFIL_TypeDefinitionIndex = 76093;

	class MEHCCAJLFIL : public ::PAOIIOIGCOJ
	{
	public:
		::System::Collections::Generic::List_1<::HPKACEPPPCA*>* FBPMPJBCEIM; // 0x18
		::System::Collections::Generic::HashSet_1<::HPKACEPPPCA*>* KNENIDAJIIO; // 0x20
		::Il2CppArray<::System::Int32>* IHOLFEOPFAI; // 0x28
		::System::Collections::Generic::List_1<::BHHGMJKJIBJ*>* NICBNIMAION; // 0x30
		::Il2CppArray<::System::Int32>* BNIOCAJMMBJ; // 0x38
		::Il2CppArray<::System::Int32>* HFJJANJFDKI; // 0x40
		::System::Collections::Generic::Dictionary_2<::HPKACEPPPCA*, ::BHHGMJKJIBJ*>* KLJLKGHOFBG; // 0x48
		::Il2CppArray<::System::Int32>* OINCCPCJEKL; // 0x50
		::System::Collections::Generic::HashSet_1<::HPKACEPPPCA*>* DNHLEIHAHOA; // 0x58
		::Il2CppArray<::System::Int32>* OPFGFCLOABE; // 0x60
		::System::Collections::Generic::List_1<::BHHGMJKJIBJ*>* JBBBFJELPFB; // 0x68
		::Il2CppArray<::System::Int32>* KLPHEDLLDNC; // 0x70
		::Il2CppArray<::System::Int32>* ECEGHGFDBBH; // 0x78
		::System::Collections::Generic::List_1<::BHHGMJKJIBJ*>* BCGCMPFHPKA; // 0x80
		::Il2CppArray<::System::Int32>* MLDFLIDCMCO; // 0x88
		::System::Collections::Generic::List_1<::HPKACEPPPCA*>* NEENANLBNKP; // 0x90
		::System::Int32 JCLDLKGEDNH; // 0x98
		::System::Int32 KLCMIJGPCBL; // 0x9C
		::System::Int32 FDPGOGFFOGP; // 0xA0
		::System::Int32 CHDHGKJFILJ; // 0xA4
		::System::Int32 PABGHGIPDIB; // 0xA8
		::System::Boolean JIOBJKNPCNH; // 0xAC
		::System::Byte _padding0[0x3];
		::System::Int32 AIPOLCHPJKG; // 0xB0
		::System::Int32 GGCJOBPCHNK; // 0xB4
		::System::Int32 OKKKINLMCNN; // 0xB8
		::System::Int32 GLNCHEOEHEK; // 0xBC
		::System::Int32 FJAIBFCEDPJ; // 0xC0
		::System::Int32 LMBGNLLIFHJ; // 0xC4
		::System::Int32 IIPICADPDEE; // 0xC8
		::System::Int32 EGGAMNDKBHD; // 0xCC
		::System::Int32 BJPLIEINDHG; // 0xD0
		::System::Int32 JGMGALLACHB; // 0xD4
		static ::RPG::Client::RPGProfilerMarker** StaticGet_DCOCBKPOOBI()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "MEHCCAJLFIL")->GetStaticField(0x72280);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_OEJLMMLOODK()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "MEHCCAJLFIL")->GetStaticField(0x72288);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_NNAEKHJALPE()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "MEHCCAJLFIL")->GetStaticField(0x72290);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_JIMMGIJFNLL()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "MEHCCAJLFIL")->GetStaticField(0x72298);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_FFNMAHNOEBO()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "MEHCCAJLFIL")->GetStaticField(0x722A0);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_OJGBLCEADOL()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "MEHCCAJLFIL")->GetStaticField(0x722A8);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_EMPOFJKJAAI()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "MEHCCAJLFIL")->GetStaticField(0x722B0);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_GGFBOILBKKF()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "MEHCCAJLFIL")->GetStaticField(0x722B8);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_IKEIKCFCCJA()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "MEHCCAJLFIL")->GetStaticField(0x722C0);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_DBDMBOIAJOD()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "MEHCCAJLFIL")->GetStaticField(0x722C8);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_DDGNJEFNHAG()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "MEHCCAJLFIL")->GetStaticField(0x722D0);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_FEHJLGEPAED()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "MEHCCAJLFIL")->GetStaticField(0x722D8);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_LJMEBANFDOD()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "MEHCCAJLFIL")->GetStaticField(0x722E0);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_ALDJDPIDCEL()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "MEHCCAJLFIL")->GetStaticField(0x722E8);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_JONAOOOJNOK()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "MEHCCAJLFIL")->GetStaticField(0x722F0);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_HMEMCFPIJOA()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "MEHCCAJLFIL")->GetStaticField(0x722F8);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_MEHAFKJNBPK()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "MEHCCAJLFIL")->GetStaticField(0x72300);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_IMPBIOJLOFL()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "MEHCCAJLFIL")->GetStaticField(0x72308);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_LOHOHHBEIHD()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "MEHCCAJLFIL")->GetStaticField(0x72310);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_FMEOFADOIFH()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "MEHCCAJLFIL")->GetStaticField(0x72318);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_JCAJLGEMHND()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "MEHCCAJLFIL")->GetStaticField(0x72320);
		}

		// static const ::System::Object CGMMBHCGHBK; // 0x0
		// static const ::System::Object CKOBHBPLHLI; // 0x0
		// static const ::System::Object KKMOFNEGNOK; // 0x0
		// static const ::System::Object GBPIJLELAJK; // 0x0
		// static const ::System::Object PJCBCNCCFLG; // 0x0
		// static const ::System::Object BOOIFAAEIDO; // 0x0
		// static const ::System::Object NGLBHPNAACI; // 0x0
		// static const ::System::Object JBPBAJDBFBE; // 0x0
		// static const ::System::Object HMDAEBFILDO; // 0x0
		// static const ::System::Object BBMPHIPEDPI; // 0x0
		// static const ::System::Object EOEKCBJCJAB; // 0x0
		// static const ::System::Object INBPDINJKEP; // 0x0
		// static const ::System::Object PHGFLBHJKAP; // 0x0
		// static const ::System::Object KPIEFAMNIKI; // 0x0
		// static const ::System::Object AEMKCLCFMMK; // 0x0
		// static const ::System::Object MDKPBOBNCAP; // 0x0
		// static const ::System::Object MEKNHMIHEMI; // 0x0
		// static const ::System::Object LLACHBACEGA; // 0x0
		// static const ::System::Object BNMACFGNFAN; // 0x0
		// static const ::System::Object DCMPOJEGMBK; // 0x0
		// static const ::System::Object DCNDEGAHACH; // 0x0
		// static const ::System::Object HBHIJCCDKKD; // 0x0
		// static const ::System::Object BNEFPFDBKNL; // 0x0
		// static const ::System::Object DBJNJNNPPGC; // 0x0
		::System::Void _ctor(::LJFHKAJPFNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJFHKAJPFNE*))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEHCCAJLFIL_CCTOR_OFFSET))();
		}

		::System::Int32 INELDBCHHAL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_INELDBCHHAL_OFFSET))(this);
		}

		::System::Void OINBDMGFFJL(::LJFHKAJPFNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJFHKAJPFNE*))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_OINBDMGFFJL_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_DISPOSE_OFFSET))(this);
		}

		::System::Void BKJGMFOKKKN(::HPKACEPPPCA* a1, ::GDMONJOAKHD* a2, ::KLEFGGIHGMI* a3, ::BPBFCHPINDD_FadingDoneActionType a4)
		{
			return ((::System::Void(*)(::PVOID, ::HPKACEPPPCA*, ::GDMONJOAKHD*, ::KLEFGGIHGMI*, ::BPBFCHPINDD_FadingDoneActionType))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_BKJGMFOKKKN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LCEIBLPNNMP(::HPKACEPPPCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPKACEPPPCA*))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_LCEIBLPNNMP_OFFSET))(this, a1);
		}

		::System::Void JBFKLNDDIKC(::HPKACEPPPCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPKACEPPPCA*))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_JBFKLNDDIKC_OFFSET))(this, a1);
		}

		::System::Void OLDIKDMOOGK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_OLDIKDMOOGK_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void GOGAOKDNOHK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_GOGAOKDNOHK_OFFSET))(this, a1);
		}

		::System::Boolean AFAPNANHGEK(::OGLAJJBODAH a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OGLAJJBODAH))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_AFAPNANHGEK_OFFSET))(this, a1);
		}

		::System::Boolean LEJFCEPAEEC(::OGLAJJBODAH a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OGLAJJBODAH))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_LEJFCEPAEEC_OFFSET))(this, a1);
		}

		::OGLAJJBODAH EJNPLLFPHAD(::System::Boolean a1)
		{
			return ((::OGLAJJBODAH(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_EJNPLLFPHAD_OFFSET))(this, a1);
		}

		::RPG::Client::OpenWorld::FadingImmediateFinishReason MNGHCEPNHCD(::OGLAJJBODAH a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::OpenWorld::FadingImmediateFinishReason(*)(::PVOID, ::OGLAJJBODAH, ::System::Boolean))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_MNGHCEPNHCD_OFFSET))(this, a1, a2);
		}

		::System::Void GNJIELMAGAC(::OGLAJJBODAH a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGLAJJBODAH))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_GNJIELMAGAC_OFFSET))(this, a1);
		}

		::System::Void OPMMFIDFBJA(::OGLAJJBODAH a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGLAJJBODAH))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_OPMMFIDFBJA_OFFSET))(this, a1);
		}

		::RPG::Client::OpenWorld::FadingEntryResolveResult KMGMCKOHLKO(::BHHGMJKJIBJ* a1, ::OGLAJJBODAH a2, ::RPG::Client::OpenWorld::FadingImmediateFinishReason a3)
		{
			return ((::RPG::Client::OpenWorld::FadingEntryResolveResult(*)(::PVOID, ::BHHGMJKJIBJ*, ::OGLAJJBODAH, ::RPG::Client::OpenWorld::FadingImmediateFinishReason))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_KMGMCKOHLKO_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EHEDEFJDKNO(::BHHGMJKJIBJ* a1, ::OGLAJJBODAH a2, ::RPG::Client::OpenWorld::FadingImmediateFinishReason a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::BHHGMJKJIBJ*, ::OGLAJJBODAH, ::RPG::Client::OpenWorld::FadingImmediateFinishReason))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_EHEDEFJDKNO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NPMODHKLHII(::BHHGMJKJIBJ* a1, ::OGLAJJBODAH a2, ::RPG::Client::OpenWorld::FadingImmediateFinishReason a3)
		{
			return ((::System::Void(*)(::PVOID, ::BHHGMJKJIBJ*, ::OGLAJJBODAH, ::RPG::Client::OpenWorld::FadingImmediateFinishReason))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_NPMODHKLHII_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NCIAFGCHGDL(::OGLAJJBODAH a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGLAJJBODAH))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_NCIAFGCHGDL_OFFSET))(this, a1);
		}

		::RPG::Client::OpenWorld::FadingPriority GFAOLOPDCPE(::BHHGMJKJIBJ* a1, ::OGLAJJBODAH a2, ::RPG::Client::OpenWorld::FadingPriority a3, ::RPG::Client::OpenWorld::FadingPriorityModifierFlags a4, ::System::Boolean a5, ::RPG::Client::OpenWorld::FadingLowRejectedReason a6, ::System::Boolean a7)
		{
			return ((::RPG::Client::OpenWorld::FadingPriority(*)(::PVOID, ::BHHGMJKJIBJ*, ::OGLAJJBODAH, ::RPG::Client::OpenWorld::FadingPriority, ::RPG::Client::OpenWorld::FadingPriorityModifierFlags, ::System::Boolean, ::RPG::Client::OpenWorld::FadingLowRejectedReason, ::System::Boolean))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_GFAOLOPDCPE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::RPG::Client::OpenWorld::FadingPriority PJNLIJIDFCF(::BHHGMJKJIBJ* a1, ::RPG::Client::OpenWorld::FadingPriority a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::RPG::Client::OpenWorld::FadingPriority(*)(::PVOID, ::BHHGMJKJIBJ*, ::RPG::Client::OpenWorld::FadingPriority, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_PJNLIJIDFCF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean IGKBGKEOELJ(::RPG::Client::OpenWorld::FadingPriority a1, ::OGLAJJBODAH a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::FadingPriority, ::OGLAJJBODAH))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_IGKBGKEOELJ_OFFSET))(this, a1, a2);
		}

		::System::Int32 FOFPMBLJDOC(::RPG::Client::OpenWorld::FadingPriority a1, ::OGLAJJBODAH a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::FadingPriority, ::OGLAJJBODAH, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_FOFPMBLJDOC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean JJIEBIBFPLE(::OGLAJJBODAH a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OGLAJJBODAH))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_JJIEBIBFPLE_OFFSET))(this, a1);
		}

		::System::Int32 AEEBEMFEAHG(::OGLAJJBODAH a1)
		{
			return ((::System::Int32(*)(::PVOID, ::OGLAJJBODAH))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_AEEBEMFEAHG_OFFSET))(this, a1);
		}

		::System::Boolean IGGPNOIMGIF(::OGLAJJBODAH a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OGLAJJBODAH))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_IGGPNOIMGIF_OFFSET))(this, a1);
		}

		::BHHGMJKJIBJ* BJPJEHGAJDM(::OGLAJJBODAH a1)
		{
			return ((::BHHGMJKJIBJ*(*)(::PVOID, ::OGLAJJBODAH))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_BJPJEHGAJDM_OFFSET))(this, a1);
		}

		::System::Void FJMBGPFKBPM(::OGLAJJBODAH a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGLAJJBODAH))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_FJMBGPFKBPM_OFFSET))(this, a1);
		}

		::System::Int32 LLDMAGDBPNL(::OGLAJJBODAH a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::OGLAJJBODAH, ::System::Int32))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_LLDMAGDBPNL_OFFSET))(this, a1, a2);
		}

		::System::Void LAODHBDKHAG(::BHHGMJKJIBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHHGMJKJIBJ*))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_LAODHBDKHAG_OFFSET))(this, a1);
		}

		::System::Void ACLPKBGLKLG(::OGLAJJBODAH a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGLAJJBODAH))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_ACLPKBGLKLG_OFFSET))(this, a1);
		}

		::System::Int32 NADKJDJKLDL(::OGLAJJBODAH a1, ::RPG::Client::OpenWorld::FadingImmediateFinishReason a2)
		{
			return ((::System::Int32(*)(::PVOID, ::OGLAJJBODAH, ::RPG::Client::OpenWorld::FadingImmediateFinishReason))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_NADKJDJKLDL_OFFSET))(this, a1, a2);
		}

		::System::Void GEEMPHBJHPD(::OGLAJJBODAH a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGLAJJBODAH))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_GEEMPHBJHPD_OFFSET))(this, a1);
		}

		::System::Boolean MIKJNDMEDNM(::OGLAJJBODAH a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OGLAJJBODAH))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_MIKJNDMEDNM_OFFSET))(this, a1);
		}

		::System::Boolean MJKJBEAGGMG(::BHHGMJKJIBJ* a1, ::OGLAJJBODAH a2, ::System::Boolean a3, ::RPG::Client::OpenWorld::FadingImmediateFinishReason a4, ::RPG::Client::OpenWorld::FadingPriority a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::BHHGMJKJIBJ*, ::OGLAJJBODAH, ::System::Boolean, ::RPG::Client::OpenWorld::FadingImmediateFinishReason, ::RPG::Client::OpenWorld::FadingPriority))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_MJKJBEAGGMG_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean KEJEIHELGNM(::BHHGMJKJIBJ* a1, ::RPG::Client::OpenWorld::FadingPriority a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::BHHGMJKJIBJ*, ::RPG::Client::OpenWorld::FadingPriority))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_KEJEIHELGNM_OFFSET))(this, a1, a2);
		}

		::System::Void FONCGJEEDMF(::BHHGMJKJIBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHHGMJKJIBJ*))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_FONCGJEEDMF_OFFSET))(this, a1);
		}

		::System::Void IGFAKILGPDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_IGFAKILGPDJ_OFFSET))(this);
		}

		::System::Void BPFHBMJCEAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_BPFHBMJCEAH_OFFSET))(this);
		}

		::System::Void HCENLOJJGAA(::BHHGMJKJIBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHHGMJKJIBJ*))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_HCENLOJJGAA_OFFSET))(this, a1);
		}

		::System::Void DIGFFBDFEBC(::BHHGMJKJIBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHHGMJKJIBJ*))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_DIGFFBDFEBC_OFFSET))(this, a1);
		}

		::System::Void OJFNCOFNBLK(::BHHGMJKJIBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHHGMJKJIBJ*))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_OJFNCOFNBLK_OFFSET))(this, a1);
		}

		::System::Int32 HDJEDDACJKH(::BHHGMJKJIBJ* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::BHHGMJKJIBJ*))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_HDJEDDACJKH_OFFSET))(this, a1);
		}

		::System::Void BKPCHKIKJKD(::BHHGMJKJIBJ* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::BHHGMJKJIBJ*, ::System::Int32))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_BKPCHKIKJKD_OFFSET))(this, a1, a2);
		}

		::System::Void EKEMMENOAGF(::BHHGMJKJIBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHHGMJKJIBJ*))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_EKEMMENOAGF_OFFSET))(this, a1);
		}

		::System::Boolean MBABMBBLADO(::BHHGMJKJIBJ* a1, ::RPG::Client::OpenWorld::FadingInvalidReason a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::BHHGMJKJIBJ*, ::RPG::Client::OpenWorld::FadingInvalidReason))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_MBABMBBLADO_OFFSET))(this, a1, a2);
		}

		::RPG::Client::OpenWorld::FadingConsequenceClass IDGNFNNJGHL(::HPKACEPPPCA* a1, ::BPBFCHPINDD_FadingDoneActionType a2)
		{
			return ((::RPG::Client::OpenWorld::FadingConsequenceClass(*)(::PVOID, ::HPKACEPPPCA*, ::BPBFCHPINDD_FadingDoneActionType))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_IDGNFNNJGHL_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::OpenWorld::FadingPriority BDMAKCIBEPH(::RPG::Client::OpenWorld::FadingConsequenceClass a1)
		{
			return ((::RPG::Client::OpenWorld::FadingPriority(*)(::RPG::Client::OpenWorld::FadingConsequenceClass))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_BDMAKCIBEPH_OFFSET))(a1);
		}

		static ::RPG::Client::OpenWorld::FadingPriority KLGANGOKPBA(::RPG::Client::OpenWorld::FadingConsequenceClass a1)
		{
			return ((::RPG::Client::OpenWorld::FadingPriority(*)(::RPG::Client::OpenWorld::FadingConsequenceClass))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_KLGANGOKPBA_OFFSET))(a1);
		}

		static ::RPG::Client::OpenWorld::FadingPriority PNOJKCIKMAD(::RPG::Client::OpenWorld::FadingConsequenceClass a1, ::RPG::Client::OpenWorld::FadingPriority a2)
		{
			return ((::RPG::Client::OpenWorld::FadingPriority(*)(::RPG::Client::OpenWorld::FadingConsequenceClass, ::RPG::Client::OpenWorld::FadingPriority))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_PNOJKCIKMAD_OFFSET))(a1, a2);
		}

		static ::RPG::Client::OpenWorld::FadingPriority DGCKOLHIAOF(::RPG::Client::OpenWorld::FadingPriority a1, ::RPG::Client::OpenWorld::FadingPriority a2)
		{
			return ((::RPG::Client::OpenWorld::FadingPriority(*)(::RPG::Client::OpenWorld::FadingPriority, ::RPG::Client::OpenWorld::FadingPriority))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_DGCKOLHIAOF_OFFSET))(a1, a2);
		}

		static ::System::Boolean AJHCEAGKBMD(::RPG::Client::OpenWorld::FadingPriority a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::OpenWorld::FadingPriority))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_AJHCEAGKBMD_OFFSET))(a1);
		}

		static ::System::Boolean NLEEMFPNOLC(::System::Collections::Generic::List_1<::BHHGMJKJIBJ*>* a1, ::BHHGMJKJIBJ* a2)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::BHHGMJKJIBJ*>*, ::BHHGMJKJIBJ*))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_NLEEMFPNOLC_OFFSET))(a1, a2);
		}

		static ::RPG::Client::OpenWorld::FadingSizeTier KKDNAHPBOGF(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::RPG::Client::OpenWorld::FadingSizeTier(*)(::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_KKDNAHPBOGF_OFFSET))(a1);
		}

		static ::System::Boolean NLAEDDMCJOM(::HPKACEPPPCA* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Boolean(*)(::HPKACEPPPCA*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_NLAEDDMCJOM_OFFSET))(a1, a2);
		}

		::RPG::Client::OpenWorld::FadingDistanceTier OPGOOLGLCFO(::BHHGMJKJIBJ* a1, ::OGLAJJBODAH a2)
		{
			return ((::RPG::Client::OpenWorld::FadingDistanceTier(*)(::PVOID, ::BHHGMJKJIBJ*, ::OGLAJJBODAH))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_OPGOOLGLCFO_OFFSET))(this, a1, a2);
		}

		::System::Boolean AIEKHJBBPBF(::BHHGMJKJIBJ* a1, ::System::Int32 a2, ::RPG::Client::OpenWorld::FadingLowRejectedReason a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::BHHGMJKJIBJ*, ::System::Int32, ::RPG::Client::OpenWorld::FadingLowRejectedReason))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_AIEKHJBBPBF_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Boolean KKBIHCPNDAL(::BHHGMJKJIBJ* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::BHHGMJKJIBJ*, ::System::Int32))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_KKBIHCPNDAL_OFFSET))(a1, a2);
		}

		::System::Boolean JMBHDCNOFJG(::RPG::Client::OpenWorld::FadingPriority a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::FadingPriority, ::System::Int32))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_JMBHDCNOFJG_OFFSET))(this, a1, a2);
		}

		::System::Boolean KLOBDLLOMJL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_KLOBDLLOMJL_OFFSET))(this);
		}

		::System::Int32 HFMHEIEALLE()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_HFMHEIEALLE_OFFSET))(this);
		}

		::System::Void KFGCOGKDLAM(::BHHGMJKJIBJ* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BHHGMJKJIBJ*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_KFGCOGKDLAM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EBOOKENLOOL(::BHHGMJKJIBJ* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BHHGMJKJIBJ*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_EBOOKENLOOL_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Boolean NBMPCBADGEI(::BHHGMJKJIBJ* a1)
		{
			return ((::System::Boolean(*)(::BHHGMJKJIBJ*))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_NBMPCBADGEI_OFFSET))(a1);
		}

		static ::System::Boolean ANNBMLHIFIJ(::BHHGMJKJIBJ* a1)
		{
			return ((::System::Boolean(*)(::BHHGMJKJIBJ*))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_ANNBMLHIFIJ_OFFSET))(a1);
		}

		static ::System::Boolean NFJOFDGCFJI(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_NFJOFDGCFJI_OFFSET))(a1, a2);
		}

		static ::System::Boolean FBIMDDBBIAF(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_FBIMDDBBIAF_OFFSET))(a1, a2);
		}

		static ::System::String* JJMOGJFOBBC(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_JJMOGJFOBBC_OFFSET))(a1);
		}

		static ::System::String* MCDKNOCIDCA(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_MCDKNOCIDCA_OFFSET))(a1, a2);
		}

		::System::Void NHHDBKCEBIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_NHHDBKCEBIL_OFFSET))(this);
		}

		::System::Void IFEAONBBEAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_IFEAONBBEAG_OFFSET))(this);
		}

		::System::Void BIDNENBACHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_BIDNENBACHH_OFFSET))(this);
		}

		static ::System::Void LFNJDLHLAPO(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_LFNJDLHLAPO_OFFSET))(a1);
		}

		::System::Void EKAKPNGEKNK(::RPG::Client::OpenWorld::FadingPriority a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::FadingPriority))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_EKAKPNGEKNK_OFFSET))(this, a1);
		}

		::System::Void KKEBEEJNILF(::RPG::Client::OpenWorld::FadingPriority a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::FadingPriority))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_KKEBEEJNILF_OFFSET))(this, a1);
		}

		::System::Void DFLIFOHKEGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_DFLIFOHKEGC_OFFSET))(this);
		}

		::System::Void BOFJABIMGLF(::RPG::Client::OpenWorld::FadingImmediateFinishReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::FadingImmediateFinishReason))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_BOFJABIMGLF_OFFSET))(this, a1);
		}

		::System::Void IAEHBBHCGDF(::RPG::Client::OpenWorld::FadingInvalidReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::FadingInvalidReason))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_IAEHBBHCGDF_OFFSET))(this, a1);
		}

		::System::Int32 DPCGMABBPGB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_DPCGMABBPGB_OFFSET))(this);
		}

		::System::Int32 IICOIHHAGFK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_IICOIHHAGFK_OFFSET))(this);
		}

		::System::Void NONBDLMNKAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_NONBDLMNKAP_OFFSET))(this);
		}

		::System::Void HFENOLGMDJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_HFENOLGMDJG_OFFSET))(this);
		}

		::System::Void MBBJMJDKELP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_MBBJMJDKELP_OFFSET))(this);
		}

		::System::Void DKLJHADJDFB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MEHCCAJLFIL_DKLJHADJDFB_OFFSET))(this, a1);
		}

	};
