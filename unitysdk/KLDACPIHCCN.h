#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KLDACPIHCCN_ColumeType.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/System/Object.h"
class EKFMIDBJDIA;
class KLDACPIHCCN_DFIDIAFMJLJ;
class OKMFBOJPIDA;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class BattleLineupData; }
namespace RPG::GameCore { class CSVRow; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KLDACPIHCCN_AGGABFFAALH_OFFSET UNITYSDK_OFFSET(0xBD2EF50)
#define KLDACPIHCCN_AJMGLEKMCDA_OFFSET UNITYSDK_OFFSET(0xBD32A00)
#define KLDACPIHCCN_BEGIJGKKGGN_OFFSET UNITYSDK_OFFSET(0xBD30EE0)
#define KLDACPIHCCN_BEHEOFOELIJ_OFFSET UNITYSDK_OFFSET(0xBD34C80)
#define KLDACPIHCCN_BMEAMNFOBHP_OFFSET UNITYSDK_OFFSET(0xBD306B0)
#define KLDACPIHCCN_CAOOGHMLHLJ_OFFSET UNITYSDK_OFFSET(0xBD2C8C0)
#define KLDACPIHCCN_CBMCHDLKOCH_OFFSET UNITYSDK_OFFSET(0xBD2EB70)
#define KLDACPIHCCN_CCTOR_OFFSET UNITYSDK_OFFSET(0xBD353D0)
#define KLDACPIHCCN_CDACPOHMLOO_OFFSET UNITYSDK_OFFSET(0xBD349C0)
#define KLDACPIHCCN_CGIMEKILACO_OFFSET UNITYSDK_OFFSET(0xBD32DD0)
#define KLDACPIHCCN_CKLPLNHMCEN_OFFSET UNITYSDK_OFFSET(0xBD366D0)
#define KLDACPIHCCN_CTOR_OFFSET UNITYSDK_OFFSET(0xBD36880)
#define KLDACPIHCCN_DDMPOILJHEM_OFFSET UNITYSDK_OFFSET(0xBD335B0)
#define KLDACPIHCCN_DGENCNOGOIH_OFFSET UNITYSDK_OFFSET(0xBD2EED0)
#define KLDACPIHCCN_DKKCICDOCIP_OFFSET UNITYSDK_OFFSET(0xBD2F940)
#define KLDACPIHCCN_FCHOMKBNHKK_OFFSET UNITYSDK_OFFSET(0xBD311D0)
#define KLDACPIHCCN_FDKLCPOPMDJ_OFFSET UNITYSDK_OFFSET(0xBD2F0E0)
#define KLDACPIHCCN_FHIHGFGECKF_OFFSET UNITYSDK_OFFSET(0xBD30A70)
#define KLDACPIHCCN_FJFBCCOIGAB_OFFSET UNITYSDK_OFFSET(0xBD2C780)
#define KLDACPIHCCN_FNAHJHCFOGM_OFFSET UNITYSDK_OFFSET(0xBD2F270)
#define KLDACPIHCCN_GCPMCADGIOF_OFFSET UNITYSDK_OFFSET(0xBD36660)
#define KLDACPIHCCN_GFPFPEBCMNK_OFFSET UNITYSDK_OFFSET(0xBD30890)
#define KLDACPIHCCN_GHGCOHDBFMB_OFFSET UNITYSDK_OFFSET(0xBD2C740)
#define KLDACPIHCCN_GIBIJDMMDPL_OFFSET UNITYSDK_OFFSET(0xBD339D0)
#define KLDACPIHCCN_GJDLBPANDNB_OFFSET UNITYSDK_OFFSET(0xBD367E0)
#define KLDACPIHCCN_GPJDHKKNIMA_OFFSET UNITYSDK_OFFSET(0xBD31270)
#define KLDACPIHCCN_HIICJIECGAF_OFFSET UNITYSDK_OFFSET(0xBD33FC0)
#define KLDACPIHCCN_HLLPIAEANAN_OFFSET UNITYSDK_OFFSET(0xBD2E890)
#define KLDACPIHCCN_IMFAJJKLKMK_OFFSET UNITYSDK_OFFSET(0xBD33BA0)
#define KLDACPIHCCN_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0xBD2BE10)
#define KLDACPIHCCN_JPCPIBILKHH_OFFSET UNITYSDK_OFFSET(0xBD33080)
#define KLDACPIHCCN_KIHBGILJFDF_OFFSET UNITYSDK_OFFSET(0xBD33350)
#define KLDACPIHCCN_KJHHGEOHABL_OFFSET UNITYSDK_OFFSET(0xBD351F0)
#define KLDACPIHCCN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBD2B1D0)
#define KLDACPIHCCN_LDNOHFIJOKE_OFFSET UNITYSDK_OFFSET(0xBD2BD40)
#define KLDACPIHCCN_LEGGKAKIEBN_OFFSET UNITYSDK_OFFSET(0xBD36770)
#define KLDACPIHCCN_LEJNPHIFBCF_OFFSET UNITYSDK_OFFSET(0xBD2E6C0)
#define KLDACPIHCCN_LLELCDFAHMJ_OFFSET UNITYSDK_OFFSET(0xBD346A0)
#define KLDACPIHCCN_LNMFKILDNHB_OFFSET UNITYSDK_OFFSET(0xBD301F0)
#define KLDACPIHCCN_LPMNDPIBLFB_OFFSET UNITYSDK_OFFSET(0xBD2D060)
#define KLDACPIHCCN_MIKKALPDBLB_OFFSET UNITYSDK_OFFSET(0xBD32E60)
#define KLDACPIHCCN_MKIMFLLIFNN_OFFSET UNITYSDK_OFFSET(0xBD34ED0)
#define KLDACPIHCCN_OGBNEALJIFE_OFFSET UNITYSDK_OFFSET(0xBD2E850)
#define KLDACPIHCCN_PDBGPLJEDFD_OFFSET UNITYSDK_OFFSET(0xBD32680)
#define KLDACPIHCCN_PDCAEFHOCIK_OFFSET UNITYSDK_OFFSET(0xBD30F30)
#define KLDACPIHCCN_PDLCAOLJMPP_OFFSET UNITYSDK_OFFSET(0xBD32FF0)
#define KLDACPIHCCN_PHLNIMGKENI_OFFSET UNITYSDK_OFFSET(0xBD2CCA0)
#define KLDACPIHCCN_PKNEKNFCPOA_OFFSET UNITYSDK_OFFSET(0xBD341D0)
#define KLDACPIHCCN_PMANDBLKLED_OFFSET UNITYSDK_OFFSET(0xBD34390)
#define KLDACPIHCCN___ONLIGHTCHARACTERCREATE_G___CONCATBUILDDATA_28_0_OFFSET UNITYSDK_OFFSET(0xBD32660)

inline static constexpr unsigned int KLDACPIHCCN_TypeDefinitionIndex = 57419;

	class KLDACPIHCCN : public ::System::Object
	{
	public:
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x10
		::System::String* JLPFONFICNK; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* GBOFGEEPFCM; // 0x20
		static ::Il2CppArray<::RPG::GameCore::AbilityProperty>** StaticGet_NOHHEJMBMCO()
		{
			return (::Il2CppArray<::RPG::GameCore::AbilityProperty>**)UnitySDK::FromName("", "KLDACPIHCCN")->GetStaticField(0x4F950);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_MDAMKDHCBMO()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KLDACPIHCCN")->GetStaticField(0x4F958);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_PDKAECMJECD()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KLDACPIHCCN")->GetStaticField(0x4F960);
		}

		static ::System::String** StaticGet_BFJPPJDBBMA()
		{
			return (::System::String**)UnitySDK::FromName("", "KLDACPIHCCN")->GetStaticField(0x4F968);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_OJMKGEFKMOM()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)UnitySDK::FromName("", "KLDACPIHCCN")->GetStaticField(0x4F970);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_GLFANIFAMOO()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KLDACPIHCCN")->GetStaticField(0x4F978);
		}

		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_EHDLHKBFLHG()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)UnitySDK::FromName("", "KLDACPIHCCN")->GetStaticField(0x4F980);
		}

		static ::Il2CppArray<::RPG::GameCore::AbilityProperty>** StaticGet_GCFJMINLDFP()
		{
			return (::Il2CppArray<::RPG::GameCore::AbilityProperty>**)UnitySDK::FromName("", "KLDACPIHCCN")->GetStaticField(0x4F988);
		}

		static ::System::String** StaticGet_JOILJOCPKDE()
		{
			return (::System::String**)UnitySDK::FromName("", "KLDACPIHCCN")->GetStaticField(0x4F990);
		}

		static ::System::String** StaticGet_NDMBBNJPGGB()
		{
			return (::System::String**)UnitySDK::FromName("", "KLDACPIHCCN")->GetStaticField(0x4F998);
		}

		static ::System::Collections::Generic::SortedList_2<::System::Int32, ::System::String*>** StaticGet_BMFKEHONEFH()
		{
			return (::System::Collections::Generic::SortedList_2<::System::Int32, ::System::String*>**)UnitySDK::FromName("", "KLDACPIHCCN")->GetStaticField(0x4F9A0);
		}

		// static const ::System::String* PCIMCJGPAEI; // 0x0
		// static const ::System::String* GKDBBPCHGOG; // 0x0
		// static const ::System::String* LFPGLDENDEM; // 0x0
		// static const ::System::String* BMLAMNOOGCN; // 0x0
		// static const ::System::String* LKGMNOKKFHK; // 0x0
		// static const ::System::String* MCLPNDHABBB; // 0x0
		// static const ::System::String* DHMGGCCFKPH; // 0x0
		// static const ::System::String* JLCNNHMLJNH; // 0x0
		// static const ::System::String* HOHNLKFFBFN; // 0x0
		// static const ::System::String* NJADGNPDNLJ; // 0x0
		// static const ::System::String* MBFCHFHBKFO; // 0x0
		// static const ::System::String* LEGEPHAPCLI; // 0x0
		// static const ::System::String* KIPAFLELKKA; // 0x0
		// static const ::System::String* CDJADKLOHDI; // 0x0
		// static const ::System::String* KGBCFEIJHOA; // 0x0
		// static const ::System::String* LALOBIAEOLC; // 0x0
		// static const ::System::String* MKFMCLIDBIM; // 0x0
		// static const ::System::String* JOFLCFBJFOK; // 0x0
		// static const ::System::String* MOJPDDAOIMM; // 0x0
		// static const ::System::String* HHMEHOCPEPA; // 0x0
		// static const ::System::String* KEJGCDHMGDD; // 0x0
		// static const ::System::String* LKEKLMHDBAL; // 0x0
		// static const ::System::String* BKAKPIALGLF; // 0x0
		// static const ::System::String* CBLLMPHPGIC; // 0x0
		// static const ::System::String* PAOENFNNBOK; // 0x0
		// static const ::System::String* KGNCKCMHMJK; // 0x0
		// static const ::System::String* JBNIAKPOAMG; // 0x0
		// static const ::System::String* PGDKAJLHBDA; // 0x0
		// static const ::System::String* MLHILPLHIHO; // 0x0
		// static const ::System::String* AHFKGICOODI; // 0x0
		// static const ::System::String* IPHIKMLGKOB; // 0x0
		// static const ::System::String* BCHAMFJBICH; // 0x0
		// static const ::System::String* HLMPEPEEDGI; // 0x0
		// static const ::System::String* FFPGMJGCEEP; // 0x0
		// static const ::System::String* KHEJKCBCAKO; // 0x0
		// static const ::System::String* DGAAHCCKGHH; // 0x0
		// static const ::System::String* OGJHDOEBJEP; // 0x0
		// static const ::System::String* KOJGKAHMBOH; // 0x0
		// static const ::System::String* JHOJKKDPLLH; // 0x0
		// static const ::System::String* CDDKAPDCBAM; // 0x0
		// static const ::System::String* DKBACPDPNBE; // 0x0
		// static const ::System::String* NCFPGLLNNNL; // 0x0
		// static const ::System::String* MAMNNLDILBL; // 0x0
		// static const ::System::String* EKLCEEDJIOF; // 0x0
		// static const ::System::String* CPJKDNDNJPF; // 0x0
		// static const ::System::String* JMHPIECCOHK; // 0x0
		// static const ::System::String* AMHLCJFJHFB; // 0x0
		// static const ::System::String* DJHIEEJLDFC; // 0x0
		// static const ::System::String* GGPHOOEGGOM; // 0x0
		// static const ::System::String* AKPGNEEDFGE; // 0x0
		// static const ::System::String* HACMIMBDEAA; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLDACPIHCCN_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDACPIHCCN_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::BattleInstance* a1, ::RPG::GameCore::BattleLineupData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*, ::RPG::GameCore::BattleLineupData*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void JKCPLEJCBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDACPIHCCN_JKCPLEJCBML_OFFSET))(this);
		}

		::System::String* GHGCOHDBFMB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDACPIHCCN_GHGCOHDBFMB_OFFSET))(this);
		}

		::System::Void LDNOHFIJOKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDACPIHCCN_LDNOHFIJOKE_OFFSET))(this);
		}

		::System::Void FJFBCCOIGAB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_FJFBCCOIGAB_OFFSET))(this, a1);
		}

		::System::Void PHLNIMGKENI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KLDACPIHCCN_PHLNIMGKENI_OFFSET))(this, a1);
		}

		::System::Boolean CAOOGHMLHLJ(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_CAOOGHMLHLJ_OFFSET))(this, a1);
		}

		static ::OKMFBOJPIDA* LEJNPHIFBCF(::System::Collections::Generic::List_1<::System::Object*>* a1)
		{
			return ((::OKMFBOJPIDA*(*)(::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_LEJNPHIFBCF_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::System::Object*>* OGBNEALJIFE()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDACPIHCCN_OGBNEALJIFE_OFFSET))(this);
		}

		static ::System::String* HLLPIAEANAN(::KLDACPIHCCN_ColumeType a1, ::RPG::GameCore::AbilityProperty a2)
		{
			return ((::System::String*(*)(::KLDACPIHCCN_ColumeType, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + KLDACPIHCCN_HLLPIAEANAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean CBMCHDLKOCH(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_CBMCHDLKOCH_OFFSET))(a1, a2);
		}

		static ::System::Void LPMNDPIBLFB(::RPG::GameCore::CSVRow* a1, ::KLDACPIHCCN_DFIDIAFMJLJ* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::CSVRow*, ::KLDACPIHCCN_DFIDIAFMJLJ*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_LPMNDPIBLFB_OFFSET))(a1, a2);
		}

		static ::System::Void DGENCNOGOIH(::RPG::GameCore::CSVRow* a1, ::KLDACPIHCCN_DFIDIAFMJLJ* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::CSVRow*, ::KLDACPIHCCN_DFIDIAFMJLJ*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_DGENCNOGOIH_OFFSET))(a1, a2);
		}

		static ::System::Void FDKLCPOPMDJ(::RPG::GameCore::CSVRow* a1, ::KLDACPIHCCN_DFIDIAFMJLJ* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::CSVRow*, ::KLDACPIHCCN_DFIDIAFMJLJ*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_FDKLCPOPMDJ_OFFSET))(a1, a2);
		}

		static ::System::Void AGGABFFAALH(::RPG::GameCore::CSVRow* a1, ::KLDACPIHCCN_DFIDIAFMJLJ* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::CSVRow*, ::KLDACPIHCCN_DFIDIAFMJLJ*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_AGGABFFAALH_OFFSET))(a1, a2);
		}

		::System::Void FNAHJHCFOGM(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_FNAHJHCFOGM_OFFSET))(this, a1);
		}

		::System::Void DKKCICDOCIP(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_DKKCICDOCIP_OFFSET))(this, a1);
		}

		::System::Void LNMFKILDNHB(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_LNMFKILDNHB_OFFSET))(this, a1);
		}

		::System::Void BMEAMNFOBHP(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_BMEAMNFOBHP_OFFSET))(this, a1);
		}

		::System::Void GFPFPEBCMNK(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_GFPFPEBCMNK_OFFSET))(this, a1);
		}

		::System::Void FHIHGFGECKF(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_FHIHGFGECKF_OFFSET))(this, a1);
		}

		::System::Void BEGIJGKKGGN(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_BEGIJGKKGGN_OFFSET))(this, a1);
		}

		::System::Void PDCAEFHOCIK(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_PDCAEFHOCIK_OFFSET))(this, a1);
		}

		static ::System::UInt32 FCHOMKBNHKK(::RPG::GameCore::TurnBasedGameMode* a1)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_FCHOMKBNHKK_OFFSET))(a1);
		}

		::System::Void GPJDHKKNIMA(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_GPJDHKKNIMA_OFFSET))(this, a1);
		}

		::System::Void PDBGPLJEDFD(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_PDBGPLJEDFD_OFFSET))(this, a1);
		}

		::System::Void AJMGLEKMCDA(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_AJMGLEKMCDA_OFFSET))(this, a1);
		}

		::System::Void CGIMEKILACO(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_CGIMEKILACO_OFFSET))(this, a1);
		}

		::System::Void PDLCAOLJMPP(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_PDLCAOLJMPP_OFFSET))(this, a1);
		}

		::System::Void MIKKALPDBLB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_MIKKALPDBLB_OFFSET))(this, a1);
		}

		::System::Void JPCPIBILKHH(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_JPCPIBILKHH_OFFSET))(this, a1);
		}

		::System::Void KIHBGILJFDF(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_KIHBGILJFDF_OFFSET))(this, a1);
		}

		::System::Void DDMPOILJHEM(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_DDMPOILJHEM_OFFSET))(this, a1);
		}

		::System::Void GIBIJDMMDPL(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_GIBIJDMMDPL_OFFSET))(this, a1);
		}

		::System::Void IMFAJJKLKMK(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_IMFAJJKLKMK_OFFSET))(this, a1);
		}

		::System::Void HIICJIECGAF(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_HIICJIECGAF_OFFSET))(this, a1);
		}

		::System::Void PKNEKNFCPOA(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_PKNEKNFCPOA_OFFSET))(this, a1);
		}

		::System::Void PMANDBLKLED(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_PMANDBLKLED_OFFSET))(this, a1);
		}

		::System::Void LLELCDFAHMJ(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_LLELCDFAHMJ_OFFSET))(this, a1);
		}

		::System::Void CDACPOHMLOO(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_CDACPOHMLOO_OFFSET))(this, a1);
		}

		::System::Void BEHEOFOELIJ(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_BEHEOFOELIJ_OFFSET))(this, a1);
		}

		::System::Void MKIMFLLIFNN(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_MKIMFLLIFNN_OFFSET))(this, a1);
		}

		::System::Void KJHHGEOHABL(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + KLDACPIHCCN_KJHHGEOHABL_OFFSET))(this, a1);
		}

		static ::System::Boolean GCPMCADGIOF()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KLDACPIHCCN_GCPMCADGIOF_OFFSET))();
		}

		static ::System::Void CKLPLNHMCEN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + KLDACPIHCCN_CKLPLNHMCEN_OFFSET))(a1);
		}

		static ::System::Boolean LEGGKAKIEBN()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KLDACPIHCCN_LEGGKAKIEBN_OFFSET))();
		}

		static ::System::Void GJDLBPANDNB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + KLDACPIHCCN_GJDLBPANDNB_OFFSET))(a1);
		}

		static ::System::String* __OnLightCharacterCreate_g___ConcatBuildData_28_0(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + KLDACPIHCCN___ONLIGHTCHARACTERCREATE_G___CONCATBUILDDATA_28_0_OFFSET))(a1);
		}

	};
