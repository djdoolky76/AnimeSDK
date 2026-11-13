#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BPBFCHPINDD_FadingDoneActionType.h"
#include "unitysdk/PJPIEKNGCMC.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingItemEnableReason.h"
#include "unitysdk/RPG/GameCore/StreamingLayerType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/GEEOPFIMJEM.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/UnityEngine/Bounds.h"
class APLEMBNFLAA;
class BJBDLDCDDJH;
class ENLBPLPOGMF;
class HPKACEPPPCA;
class INCHEAIJPMD;
class KLEFGGIHGMI;
class LJFHKAJPFNE;
class NNGLODINPCK;
class OIDDJJLHGKO;
class PMLOPPBCMKB;
namespace Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2; }
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace RPG::Client::OpenWorld { class Volume; }
namespace RPG::Client::OpenWorld { template <typename T> class AOIBase_1; }
namespace RPG::GameCore { class BlockNodeConfig; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define GDMONJOAKHD_AGEIDNHECPA_OFFSET UNITYSDK_OFFSET(0x17CB1AA0)
#define GDMONJOAKHD_AHLJAAHIMLG_OFFSET UNITYSDK_OFFSET(0x17CB9890)
#define GDMONJOAKHD_AKJLOCJBFKD_OFFSET UNITYSDK_OFFSET(0x17CAAB60)
#define GDMONJOAKHD_ALBEJGHIMDF_OFFSET UNITYSDK_OFFSET(0x17CB80F0)
#define GDMONJOAKHD_ALEJANAODJJ_OFFSET UNITYSDK_OFFSET(0x17CB2AB0)
#define GDMONJOAKHD_AOCNLMCACAN_OFFSET UNITYSDK_OFFSET(0x17CAFE40)
#define GDMONJOAKHD_AONFCKCBIOC_OFFSET UNITYSDK_OFFSET(0x17CB0ED0)
#define GDMONJOAKHD_APHBCNILECE_OFFSET UNITYSDK_OFFSET(0x17CB7580)
#define GDMONJOAKHD_BENMJGHMHDF_OFFSET UNITYSDK_OFFSET(0x17CAF7D0)
#define GDMONJOAKHD_BGBPEMJCGLH_OFFSET UNITYSDK_OFFSET(0x17CB3620)
#define GDMONJOAKHD_BGIBFOBNBEK_OFFSET UNITYSDK_OFFSET(0x17CAAD00)
#define GDMONJOAKHD_CCTOR_OFFSET UNITYSDK_OFFSET(0x17CB9900)
#define GDMONJOAKHD_CEDMFLIHMBJ_OFFSET UNITYSDK_OFFSET(0x17CB1CC0)
#define GDMONJOAKHD_CGMFCFCIBAI_OFFSET UNITYSDK_OFFSET(0x17CADD30)
#define GDMONJOAKHD_CHECKSTREAMINGLOD_OFFSET UNITYSDK_OFFSET(0x17CB2FF0)
#define GDMONJOAKHD_CHECKSTREAMING_OFFSET UNITYSDK_OFFSET(0x17CB2BD0)
#define GDMONJOAKHD_CHLAAPIMAAP_OFFSET UNITYSDK_OFFSET(0x17CAE1C0)
#define GDMONJOAKHD_CIJEHJFDGLO_OFFSET UNITYSDK_OFFSET(0x17CB7890)
#define GDMONJOAKHD_CIPJBBAOLBD_1_OFFSET UNITYSDK_OFFSET(0x17CB33C0)
#define GDMONJOAKHD_CJKLIEDKIEC_OFFSET UNITYSDK_OFFSET(0x17CB8E10)
#define GDMONJOAKHD_CMPBIBPFODL_OFFSET UNITYSDK_OFFSET(0x17CACE40)
#define GDMONJOAKHD_CPBGMHPIGAO_OFFSET UNITYSDK_OFFSET(0x17CB2740)
#define GDMONJOAKHD_CTOR_OFFSET UNITYSDK_OFFSET(0x17CAD350)
#define GDMONJOAKHD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17CB1F30)
#define GDMONJOAKHD_DKCJBHFCHJB_OFFSET UNITYSDK_OFFSET(0x17CB4B20)
#define GDMONJOAKHD_EBBDALJMBNL_OFFSET UNITYSDK_OFFSET(0x17CB5F70)
#define GDMONJOAKHD_EDIIHALCFFG_OFFSET UNITYSDK_OFFSET(0x17CAF1D0)
#define GDMONJOAKHD_EDNLKHJCIND_OFFSET UNITYSDK_OFFSET(0x17CB80A0)
#define GDMONJOAKHD_EECILLOLJED_OFFSET UNITYSDK_OFFSET(0x17CB4D90)
#define GDMONJOAKHD_EEDDIMIDMCA_OFFSET UNITYSDK_OFFSET(0x17CB81F0)
#define GDMONJOAKHD_EIGBNOPMBGL_OFFSET UNITYSDK_OFFSET(0x17CB4470)
#define GDMONJOAKHD_ENTERFOCUS_OFFSET UNITYSDK_OFFSET(0x17CB5DD0)
#define GDMONJOAKHD_EPICKNAHHKJ_OFFSET UNITYSDK_OFFSET(0x17CAFE20)
#define GDMONJOAKHD_FCBLGKAKCME_OFFSET UNITYSDK_OFFSET(0x17CB3280)
#define GDMONJOAKHD_FCHHKOJKLPE_OFFSET UNITYSDK_OFFSET(0x17CB3330)
#define GDMONJOAKHD_FDOGILDBGFI_OFFSET UNITYSDK_OFFSET(0x17CAFE10)
#define GDMONJOAKHD_FEGLLFNCIHF_OFFSET UNITYSDK_OFFSET(0x17CB17C0)
#define GDMONJOAKHD_FLAGJFPHMGD_OFFSET UNITYSDK_OFFSET(0x17CB8C10)
#define GDMONJOAKHD_FNFGAAAMJOC_OFFSET UNITYSDK_OFFSET(0x17CB6FA0)
#define GDMONJOAKHD_FONPNGPBJON_OFFSET UNITYSDK_OFFSET(0x17CAC090)
#define GDMONJOAKHD_GEKPBHICMHA_OFFSET UNITYSDK_OFFSET(0x17CAC8D0)
#define GDMONJOAKHD_GETITEMLODLEVEL_OFFSET UNITYSDK_OFFSET(0x17CB7DA0)
#define GDMONJOAKHD_GET_CANLOADSTREAMINGRESOURCE_OFFSET UNITYSDK_OFFSET(0x17CB0EB0)
#define GDMONJOAKHD_GET_ISFOCUSSOLVEFINISH_OFFSET UNITYSDK_OFFSET(0x17CB7D20)
#define GDMONJOAKHD_GET_ISFOCUS_OFFSET UNITYSDK_OFFSET(0x17CB7D80)
#define GDMONJOAKHD_GET_ISPERSISTENTLOADED_OFFSET UNITYSDK_OFFSET(0x17CB3310)
#define GDMONJOAKHD_GET_JOBDATASTREAMING_OFFSET UNITYSDK_OFFSET(0x17CAD2E0)
#define GDMONJOAKHD_GET_LAYERSOURCEEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x17CB3340)
#define GDMONJOAKHD_GJIAHHFDNML_OFFSET UNITYSDK_OFFSET(0x17CAE0B0)
#define GDMONJOAKHD_GPFLDHMJMMK_OFFSET UNITYSDK_OFFSET(0x17CAB960)
#define GDMONJOAKHD_HADNKGIEJDE_OFFSET UNITYSDK_OFFSET(0x17CAD320)
#define GDMONJOAKHD_HAEDLBLNABF_OFFSET UNITYSDK_OFFSET(0x17CAE9B0)
#define GDMONJOAKHD_HDEKKDINGBB_OFFSET UNITYSDK_OFFSET(0x17CB58C0)
#define GDMONJOAKHD_HENGFENIMHC_OFFSET UNITYSDK_OFFSET(0x17CB2860)
#define GDMONJOAKHD_HHEJJKKMBJK_OFFSET UNITYSDK_OFFSET(0x17CB9490)
#define GDMONJOAKHD_HKJPCGMANGN_OFFSET UNITYSDK_OFFSET(0x17CAFED0)
#define GDMONJOAKHD_IGMIPJDOFEI_OFFSET UNITYSDK_OFFSET(0x17CB5C60)
#define GDMONJOAKHD_IIGEFJJHHPK_OFFSET UNITYSDK_OFFSET(0x17CB30F0)
#define GDMONJOAKHD_IIIKIOKBIKF_OFFSET UNITYSDK_OFFSET(0x17CB0BC0)
#define GDMONJOAKHD_IKGHMPENCGH_OFFSET UNITYSDK_OFFSET(0x17CB32F0)
#define GDMONJOAKHD_IKKAAKFEKAN_OFFSET UNITYSDK_OFFSET(0x17CB5620)
#define GDMONJOAKHD_IMGGGLCIFCF_OFFSET UNITYSDK_OFFSET(0x17CB33B0)
#define GDMONJOAKHD_IMIKJMCGGML_OFFSET UNITYSDK_OFFSET(0x17CB3360)
#define GDMONJOAKHD_INACTIVEINSTANCE_OFFSET UNITYSDK_OFFSET(0x17CB4090)
#define GDMONJOAKHD_INSERTTOAOI_OFFSET UNITYSDK_OFFSET(0x17CAF550)
#define GDMONJOAKHD_JDDNHJINEKB_OFFSET UNITYSDK_OFFSET(0x17CAE510)
#define GDMONJOAKHD_JECGAKLKDFC_OFFSET UNITYSDK_OFFSET(0x17CADE30)
#define GDMONJOAKHD_JEJCKDODGMG_OFFSET UNITYSDK_OFFSET(0x17CB2720)
#define GDMONJOAKHD_KCCIDOBDDOJ_OFFSET UNITYSDK_OFFSET(0x17CAEE70)
#define GDMONJOAKHD_KDJHPMPKHHF_OFFSET UNITYSDK_OFFSET(0x17CB3520)
#define GDMONJOAKHD_KHNGFEJOOCH_OFFSET UNITYSDK_OFFSET(0x17CB31A0)
#define GDMONJOAKHD_KMDFOAPFHCD_OFFSET UNITYSDK_OFFSET(0x17CB6CF0)
#define GDMONJOAKHD_KOEMEDJCCND_OFFSET UNITYSDK_OFFSET(0x17CB4840)
#define GDMONJOAKHD_LAAMHEAGKNF_OFFSET UNITYSDK_OFFSET(0x17CAC4C0)
#define GDMONJOAKHD_LCPEMMLCIGK_OFFSET UNITYSDK_OFFSET(0x17CAC850)
#define GDMONJOAKHD_LEAVEFOCUS_OFFSET UNITYSDK_OFFSET(0x17CB5F10)
#define GDMONJOAKHD_LEAVEOUTVISION_OFFSET UNITYSDK_OFFSET(0x17CB2820)
#define GDMONJOAKHD_LIPOHFODDEB_OFFSET UNITYSDK_OFFSET(0x17CB6BC0)
#define GDMONJOAKHD_LJNKCHHCEAF_OFFSET UNITYSDK_OFFSET(0x17CB8940)
#define GDMONJOAKHD_LJOGANKHGGK_OFFSET UNITYSDK_OFFSET(0x17CB8050)
#define GDMONJOAKHD_LJPJEPBCKPE_OFFSET UNITYSDK_OFFSET(0x17CB6360)
#define GDMONJOAKHD_LLLLNCDAJFK_OFFSET UNITYSDK_OFFSET(0x17CB0A00)
#define GDMONJOAKHD_LNAMNBCDMFJ_OFFSET UNITYSDK_OFFSET(0x17CAF960)
#define GDMONJOAKHD_LNGKNPJIOML_OFFSET UNITYSDK_OFFSET(0x17CAB570)
#define GDMONJOAKHD_LPDBJPJFJLG_OFFSET UNITYSDK_OFFSET(0x17CB0CA0)
#define GDMONJOAKHD_LPOOJDFADDC_OFFSET UNITYSDK_OFFSET(0x17CB3F10)
#define GDMONJOAKHD_MAODCOADFMB_OFFSET UNITYSDK_OFFSET(0x17CB6960)
#define GDMONJOAKHD_MDEABOMOHED_OFFSET UNITYSDK_OFFSET(0x17CADE80)
#define GDMONJOAKHD_MLMKLHFECNO_OFFSET UNITYSDK_OFFSET(0x17CB0C30)
#define GDMONJOAKHD_MOHFMMPAMGD_OFFSET UNITYSDK_OFFSET(0x17CB85E0)
#define GDMONJOAKHD_NGOBMJIHPGF_OFFSET UNITYSDK_OFFSET(0x17CB2B80)
#define GDMONJOAKHD_NNEEKPGDKMF_OFFSET UNITYSDK_OFFSET(0x17CB1C40)
#define GDMONJOAKHD_NPAGEPHDKOH_OFFSET UNITYSDK_OFFSET(0x17CB0DF0)
#define GDMONJOAKHD_OAACFOEGNAM_OFFSET UNITYSDK_OFFSET(0x17CB05E0)
#define GDMONJOAKHD_OBNHACKCJBH_OFFSET UNITYSDK_OFFSET(0x17CB1680)
#define GDMONJOAKHD_OCELGEGCHLH_OFFSET UNITYSDK_OFFSET(0x17CB0550)
#define GDMONJOAKHD_ODJOCEHDAEH_OFFSET UNITYSDK_OFFSET(0x17CB8010)
#define GDMONJOAKHD_ODOAKNFGNAJ_OFFSET UNITYSDK_OFFSET(0x17CAAFE0)
#define GDMONJOAKHD_OIIHIGEDHHD_OFFSET UNITYSDK_OFFSET(0x17CB65E0)
#define GDMONJOAKHD_OJGKFPAAFAG_OFFSET UNITYSDK_OFFSET(0x17CB8140)
#define GDMONJOAKHD_ONHGGNCHHHC_OFFSET UNITYSDK_OFFSET(0x17CB89E0)
#define GDMONJOAKHD_OOHLACLDFMM_OFFSET UNITYSDK_OFFSET(0x17CAD250)
#define GDMONJOAKHD_OPNNCMHGNLA_OFFSET UNITYSDK_OFFSET(0x17CB72B0)
#define GDMONJOAKHD_PBHKLJPCKPD_OFFSET UNITYSDK_OFFSET(0x17CB6080)
#define GDMONJOAKHD_PHHADFLFJHG_OFFSET UNITYSDK_OFFSET(0x17CB0F20)
#define GDMONJOAKHD_PLBHEKGOBKA_OFFSET UNITYSDK_OFFSET(0x17CAB4F0)
#define GDMONJOAKHD_PNAICDAOIDH_OFFSET UNITYSDK_OFFSET(0x17CAF9B0)
#define GDMONJOAKHD_QUADTREEOP_OFFSET UNITYSDK_OFFSET(0x17CAF310)
#define GDMONJOAKHD_REMOVEFROMAOI_OFFSET UNITYSDK_OFFSET(0x17CAF690)
#define GDMONJOAKHD_SET_CANLOADSTREAMINGRESOURCE_OFFSET UNITYSDK_OFFSET(0x17CB0EC0)
#define GDMONJOAKHD_SET_ISFOCUS_OFFSET UNITYSDK_OFFSET(0x17CB7D90)
#define GDMONJOAKHD_SET_ISPERSISTENTLOADED_OFFSET UNITYSDK_OFFSET(0x17CB3320)
#define GDMONJOAKHD_SET_JOBDATASTREAMING_OFFSET UNITYSDK_OFFSET(0x17CAD300)
#define GDMONJOAKHD_SET_LAYERSOURCEEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x17CB3350)
#define GDMONJOAKHD_SOLVECALCULATESTREAMINGTASK_OFFSET UNITYSDK_OFFSET(0x17CABB50)
#define GDMONJOAKHD_SOLVEFOCUSSTATUS_OFFSET UNITYSDK_OFFSET(0x17CB50B0)
#define GDMONJOAKHD_TOHLOD_OFFSET UNITYSDK_OFFSET(0x17CB2370)
#define GDMONJOAKHD__BNEEDCHECKSTREAMING_OFFSET UNITYSDK_OFFSET(0x17CB2E20)
#define GDMONJOAKHD__REGISTERINSTANCETOCULLINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x17CB3E30)
#define GDMONJOAKHD__SOLVEINSTANCELODCALC_OFFSET UNITYSDK_OFFSET(0x17CACAB0)
#define GDMONJOAKHD__UNREGISTERINSTANCEFROMCULLINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x17CB3EA0)

inline static constexpr unsigned int GDMONJOAKHD_TypeDefinitionIndex = 75957;

	class GDMONJOAKHD : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Int32>* CCIEEKNBHKI; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* NCNHHAMBINO; // 0x18
		::KLEFGGIHGMI* CFMJHJILEMA; // 0x20
		::PMLOPPBCMKB* EONEEIDNGEP; // 0x28
		::System::Action_2<::HPKACEPPPCA*, ::System::Boolean>* PIBCMNAFAME; // 0x30
		::System::Collections::Concurrent::ConcurrentQueue_1<::System::Tuple_2<::HPKACEPPPCA*, ::System::Int32>*>* PCILCIFFFOI; // 0x38
		::Collections::Pooled::PooledDictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::HPKACEPPPCA*>* NAEKEECDHNB; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* MKNLNDEOCEE; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* LLBALBGMDGE; // 0x50
		::System::Collections::Generic::HashSet_1<::HPKACEPPPCA*>* IGMIHCMBLDD; // 0x58
		::System::Collections::Generic::List_1<::HPKACEPPPCA*>* FOIIDGHBLLK; // 0x60
		::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>* BBFLHKMCLFM; // 0x68
		::RPG::Client::OpenWorld::StreamingLayerDetail* CDJGDNCOFOD; // 0x70
		::System::Collections::Concurrent::ConcurrentDictionary_2<::HPKACEPPPCA*, ::System::Int32>* BECMKFHNHKK; // 0x78
		::System::Collections::Generic::List_1<::System::Int32>* NBKIFKIHJDA; // 0x80
		::System::Action_1<::HPKACEPPPCA*>* JILMNFCFMOI; // 0x88
		::LJFHKAJPFNE* PBHJFGPNGPA; // 0x90
		::System::Collections::Generic::HashSet_1<::HPKACEPPPCA*>* OIDDKKBOEKD; // 0x98
		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* HIKMPLOHEHI; // 0xA0
		::System::Collections::Generic::List_1<::System::Action*>* NFBNLDIFCGC; // 0xA8
		::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32>*>* CNMJMNNDLIF; // 0xB0
		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* BOFCDAGFKJC; // 0xB8
		::INCHEAIJPMD* BKLGGOPFBCB; // 0xC0
		::System::Collections::Concurrent::ConcurrentQueue_1<::HPKACEPPPCA*>* GMHOBOLANCK; // 0xC8
		::System::Collections::Generic::List_1<::HPKACEPPPCA*>* NHECFHIDCPG; // 0xD0
		::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* PONGCJLLEOI; // 0xD8
		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* KAIBMIPGFMM; // 0xE0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* NFFPHIPJEGA; // 0xE8
		::UnityEngine::GameObject* KMNJGLJLCBM; // 0xF0
		::NNGLODINPCK* HMKEHDIJNCK; // 0xF8
		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* BMICLMBHFGF; // 0x100
		::System::Boolean HDALCKNKHIG; // 0x108
		::System::Boolean _CanLoadStreamingResource_k__BackingField; // 0x109
		::System::Boolean CLACOLPACFK; // 0x10A
		::System::Boolean _IsFocus_k__BackingField; // 0x10B
		::UnityEngine::Vector3 IGCBHABGNNA; // 0x10C
		::System::Int32 ENPGCDGPFHG; // 0x118
		::System::Single DHNJAEIMIIE; // 0x11C
		::System::Single KKEEOPFCLMF; // 0x120
		::PJPIEKNGCMC _JobDataStreaming_k__BackingField; // 0x124
		::System::Single CFLFAKIBIJI; // 0x138
		::System::Int32 FDDBINCOHNP; // 0x13C
		::System::Single FBEBPBHALIO; // 0x140
		::UnityEngine::Rect NNCPJGDOADD; // 0x144
		::UnityEngine::Vector3 BHOIIEFALGA; // 0x154
		::System::Int32 _LayerSourceEffectType_k__BackingField; // 0x160
		::System::Boolean GBDHMMGEMGF; // 0x164
		::System::Boolean LOLIAKJPMLH; // 0x165
		::System::Boolean LLCPMGGEHDN; // 0x166
		::System::Boolean CAFNNMAOOFL; // 0x167
		::System::Boolean DPDGOFIGCFB; // 0x168
		::System::Boolean OPCBGCHKBAP; // 0x169
		::System::Boolean LNFGPCMPLHE; // 0x16A
		::System::Boolean _IsPersistentLoaded_k__BackingField; // 0x16B
		::System::Boolean FBAFNHFONFK; // 0x16C
		::System::Boolean OCEIENMCDEH; // 0x16D
		::System::Boolean OHPJMEEPHBJ; // 0x16E
		::System::Boolean ICCMOIBEPOG; // 0x16F
		static ::RPG::Client::RPGProfilerMarker** StaticGet_AEOPGOEAJAF()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "GDMONJOAKHD")->GetStaticField(0x62E40);
		}

		static ::System::String** StaticGet_FKODHMAJOAB()
		{
			return (::System::String**)UnitySDK::FromName("", "GDMONJOAKHD")->GetStaticField(0x62E48);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_ODGGMLDNFDJ()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "GDMONJOAKHD")->GetStaticField(0x62E50);
		}

		static ::System::Boolean* StaticGet_LIODEMHCAOF()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GDMONJOAKHD")->GetStaticField(0x143C0);
		}

		::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::LJFHKAJPFNE* a2, ::KLEFGGIHGMI* a3, ::UnityEngine::GameObject* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::LJFHKAJPFNE*, ::KLEFGGIHGMI*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + GDMONJOAKHD_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDMONJOAKHD_CCTOR_OFFSET))();
		}

		::System::Void AKJLOCJBFKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_AKJLOCJBFKD_OFFSET))(this);
		}

		::System::Void BGIBFOBNBEK(::System::Collections::Generic::List_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GDMONJOAKHD_BGIBFOBNBEK_OFFSET))(this, a1);
		}

		::System::Void ODOAKNFGNAJ(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + GDMONJOAKHD_ODOAKNFGNAJ_OFFSET))(this, a1, a2);
		}

		::System::Int32 PLBHEKGOBKA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_PLBHEKGOBKA_OFFSET))(this);
		}

		::System::Boolean LNGKNPJIOML(::ENLBPLPOGMF* a1, ::System::Boolean a2, ::OIDDJJLHGKO* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::ENLBPLPOGMF*, ::System::Boolean, ::OIDDJJLHGKO*))((::PBYTE)hIl2Cpp + GDMONJOAKHD_LNGKNPJIOML_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GPFLDHMJMMK(::OIDDJJLHGKO* a1, ::APLEMBNFLAA* a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::OIDDJJLHGKO*, ::APLEMBNFLAA*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + GDMONJOAKHD_GPFLDHMJMMK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SolveCalculateStreamingTask(::OIDDJJLHGKO* a1, ::APLEMBNFLAA* a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::OIDDJJLHGKO*, ::APLEMBNFLAA*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + GDMONJOAKHD_SOLVECALCULATESTREAMINGTASK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void FONPNGPBJON(::OIDDJJLHGKO* a1, ::APLEMBNFLAA* a2, ::System::Boolean a3, ::HPKACEPPPCA* a4, ::RPG::Client::OpenWorld::StreamingItemData* a5, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::OpenWorld::StreamingItemData*, ::HPKACEPPPCA*> a6)
		{
			return ((::System::Void(*)(::PVOID, ::OIDDJJLHGKO*, ::APLEMBNFLAA*, ::System::Boolean, ::HPKACEPPPCA*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::OpenWorld::StreamingItemData*, ::HPKACEPPPCA*>))((::PBYTE)hIl2Cpp + GDMONJOAKHD_FONPNGPBJON_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void LAAMHEAGKNF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_LAAMHEAGKNF_OFFSET))(this);
		}

		::System::Void LCPEMMLCIGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_LCPEMMLCIGK_OFFSET))(this);
		}

		::System::Void GEKPBHICMHA(::APLEMBNFLAA* a1, ::System::Boolean a2, ::System::Single a3, ::OIDDJJLHGKO* a4)
		{
			return ((::System::Void(*)(::PVOID, ::APLEMBNFLAA*, ::System::Boolean, ::System::Single, ::OIDDJJLHGKO*))((::PBYTE)hIl2Cpp + GDMONJOAKHD_GEKPBHICMHA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _SolveInstanceLodCalc(::OIDDJJLHGKO* a1, ::APLEMBNFLAA* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::HPKACEPPPCA* a4, ::System::Int32 a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::OIDDJJLHGKO*, ::APLEMBNFLAA*, ::RPG::Client::OpenWorld::StreamingItemData*, ::HPKACEPPPCA*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GDMONJOAKHD__SOLVEINSTANCELODCALC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void CMPBIBPFODL(::APLEMBNFLAA* a1, ::System::Boolean a2, ::System::Single a3, ::OIDDJJLHGKO* a4)
		{
			return ((::System::Void(*)(::PVOID, ::APLEMBNFLAA*, ::System::Boolean, ::System::Single, ::OIDDJJLHGKO*))((::PBYTE)hIl2Cpp + GDMONJOAKHD_CMPBIBPFODL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OOHLACLDFMM(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GDMONJOAKHD_OOHLACLDFMM_OFFSET))(this, a1, a2);
		}

		::PJPIEKNGCMC get_JobDataStreaming()
		{
			return ((::PJPIEKNGCMC(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_GET_JOBDATASTREAMING_OFFSET))(this);
		}

		::System::Void set_JobDataStreaming(::PJPIEKNGCMC a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJPIEKNGCMC))((::PBYTE)hIl2Cpp + GDMONJOAKHD_SET_JOBDATASTREAMING_OFFSET))(this, a1);
		}

		::System::Boolean HADNKGIEJDE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_HADNKGIEJDE_OFFSET))(this);
		}

		::System::Void CGMFCFCIBAI(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + GDMONJOAKHD_CGMFCFCIBAI_OFFSET))(this, a1);
		}

		::System::Void JECGAKLKDFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_JECGAKLKDFC_OFFSET))(this);
		}

		::System::Void MDEABOMOHED(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + GDMONJOAKHD_MDEABOMOHED_OFFSET))(this, a1);
		}

		::System::Void GJIAHHFDNML(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + GDMONJOAKHD_GJIAHHFDNML_OFFSET))(this, a1);
		}

		::System::Void CHLAAPIMAAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_CHLAAPIMAAP_OFFSET))(this);
		}

		::System::Boolean JDDNHJINEKB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_JDDNHJINEKB_OFFSET))(this);
		}

		::System::Single HAEDLBLNABF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_HAEDLBLNABF_OFFSET))(this);
		}

		::System::Void KCCIDOBDDOJ(::UnityEngine::Bounds a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + GDMONJOAKHD_KCCIDOBDDOJ_OFFSET))(this, a1);
		}

		::System::Void EDIIHALCFFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_EDIIHALCFFG_OFFSET))(this);
		}

		::System::Void QuadTreeOp(::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + GDMONJOAKHD_QUADTREEOP_OFFSET))(this, a1);
		}

		::System::Void InsertToAOI(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + GDMONJOAKHD_INSERTTOAOI_OFFSET))(this, a1);
		}

		::System::Void RemoveFromAOI(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + GDMONJOAKHD_REMOVEFROMAOI_OFFSET))(this, a1);
		}

		::System::Void BENMJGHMHDF(::System::Action_2<::HPKACEPPPCA*, ::System::Object*>* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::HPKACEPPPCA*, ::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + GDMONJOAKHD_BENMJGHMHDF_OFFSET))(this, a1, a2);
		}

		::System::Void LNAMNBCDMFJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GDMONJOAKHD_LNAMNBCDMFJ_OFFSET))(this, a1);
		}

		::System::Void PNAICDAOIDH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GDMONJOAKHD_PNAICDAOIDH_OFFSET))(this, a1);
		}

		::System::Boolean FDOGILDBGFI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_FDOGILDBGFI_OFFSET))(this);
		}

		::System::Boolean EPICKNAHHKJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_EPICKNAHHKJ_OFFSET))(this);
		}

		::System::Boolean AOCNLMCACAN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_AOCNLMCACAN_OFFSET))(this);
		}

		::System::Void HKJPCGMANGN(::GEEOPFIMJEM a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEEOPFIMJEM))((::PBYTE)hIl2Cpp + GDMONJOAKHD_HKJPCGMANGN_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* OCELGEGCHLH()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_OCELGEGCHLH_OFFSET))(this);
		}

		::System::Void OAACFOEGNAM(::GEEOPFIMJEM a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEEOPFIMJEM))((::PBYTE)hIl2Cpp + GDMONJOAKHD_OAACFOEGNAM_OFFSET))(this, a1);
		}

		::System::Void LLLLNCDAJFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_LLLLNCDAJFK_OFFSET))(this);
		}

		::System::Void IIIKIOKBIKF(::UnityEngine::GameObject* a1, ::RPG::GameCore::BlockNodeConfig* a2, ::BJBDLDCDDJH* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::BlockNodeConfig*, ::BJBDLDCDDJH*, ::System::String*))((::PBYTE)hIl2Cpp + GDMONJOAKHD_IIIKIOKBIKF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MLMKLHFECNO(::UnityEngine::GameObject* a1, ::RPG::GameCore::BlockNodeConfig* a2, ::BJBDLDCDDJH* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::BlockNodeConfig*, ::BJBDLDCDDJH*, ::System::String*))((::PBYTE)hIl2Cpp + GDMONJOAKHD_MLMKLHFECNO_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::GameObject* LPDBJPJFJLG(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + GDMONJOAKHD_LPDBJPJFJLG_OFFSET))(this, a1);
		}

		::HPKACEPPPCA* NPAGEPHDKOH(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::HPKACEPPPCA*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + GDMONJOAKHD_NPAGEPHDKOH_OFFSET))(this, a1);
		}

		::System::Boolean get_CanLoadStreamingResource()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_GET_CANLOADSTREAMINGRESOURCE_OFFSET))(this);
		}

		::System::Void set_CanLoadStreamingResource(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GDMONJOAKHD_SET_CANLOADSTREAMINGRESOURCE_OFFSET))(this, a1);
		}

		::System::Void AONFCKCBIOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_AONFCKCBIOC_OFFSET))(this);
		}

		::System::Void PHHADFLFJHG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GDMONJOAKHD_PHHADFLFJHG_OFFSET))(this, a1);
		}

		::System::Void AGEIDNHECPA(::HPKACEPPPCA* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::HPKACEPPPCA*, ::System::Boolean))((::PBYTE)hIl2Cpp + GDMONJOAKHD_AGEIDNHECPA_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_DISPOSE_OFFSET))(this);
		}

		::System::Void ToHLOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_TOHLOD_OFFSET))(this);
		}

		::System::Void LeaveOutVision()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_LEAVEOUTVISION_OFFSET))(this);
		}

		::System::Void HENGFENIMHC(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + GDMONJOAKHD_HENGFENIMHC_OFFSET))(this, a1);
		}

		::System::Void ALEJANAODJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_ALEJANAODJJ_OFFSET))(this);
		}

		::System::Int32 NGOBMJIHPGF(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GDMONJOAKHD_NGOBMJIHPGF_OFFSET))(this, a1);
		}

		::System::Void CheckStreaming(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GDMONJOAKHD_CHECKSTREAMING_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean _bNeedCheckStreaming(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + GDMONJOAKHD__BNEEDCHECKSTREAMING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CheckStreamingLod(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GDMONJOAKHD_CHECKSTREAMINGLOD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean IIGEFJJHHPK(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + GDMONJOAKHD_IIGEFJJHHPK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KHNGFEJOOCH(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GDMONJOAKHD_KHNGFEJOOCH_OFFSET))(this, a1);
		}

		::System::Void FCBLGKAKCME(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GDMONJOAKHD_FCBLGKAKCME_OFFSET))(this, a1);
		}

		::System::Single IKGHMPENCGH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_IKGHMPENCGH_OFFSET))(this);
		}

		::System::Boolean JEJCKDODGMG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_JEJCKDODGMG_OFFSET))(this);
		}

		::System::Boolean get_IsPersistentLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_GET_ISPERSISTENTLOADED_OFFSET))(this);
		}

		::System::Void set_IsPersistentLoaded(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GDMONJOAKHD_SET_ISPERSISTENTLOADED_OFFSET))(this, a1);
		}

		::System::Boolean FCHHKOJKLPE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_FCHHKOJKLPE_OFFSET))(this);
		}

		::System::Int32 get_LayerSourceEffectType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_GET_LAYERSOURCEEFFECTTYPE_OFFSET))(this);
		}

		::System::Void set_LayerSourceEffectType(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GDMONJOAKHD_SET_LAYERSOURCEEFFECTTYPE_OFFSET))(this, a1);
		}

		::System::Int32 IMIKJMCGGML()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_IMIKJMCGGML_OFFSET))(this);
		}

		static ::System::Boolean CPBGMHPIGAO()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GDMONJOAKHD_CPBGMHPIGAO_OFFSET))();
		}

		::System::Boolean IMGGGLCIFCF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_IMGGGLCIFCF_OFFSET))(this);
		}

		::HPKACEPPPCA* CIPJBBAOLBD_1(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::HPKACEPPPCA*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + GDMONJOAKHD_CIPJBBAOLBD_1_OFFSET))(this, a1);
		}

		::System::Void KDJHPMPKHHF(::HPKACEPPPCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPKACEPPPCA*))((::PBYTE)hIl2Cpp + GDMONJOAKHD_KDJHPMPKHHF_OFFSET))(this, a1);
		}

		::System::Boolean BGBPEMJCGLH(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + GDMONJOAKHD_BGBPEMJCGLH_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterInstanceToCullingSystem(::HPKACEPPPCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPKACEPPPCA*))((::PBYTE)hIl2Cpp + GDMONJOAKHD__REGISTERINSTANCETOCULLINGSYSTEM_OFFSET))(this, a1);
		}

		::System::Void _UnRegisterInstanceFromCullingSystem(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + GDMONJOAKHD__UNREGISTERINSTANCEFROMCULLINGSYSTEM_OFFSET))(this, a1);
		}

		::System::Boolean LPOOJDFADDC(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + GDMONJOAKHD_LPOOJDFADDC_OFFSET))(this, a1, a2);
		}

		::System::Boolean InActiveInstance(::HPKACEPPPCA* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPKACEPPPCA*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GDMONJOAKHD_INACTIVEINSTANCE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EIGBNOPMBGL(::HPKACEPPPCA* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPKACEPPPCA*, ::System::Int32))((::PBYTE)hIl2Cpp + GDMONJOAKHD_EIGBNOPMBGL_OFFSET))(this, a1, a2);
		}

		::System::Void KOEMEDJCCND(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GDMONJOAKHD_KOEMEDJCCND_OFFSET))(this, a1);
		}

		::System::Void DKCJBHFCHJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_DKCJBHFCHJB_OFFSET))(this);
		}

		::System::Void EECILLOLJED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_EECILLOLJED_OFFSET))(this);
		}

		::System::Void SolveFocusStatus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GDMONJOAKHD_SOLVEFOCUSSTATUS_OFFSET))(this, a1);
		}

		::System::Void IKKAAKFEKAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_IKKAAKFEKAN_OFFSET))(this);
		}

		::System::Void HDEKKDINGBB(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2, ::System::Boolean a3, ::RPG::Client::OpenWorld::StreamingItemEnableReason a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean, ::System::Boolean, ::RPG::Client::OpenWorld::StreamingItemEnableReason, ::System::Boolean))((::PBYTE)hIl2Cpp + GDMONJOAKHD_HDEKKDINGBB_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EnterFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_ENTERFOCUS_OFFSET))(this);
		}

		::System::Void LeaveFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_LEAVEFOCUS_OFFSET))(this);
		}

		::System::Void EBBDALJMBNL(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + GDMONJOAKHD_EBBDALJMBNL_OFFSET))(this, a1);
		}

		::System::Void LJPJEPBCKPE(::RPG::Client::OpenWorld::StreamingItemData* a1, ::HPKACEPPPCA* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::HPKACEPPPCA*, ::System::Int32))((::PBYTE)hIl2Cpp + GDMONJOAKHD_LJPJEPBCKPE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OIIHIGEDHHD(::OIDDJJLHGKO* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::OIDDJJLHGKO*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + GDMONJOAKHD_OIIHIGEDHHD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MAODCOADFMB(::RPG::Client::OpenWorld::StreamingItemData* a1, ::HPKACEPPPCA* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::HPKACEPPPCA*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GDMONJOAKHD_MAODCOADFMB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void IGMIPJDOFEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_IGMIPJDOFEI_OFFSET))(this);
		}

		::System::Void LIPOHFODDEB(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32))((::PBYTE)hIl2Cpp + GDMONJOAKHD_LIPOHFODDEB_OFFSET))(this, a1, a2);
		}

		::System::Void PBHKLJPCKPD(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + GDMONJOAKHD_PBHKLJPCKPD_OFFSET))(this, a1);
		}

		::System::Void KMDFOAPFHCD(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + GDMONJOAKHD_KMDFOAPFHCD_OFFSET))(this, a1);
		}

		::System::Boolean FNFGAAAMJOC(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + GDMONJOAKHD_FNFGAAAMJOC_OFFSET))(this, a1);
		}

		::System::Void APHBCNILECE(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + GDMONJOAKHD_APHBCNILECE_OFFSET))(this, a1);
		}

		::System::Void OPNNCMHGNLA(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + GDMONJOAKHD_OPNNCMHGNLA_OFFSET))(this, a1);
		}

		::System::Void CIJEHJFDGLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_CIJEHJFDGLO_OFFSET))(this);
		}

		::System::Boolean get_IsFocusSolveFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_GET_ISFOCUSSOLVEFINISH_OFFSET))(this);
		}

		::System::Boolean get_IsFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_GET_ISFOCUS_OFFSET))(this);
		}

		::System::Void set_IsFocus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GDMONJOAKHD_SET_ISFOCUS_OFFSET))(this, a1);
		}

		::System::Int32 GetItemLodLevel(::OIDDJJLHGKO* a1, ::APLEMBNFLAA* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::RPG::Client::OpenWorld::StreamingItemData* a4, ::System::Int32 a5, ::System::Boolean a6)
		{
			return ((::System::Int32(*)(::PVOID, ::OIDDJJLHGKO*, ::APLEMBNFLAA*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GDMONJOAKHD_GETITEMLODLEVEL_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::RPG::Client::OpenWorld::StreamingLayerDetail* ODJOCEHDAEH()
		{
			return ((::RPG::Client::OpenWorld::StreamingLayerDetail*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_ODJOCEHDAEH_OFFSET))(this);
		}

		::System::String* LJOGANKHGGK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_LJOGANKHGGK_OFFSET))(this);
		}

		::RPG::GameCore::StreamingLayerType EDNLKHJCIND()
		{
			return ((::RPG::GameCore::StreamingLayerType(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_EDNLKHJCIND_OFFSET))(this);
		}

		::System::Void ALBEJGHIMDF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GDMONJOAKHD_ALBEJGHIMDF_OFFSET))(this, a1);
		}

		::System::Int32 OJGKFPAAFAG(::APLEMBNFLAA* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::System::Int32 a4, ::System::Boolean a5)
		{
			return ((::System::Int32(*)(::PVOID, ::APLEMBNFLAA*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GDMONJOAKHD_OJGKFPAAFAG_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Collections::Pooled::PooledList_1<::RPG::Client::OpenWorld::StreamingItemData*>* EEDDIMIDMCA(::RPG::Client::OpenWorld::Volume* a1, ::System::Boolean a2)
		{
			return ((::Collections::Pooled::PooledList_1<::RPG::Client::OpenWorld::StreamingItemData*>*(*)(::PVOID, ::RPG::Client::OpenWorld::Volume*, ::System::Boolean))((::PBYTE)hIl2Cpp + GDMONJOAKHD_EEDDIMIDMCA_OFFSET))(this, a1, a2);
		}

		::System::Boolean NNEEKPGDKMF(::HPKACEPPPCA* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPKACEPPPCA*, ::System::Boolean))((::PBYTE)hIl2Cpp + GDMONJOAKHD_NNEEKPGDKMF_OFFSET))(this, a1, a2);
		}

		::System::Void MOHFMMPAMGD(::HPKACEPPPCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPKACEPPPCA*))((::PBYTE)hIl2Cpp + GDMONJOAKHD_MOHFMMPAMGD_OFFSET))(this, a1);
		}

		::System::Void CEDMFLIHMBJ(::HPKACEPPPCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPKACEPPPCA*))((::PBYTE)hIl2Cpp + GDMONJOAKHD_CEDMFLIHMBJ_OFFSET))(this, a1);
		}

		::System::Void OBNHACKCJBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_OBNHACKCJBH_OFFSET))(this);
		}

		::System::Void FEGLLFNCIHF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GDMONJOAKHD_FEGLLFNCIHF_OFFSET))(this, a1);
		}

		::System::Void ONHGGNCHHHC(::HPKACEPPPCA* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HPKACEPPPCA*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + GDMONJOAKHD_ONHGGNCHHHC_OFFSET))(this, a1, a2);
		}

		::BPBFCHPINDD_FadingDoneActionType LJNKCHHCEAF(::HPKACEPPPCA* a1)
		{
			return ((::BPBFCHPINDD_FadingDoneActionType(*)(::PVOID, ::HPKACEPPPCA*))((::PBYTE)hIl2Cpp + GDMONJOAKHD_LJNKCHHCEAF_OFFSET))(this, a1);
		}

		::System::Boolean FLAGJFPHMGD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMONJOAKHD_FLAGJFPHMGD_OFFSET))(this);
		}

		::System::Boolean CJKLIEDKIEC(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GDMONJOAKHD_CJKLIEDKIEC_OFFSET))(this, a1, a2);
		}

		::System::Void HHEJJKKMBJK(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GDMONJOAKHD_HHEJJKKMBJK_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* AHLJAAHIMLG(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GDMONJOAKHD_AHLJAAHIMLG_OFFSET))(this, a1);
		}

	};
