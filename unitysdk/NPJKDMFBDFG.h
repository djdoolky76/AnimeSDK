#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/OutputType.h"
#include "unitysdk/EnviromentSystem/EnviromentPropertiesID.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/System/ValueTuple_2.h"
class AEKEIBNBMDJ;
class BDDAELGEKFF;
class CBEBICGIOAB;
class GGJFAFONDHN;
class NAMLDEFNHGN;
class ODGPPIHLOFF;
namespace EnviromentSystemV2Space { class EnvProfileV2; }
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace RPG::Client { template <typename T1, typename T2> class LRUCache_2; }
namespace RPG::Editor::EnvironmentSystemV2Editor { class EnvEditorBlock; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPJKDMFBDFG_AAOMDHJDEJC_OFFSET UNITYSDK_OFFSET(0xBCFF540)
#define NPJKDMFBDFG_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xBD05890)
#define NPJKDMFBDFG_ADCPJHNGAIC_OFFSET UNITYSDK_OFFSET(0xBD061A0)
#define NPJKDMFBDFG_AIBFIFJLICO_OFFSET UNITYSDK_OFFSET(0xBCFFC40)
#define NPJKDMFBDFG_AMABCKCOGKO_OFFSET UNITYSDK_OFFSET(0xBCFFA40)
#define NPJKDMFBDFG_BJMNIBBBDPM_OFFSET UNITYSDK_OFFSET(0xBD05E70)
#define NPJKDMFBDFG_BKGHFIMAPBI_OFFSET UNITYSDK_OFFSET(0xBD054A0)
#define NPJKDMFBDFG_BONFELEFJKB_OFFSET UNITYSDK_OFFSET(0xBD046F0)
#define NPJKDMFBDFG_BPPICJBCCFA_OFFSET UNITYSDK_OFFSET(0xBD090F0)
#define NPJKDMFBDFG_CCHBAOINMIM_OFFSET UNITYSDK_OFFSET(0xBD04660)
#define NPJKDMFBDFG_CCTOR_OFFSET UNITYSDK_OFFSET(0xBD0BA60)
#define NPJKDMFBDFG_CFGCJKBOIMH_OFFSET UNITYSDK_OFFSET(0xBD05E60)
#define NPJKDMFBDFG_CTOR_OFFSET UNITYSDK_OFFSET(0xBD0B510)
#define NPJKDMFBDFG_DJHGPEFNAKA_OFFSET UNITYSDK_OFFSET(0xBD096D0)
#define NPJKDMFBDFG_DKELOIFNFIP_OFFSET UNITYSDK_OFFSET(0xBD0B1C0)
#define NPJKDMFBDFG_DLFNPCKFMCN_1_OFFSET UNITYSDK_OFFSET(0xBD050E0)
#define NPJKDMFBDFG_DLFNPCKFMCN_OFFSET UNITYSDK_OFFSET(0xBD04DD0)
#define NPJKDMFBDFG_EAAPGDMDPEE_OFFSET UNITYSDK_OFFSET(0xBD00490)
#define NPJKDMFBDFG_EDMMGAANGOJ_OFFSET UNITYSDK_OFFSET(0xBD07B80)
#define NPJKDMFBDFG_EGANLCPJCBH_OFFSET UNITYSDK_OFFSET(0xBD06B30)
#define NPJKDMFBDFG_ELKGAPOHEJH_OFFSET UNITYSDK_OFFSET(0xBD06A70)
#define NPJKDMFBDFG_ENKFIBJFONB_OFFSET UNITYSDK_OFFSET(0xBD04730)
#define NPJKDMFBDFG_FAHBJGEDIIE_OFFSET UNITYSDK_OFFSET(0xBCFF9B0)
#define NPJKDMFBDFG_FBDGBFJOHLH_OFFSET UNITYSDK_OFFSET(0xBD049E0)
#define NPJKDMFBDFG_FMBGAKEIDNM_OFFSET UNITYSDK_OFFSET(0xBCFF3A0)
#define NPJKDMFBDFG_FNFJDNBHBKO_OFFSET UNITYSDK_OFFSET(0xBD06990)
#define NPJKDMFBDFG_FOICPKFMHAP_OFFSET UNITYSDK_OFFSET(0xBCFF300)
#define NPJKDMFBDFG_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0xBD05DE0)
#define NPJKDMFBDFG_HCJFJBPCAAC_OFFSET UNITYSDK_OFFSET(0xBCFF450)
#define NPJKDMFBDFG_HIHEFMEAGBL_OFFSET UNITYSDK_OFFSET(0xBD08FB0)
#define NPJKDMFBDFG_HJAEKBAFDDL_OFFSET UNITYSDK_OFFSET(0xBD055D0)
#define NPJKDMFBDFG_IABAAJOHCCI_OFFSET UNITYSDK_OFFSET(0xBD03F80)
#define NPJKDMFBDFG_IDHAJPPKBBI_OFFSET UNITYSDK_OFFSET(0xBD08240)
#define NPJKDMFBDFG_JIAGEAAJHJG_OFFSET UNITYSDK_OFFSET(0xBD06390)
#define NPJKDMFBDFG_JJNLLNKCGFL_OFFSET UNITYSDK_OFFSET(0xBD046B0)
#define NPJKDMFBDFG_JKLKJOFCBIG_OFFSET UNITYSDK_OFFSET(0xBD05FA0)
#define NPJKDMFBDFG_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBD05D90)
#define NPJKDMFBDFG_JMLBALHNICL_OFFSET UNITYSDK_OFFSET(0xBD09560)
#define NPJKDMFBDFG_KIKNGBPNBJN_OFFSET UNITYSDK_OFFSET(0xBD04050)
#define NPJKDMFBDFG_KINPKNHBLKK_OFFSET UNITYSDK_OFFSET(0xBD08890)
#define NPJKDMFBDFG_KJDDJBDMDOJ_OFFSET UNITYSDK_OFFSET(0xBCFF310)
#define NPJKDMFBDFG_KMKMBFPAINP_OFFSET UNITYSDK_OFFSET(0xBD06F30)
#define NPJKDMFBDFG_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBD05750)
#define NPJKDMFBDFG_MCJPJCDHKCO_OFFSET UNITYSDK_OFFSET(0xBD09F10)
#define NPJKDMFBDFG_MFHCGFBBHOO_OFFSET UNITYSDK_OFFSET(0xBD08F50)
#define NPJKDMFBDFG_MGFKLDNMADG_OFFSET UNITYSDK_OFFSET(0xBD05240)
#define NPJKDMFBDFG_MLCLHCOOAMI_OFFSET UNITYSDK_OFFSET(0xBD06F70)
#define NPJKDMFBDFG_MOCBMJNIGCL_OFFSET UNITYSDK_OFFSET(0xBD053A0)
#define NPJKDMFBDFG_NDANJBIJHMN_OFFSET UNITYSDK_OFFSET(0xBD051F0)
#define NPJKDMFBDFG_NIMLEGLMJGA_OFFSET UNITYSDK_OFFSET(0xBD093B0)
#define NPJKDMFBDFG_NKIELCMKFJG_OFFSET UNITYSDK_OFFSET(0xBCFFB80)
#define NPJKDMFBDFG_NLJNPDDLIIH_OFFSET UNITYSDK_OFFSET(0xBD05B50)
#define NPJKDMFBDFG_NLKAEKLJOAA_OFFSET UNITYSDK_OFFSET(0xBD04330)
#define NPJKDMFBDFG_NMFGCDECEFL_OFFSET UNITYSDK_OFFSET(0xBD068E0)
#define NPJKDMFBDFG_OJAHAFFFKPC_OFFSET UNITYSDK_OFFSET(0xBD0B270)
#define NPJKDMFBDFG_OPGMGEDGJIM_OFFSET UNITYSDK_OFFSET(0xBCFFB10)
#define NPJKDMFBDFG_PBLNMLFOAFP_OFFSET UNITYSDK_OFFSET(0xBD02800)
#define NPJKDMFBDFG_PGGAKMIIFHL_OFFSET UNITYSDK_OFFSET(0xBD06570)
#define NPJKDMFBDFG_PPABMJFMOHN_OFFSET UNITYSDK_OFFSET(0xBD09650)
#define NPJKDMFBDFG_PPFIMGLNLMG_OFFSET UNITYSDK_OFFSET(0xBD08F60)

inline static constexpr unsigned int NPJKDMFBDFG_TypeDefinitionIndex = 49427;

	class NPJKDMFBDFG
	{
	public:
		::System::Collections::Generic::Dictionary_2<::EnviromentSystem::EnviromentPropertiesID, ::System::String*>* JAFOHFGNLDJ; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* NHILOAEGDJD; // 0x18
		::BDDAELGEKFF* EECNIMFMEPO; // 0x20
		::RPG::Client::LRUCache_2<::System::String*, ::System::Tuple_2<::System::String*, ::EnviromentSystemV2Space::EnvProfileV2*>*>* PAFOEGDMBKK; // 0x28
		::System::Collections::Generic::List_1<::AEKEIBNBMDJ*>* IFNMCHPBMDN; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::GGJFAFONDHN*>* BHJILPLENLK; // 0x38
		::NAMLDEFNHGN* MIGMCEDIPPH; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* ACBMMCJOCMO; // 0x48
		::System::Collections::Generic::HashSet_1<::System::String*>* HIAKKGBPGAC; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* DOBMODIBDPI; // 0x58
		::System::Collections::Generic::List_1<::System::Object*>* EMMMKHJIDAL; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::GGJFAFONDHN*>*>* LNMDFOPBCGL; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Collections::Generic::List_1<::System::String*>*>* LOKCABDKPLB; // 0x70
		::System::Collections::Generic::Dictionary_2<::EnviromentSystem::EnviromentPropertiesID, ::System::Int32>* AKFKOIJKAMM; // 0x78
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EnviromentControlPriority, ::System::String*>* HFCDFGBDPGC; // 0x80
		static ::System::Collections::Generic::Dictionary_2<::EnviromentSystem::EnviromentPropertiesID, ::System::ValueTuple_2<::System::String*, ::System::String*>>** StaticGet_NCIMBBDFJFD()
		{
			return (::System::Collections::Generic::Dictionary_2<::EnviromentSystem::EnviromentPropertiesID, ::System::ValueTuple_2<::System::String*, ::System::String*>>**)UnitySDK::FromName("", "NPJKDMFBDFG")->GetStaticField(0x59030);
		}

		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_NGABLGIOIBF()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)UnitySDK::FromName("", "NPJKDMFBDFG")->GetStaticField(0x59038);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_JOHJPPOFKHL()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)UnitySDK::FromName("", "NPJKDMFBDFG")->GetStaticField(0x59040);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_BKBCEJDEFGH()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)UnitySDK::FromName("", "NPJKDMFBDFG")->GetStaticField(0x59048);
		}

		static ::System::Boolean* StaticGet_ALPCEHOGGOG()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NPJKDMFBDFG")->GetStaticField(0x13AC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPJKDMFBDFG_CCTOR_OFFSET))();
		}

		::BDDAELGEKFF* FOICPKFMHAP()
		{
			return ((::BDDAELGEKFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_FOICPKFMHAP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* KJDDJBDMDOJ()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_KJDDJBDMDOJ_OFFSET))(this);
		}

		::System::Void FMBGAKEIDNM(::RPG::GameCore::EnviromentControlPriority a1, ::System::String* a2, ::GGJFAFONDHN* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::System::String*, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_FMBGAKEIDNM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AMABCKCOGKO(::GGJFAFONDHN* a1, ::GGJFAFONDHN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GGJFAFONDHN*, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_AMABCKCOGKO_OFFSET))(this, a1, a2);
		}

		::System::Void OPGMGEDGJIM(::GGJFAFONDHN* a1, ::GGJFAFONDHN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GGJFAFONDHN*, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_OPGMGEDGJIM_OFFSET))(this, a1, a2);
		}

		::System::Void AAOMDHJDEJC(::System::String* a1, ::GGJFAFONDHN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_AAOMDHJDEJC_OFFSET))(this, a1, a2);
		}

		::System::Void FAHBJGEDIIE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_FAHBJGEDIIE_OFFSET))(this, a1);
		}

		::System::Int32 NKIELCMKFJG(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_NKIELCMKFJG_OFFSET))(this, a1);
		}

		static ::System::Void AIBFIFJLICO(::System::Collections::Generic::List_1<::RPG::Editor::EnvironmentSystemV2Editor::EnvEditorBlock*>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::Editor::EnvironmentSystemV2Editor::EnvEditorBlock*>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_AIBFIFJLICO_OFFSET))(a1, a2);
		}

		::System::Boolean EAAPGDMDPEE(::System::String* a1, ::EnviromentSystemV2Space::EnvProfileV2* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::EnviromentSystemV2Space::EnvProfileV2*))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_EAAPGDMDPEE_OFFSET))(this, a1, a2);
		}

		::System::Void PBLNMLFOAFP(::System::String* a1, ::EnviromentSystemV2Space::EnvProfileV2* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::EnviromentSystemV2Space::EnvProfileV2*))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_PBLNMLFOAFP_OFFSET))(this, a1, a2);
		}

		::RPG::Client::IAssetOperation* IABAAJOHCCI(::System::String* a1, ::RPG::Client::OnAssetOperationDelegate* a2)
		{
			return ((::RPG::Client::IAssetOperation*(*)(::PVOID, ::System::String*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_IABAAJOHCCI_OFFSET))(this, a1, a2);
		}

		::EnviromentSystemV2Space::EnvProfileV2* KIKNGBPNBJN(::System::String* a1, ::System::Boolean a2)
		{
			return ((::EnviromentSystemV2Space::EnvProfileV2*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_KIKNGBPNBJN_OFFSET))(this, a1, a2);
		}

		::System::Void NLKAEKLJOAA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_NLKAEKLJOAA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::EnviromentControlPriority, ::System::String*>* CCHBAOINMIM()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::EnviromentControlPriority, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_CCHBAOINMIM_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>* JJNLLNKCGFL()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_JJNLLNKCGFL_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::String*>* BONFELEFJKB()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_BONFELEFJKB_OFFSET))(this);
		}

		::System::Void ENKFIBJFONB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_ENKFIBJFONB_OFFSET))(this);
		}

		::System::Void FBDGBFJOHLH(::System::String* a1, ::RPG::GameCore::EnviromentControlPriority a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_FBDGBFJOHLH_OFFSET))(this, a1, a2);
		}

		::System::Void DLFNPCKFMCN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_DLFNPCKFMCN_OFFSET))(this, a1);
		}

		::System::Void DLFNPCKFMCN_1(::RPG::GameCore::EnviromentControlPriority a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_DLFNPCKFMCN_1_OFFSET))(this, a1);
		}

		::System::String* NDANJBIJHMN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_NDANJBIJHMN_OFFSET))(this);
		}

		::System::String* MGFKLDNMADG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_MGFKLDNMADG_OFFSET))(this);
		}

		::System::String* MOCBMJNIGCL(::RPG::GameCore::EnviromentControlPriority a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_MOCBMJNIGCL_OFFSET))(this, a1);
		}

		::RPG::GameCore::EnviromentControlPriority BKGHFIMAPBI()
		{
			return ((::RPG::GameCore::EnviromentControlPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_BKGHFIMAPBI_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::GGJFAFONDHN*>* HJAEKBAFDDL(::System::String* a1)
		{
			return ((::System::Collections::Generic::List_1<::GGJFAFONDHN*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_HJAEKBAFDDL_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void HCCKBPDFINA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_HCCKBPDFINA_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::GGJFAFONDHN*>* CFGCJKBOIMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::GGJFAFONDHN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_CFGCJKBOIMH_OFFSET))(this);
		}

		::System::Void BJMNIBBBDPM(::GGJFAFONDHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_BJMNIBBBDPM_OFFSET))(this, a1);
		}

		::System::Void NLJNPDDLIIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_NLJNPDDLIIH_OFFSET))(this);
		}

		::ODGPPIHLOFF* JKLKJOFCBIG(::System::String* a1, ::RPG::GameCore::EnviromentControlPriority a2, ::CBEBICGIOAB* a3, ::EnviromentSystemV2Space::OutputType a4, ::System::Action* a5)
		{
			return ((::ODGPPIHLOFF*(*)(::PVOID, ::System::String*, ::RPG::GameCore::EnviromentControlPriority, ::CBEBICGIOAB*, ::EnviromentSystemV2Space::OutputType, ::System::Action*))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_JKLKJOFCBIG_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::ODGPPIHLOFF* ADCPJHNGAIC(::System::String* a1, ::System::Collections::Generic::List_1<::GGJFAFONDHN*>* a2, ::RPG::GameCore::EnviromentControlPriority a3, ::EnviromentSystemV2Space::OutputType a4, ::CBEBICGIOAB* a5, ::System::Action* a6)
		{
			return ((::ODGPPIHLOFF*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::GGJFAFONDHN*>*, ::RPG::GameCore::EnviromentControlPriority, ::EnviromentSystemV2Space::OutputType, ::CBEBICGIOAB*, ::System::Action*))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_ADCPJHNGAIC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::ODGPPIHLOFF* JIAGEAAJHJG(::RPG::GameCore::EnviromentControlPriority a1, ::System::Boolean a2, ::CBEBICGIOAB* a3, ::EnviromentSystemV2Space::OutputType a4, ::System::Action* a5, ::System::Boolean a6)
		{
			return ((::ODGPPIHLOFF*(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::System::Boolean, ::CBEBICGIOAB*, ::EnviromentSystemV2Space::OutputType, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_JIAGEAAJHJG_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void PGGAKMIIFHL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_PGGAKMIIFHL_OFFSET))(this, a1);
		}

		::System::Void ELKGAPOHEJH(::System::String* a1, ::RPG::GameCore::EnviromentControlPriority a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_ELKGAPOHEJH_OFFSET))(this, a1, a2);
		}

		::System::Void NMFGCDECEFL(::RPG::GameCore::EnviromentControlPriority a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::System::Boolean))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_NMFGCDECEFL_OFFSET))(this, a1, a2);
		}

		::ODGPPIHLOFF* FNFJDNBHBKO(::CBEBICGIOAB* a1, ::EnviromentSystemV2Space::OutputType a2, ::System::Boolean a3, ::System::Action* a4)
		{
			return ((::ODGPPIHLOFF*(*)(::PVOID, ::CBEBICGIOAB*, ::EnviromentSystemV2Space::OutputType, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_FNFJDNBHBKO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EGANLCPJCBH(::System::String* a1, ::System::Collections::Generic::List_1<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_EGANLCPJCBH_OFFSET))(this, a1, a2);
		}

		::System::Void KMKMBFPAINP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_KMKMBFPAINP_OFFSET))(this);
		}

		::ODGPPIHLOFF* MLCLHCOOAMI(::System::String* a1, ::System::Boolean a2)
		{
			return ((::ODGPPIHLOFF*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_MLCLHCOOAMI_OFFSET))(this, a1, a2);
		}

		::System::Int32 IDHAJPPKBBI(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_IDHAJPPKBBI_OFFSET))(this, a1);
		}

		::ODGPPIHLOFF* KINPKNHBLKK(::System::String* a1, ::System::Boolean a2)
		{
			return ((::ODGPPIHLOFF*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_KINPKNHBLKK_OFFSET))(this, a1, a2);
		}

		::ODGPPIHLOFF* EDMMGAANGOJ(::System::String* a1)
		{
			return ((::ODGPPIHLOFF*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_EDMMGAANGOJ_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::AEKEIBNBMDJ*>* MFHCGFBBHOO()
		{
			return ((::System::Collections::Generic::List_1<::AEKEIBNBMDJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_MFHCGFBBHOO_OFFSET))(this);
		}

		::System::Int32 PPFIMGLNLMG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_PPFIMGLNLMG_OFFSET))(this);
		}

		::AEKEIBNBMDJ* HIHEFMEAGBL(::System::String* a1)
		{
			return ((::AEKEIBNBMDJ*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_HIHEFMEAGBL_OFFSET))(this, a1);
		}

		::System::Void BPPICJBCCFA(::System::String* a1, ::AEKEIBNBMDJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::AEKEIBNBMDJ*))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_BPPICJBCCFA_OFFSET))(this, a1, a2);
		}

		::System::Void NIMLEGLMJGA(::System::String* a1, ::AEKEIBNBMDJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::AEKEIBNBMDJ*))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_NIMLEGLMJGA_OFFSET))(this, a1, a2);
		}

		::System::String* JMLBALHNICL(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_JMLBALHNICL_OFFSET))(this, a1);
		}

		::System::Int32 HCJFJBPCAAC(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_HCJFJBPCAAC_OFFSET))(this, a1);
		}

		::System::Void PPABMJFMOHN(::RPG::GameCore::EnviromentControlPriority a1, ::System::Collections::Generic::List_1<::GGJFAFONDHN*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::System::Collections::Generic::List_1<::GGJFAFONDHN*>*))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_PPABMJFMOHN_OFFSET))(this, a1, a2);
		}

		::System::Void DJHGPEFNAKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_DJHGPEFNAKA_OFFSET))(this);
		}

		::System::Void MCJPJCDHKCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_MCJPJCDHKCO_OFFSET))(this);
		}

		::System::Int32 DKELOIFNFIP(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::System::Int32(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_DKELOIFNFIP_OFFSET))(this, a1);
		}

		::System::String* OJAHAFFFKPC(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::System::String*(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_OJAHAFFFKPC_OFFSET))(this, a1);
		}

	};
