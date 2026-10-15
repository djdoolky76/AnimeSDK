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
namespace System { class Tuple; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define GDMONJOAKHD_AGEIDNHECPA_OFFSET UNITYSDK_OFFSET(0x159AF570)
#define GDMONJOAKHD_AHLJAAHIMLG_OFFSET UNITYSDK_OFFSET(0x159B7170)
#define GDMONJOAKHD_AKJLOCJBFKD_OFFSET UNITYSDK_OFFSET(0x159A8500)
#define GDMONJOAKHD_ALBEJGHIMDF_OFFSET UNITYSDK_OFFSET(0x159B5BC0)
#define GDMONJOAKHD_ALEJANAODJJ_OFFSET UNITYSDK_OFFSET(0x159B0570)
#define GDMONJOAKHD_AOCNLMCACAN_OFFSET UNITYSDK_OFFSET(0x159AD890)
#define GDMONJOAKHD_AONFCKCBIOC_OFFSET UNITYSDK_OFFSET(0x159AE9A0)
#define GDMONJOAKHD_APHBCNILECE_OFFSET UNITYSDK_OFFSET(0x159B5030)
#define GDMONJOAKHD_BENMJGHMHDF_OFFSET UNITYSDK_OFFSET(0x159AD250)
#define GDMONJOAKHD_BGBPEMJCGLH_OFFSET UNITYSDK_OFFSET(0x159B10E0)
#define GDMONJOAKHD_BGIBFOBNBEK_OFFSET UNITYSDK_OFFSET(0x159A86A0)
#define GDMONJOAKHD_CCTOR_OFFSET UNITYSDK_OFFSET(0x159B71E0)
#define GDMONJOAKHD_CEDMFLIHMBJ_OFFSET UNITYSDK_OFFSET(0x159AF790)
#define GDMONJOAKHD_CGMFCFCIBAI_OFFSET UNITYSDK_OFFSET(0x159AB6D0)
#define GDMONJOAKHD_CHECKSTREAMINGLOD_OFFSET UNITYSDK_OFFSET(0x159B0AB0)
#define GDMONJOAKHD_CHECKSTREAMING_OFFSET UNITYSDK_OFFSET(0x159B0690)
#define GDMONJOAKHD_CHLAAPIMAAP_OFFSET UNITYSDK_OFFSET(0x159ABB60)
#define GDMONJOAKHD_CIJEHJFDGLO_OFFSET UNITYSDK_OFFSET(0x159B5340)
#define GDMONJOAKHD_CIPJBBAOLBD_1_OFFSET UNITYSDK_OFFSET(0x159B0E80)
#define GDMONJOAKHD_CJKLIEDKIEC_OFFSET UNITYSDK_OFFSET(0x159B66F0)
#define GDMONJOAKHD_CMPBIBPFODL_OFFSET UNITYSDK_OFFSET(0x159AA7D0)
#define GDMONJOAKHD_CPBGMHPIGAO_OFFSET UNITYSDK_OFFSET(0x159B0200)
#define GDMONJOAKHD_CTOR_OFFSET UNITYSDK_OFFSET(0x159AAD00)
#define GDMONJOAKHD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159AFA00)
#define GDMONJOAKHD_DKCJBHFCHJB_OFFSET UNITYSDK_OFFSET(0x159B25B0)
#define GDMONJOAKHD_EBBDALJMBNL_OFFSET UNITYSDK_OFFSET(0x159B39F0)
#define GDMONJOAKHD_EDIIHALCFFG_OFFSET UNITYSDK_OFFSET(0x159ACC50)
#define GDMONJOAKHD_EDNLKHJCIND_OFFSET UNITYSDK_OFFSET(0x159B5B70)
#define GDMONJOAKHD_EECILLOLJED_OFFSET UNITYSDK_OFFSET(0x159B2820)
#define GDMONJOAKHD_EEDDIMIDMCA_OFFSET UNITYSDK_OFFSET(0x159B5CD0)
#define GDMONJOAKHD_EIGBNOPMBGL_OFFSET UNITYSDK_OFFSET(0x159B1F10)
#define GDMONJOAKHD_ENTERFOCUS_OFFSET UNITYSDK_OFFSET(0x159B3850)
#define GDMONJOAKHD_EPICKNAHHKJ_OFFSET UNITYSDK_OFFSET(0x159AD870)
#define GDMONJOAKHD_FCBLGKAKCME_OFFSET UNITYSDK_OFFSET(0x159B0D40)
#define GDMONJOAKHD_FCHHKOJKLPE_OFFSET UNITYSDK_OFFSET(0x159B0DF0)
#define GDMONJOAKHD_FDOGILDBGFI_OFFSET UNITYSDK_OFFSET(0x159AD860)
#define GDMONJOAKHD_FEGLLFNCIHF_OFFSET UNITYSDK_OFFSET(0x159AF290)
#define GDMONJOAKHD_FNFGAAAMJOC_OFFSET UNITYSDK_OFFSET(0x159B4A40)
#define GDMONJOAKHD_FONPNGPBJON_OFFSET UNITYSDK_OFFSET(0x159A9A30)
#define GDMONJOAKHD_GEKPBHICMHA_OFFSET UNITYSDK_OFFSET(0x159AA260)
#define GDMONJOAKHD_GETITEMLODLEVEL_OFFSET UNITYSDK_OFFSET(0x159B5850)
#define GDMONJOAKHD_GET_CANLOADSTREAMINGRESOURCE_OFFSET UNITYSDK_OFFSET(0x159AE980)
#define GDMONJOAKHD_GET_ISFOCUSSOLVEFINISH_OFFSET UNITYSDK_OFFSET(0x159B57D0)
#define GDMONJOAKHD_GET_ISFOCUS_OFFSET UNITYSDK_OFFSET(0x159B5830)
#define GDMONJOAKHD_GET_ISPERSISTENTLOADED_OFFSET UNITYSDK_OFFSET(0x159B0DD0)
#define GDMONJOAKHD_GET_JOBDATASTREAMING_OFFSET UNITYSDK_OFFSET(0x159AAC60)
#define GDMONJOAKHD_GET_LAYERSOURCEEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x159B0E00)
#define GDMONJOAKHD_GJIAHHFDNML_OFFSET UNITYSDK_OFFSET(0x159ABA50)
#define GDMONJOAKHD_GPFLDHMJMMK_OFFSET UNITYSDK_OFFSET(0x159A9300)
#define GDMONJOAKHD_HADNKGIEJDE_OFFSET UNITYSDK_OFFSET(0x159AACA0)
#define GDMONJOAKHD_HAEDLBLNABF_OFFSET UNITYSDK_OFFSET(0x159AC350)
#define GDMONJOAKHD_HDEKKDINGBB_OFFSET UNITYSDK_OFFSET(0x159B3350)
#define GDMONJOAKHD_HENGFENIMHC_OFFSET UNITYSDK_OFFSET(0x159B0320)
#define GDMONJOAKHD_HHEJJKKMBJK_OFFSET UNITYSDK_OFFSET(0x159B6D70)
#define GDMONJOAKHD_HKJPCGMANGN_OFFSET UNITYSDK_OFFSET(0x159AD920)
#define GDMONJOAKHD_IGMIPJDOFEI_OFFSET UNITYSDK_OFFSET(0x159B36F0)
#define GDMONJOAKHD_IIGEFJJHHPK_OFFSET UNITYSDK_OFFSET(0x159B0BB0)
#define GDMONJOAKHD_IIIKIOKBIKF_OFFSET UNITYSDK_OFFSET(0x159AE690)
#define GDMONJOAKHD_IKGHMPENCGH_OFFSET UNITYSDK_OFFSET(0x159B0DB0)
#define GDMONJOAKHD_IKKAAKFEKAN_OFFSET UNITYSDK_OFFSET(0x159B30B0)
#define GDMONJOAKHD_IMGGGLCIFCF_OFFSET UNITYSDK_OFFSET(0x159B0E70)
#define GDMONJOAKHD_IMIKJMCGGML_OFFSET UNITYSDK_OFFSET(0x159B0E20)
#define GDMONJOAKHD_INACTIVEINSTANCE_OFFSET UNITYSDK_OFFSET(0x159B1B40)
#define GDMONJOAKHD_INSERTTOAOI_OFFSET UNITYSDK_OFFSET(0x159ACFD0)
#define GDMONJOAKHD_JDDNHJINEKB_OFFSET UNITYSDK_OFFSET(0x159ABEB0)
#define GDMONJOAKHD_JECGAKLKDFC_OFFSET UNITYSDK_OFFSET(0x159AB7D0)
#define GDMONJOAKHD_JEJCKDODGMG_OFFSET UNITYSDK_OFFSET(0x159B01E0)
#define GDMONJOAKHD_KCCIDOBDDOJ_OFFSET UNITYSDK_OFFSET(0x159AC8D0)
#define GDMONJOAKHD_KDJHPMPKHHF_OFFSET UNITYSDK_OFFSET(0x159B0FE0)
#define GDMONJOAKHD_KHNGFEJOOCH_OFFSET UNITYSDK_OFFSET(0x159B0C60)
#define GDMONJOAKHD_KMDFOAPFHCD_OFFSET UNITYSDK_OFFSET(0x159B4790)
#define GDMONJOAKHD_KOEMEDJCCND_OFFSET UNITYSDK_OFFSET(0x159B22D0)
#define GDMONJOAKHD_LAAMHEAGKNF_OFFSET UNITYSDK_OFFSET(0x159A9E60)
#define GDMONJOAKHD_LCPEMMLCIGK_OFFSET UNITYSDK_OFFSET(0x159AA1F0)
#define GDMONJOAKHD_LEAVEFOCUS_OFFSET UNITYSDK_OFFSET(0x159B3990)
#define GDMONJOAKHD_LEAVEOUTVISION_OFFSET UNITYSDK_OFFSET(0x159B02E0)
#define GDMONJOAKHD_LIPOHFODDEB_OFFSET UNITYSDK_OFFSET(0x159B4660)
#define GDMONJOAKHD_LJNKCHHCEAF_OFFSET UNITYSDK_OFFSET(0x159B6420)
#define GDMONJOAKHD_LJOGANKHGGK_OFFSET UNITYSDK_OFFSET(0x159B5B10)
#define GDMONJOAKHD_LJPJEPBCKPE_OFFSET UNITYSDK_OFFSET(0x159B3DE0)
#define GDMONJOAKHD_LLLLNCDAJFK_OFFSET UNITYSDK_OFFSET(0x159AE4D0)
#define GDMONJOAKHD_LNAMNBCDMFJ_OFFSET UNITYSDK_OFFSET(0x159AD3E0)
#define GDMONJOAKHD_LNGKNPJIOML_OFFSET UNITYSDK_OFFSET(0x159A8F10)
#define GDMONJOAKHD_LPDBJPJFJLG_OFFSET UNITYSDK_OFFSET(0x159AE770)
#define GDMONJOAKHD_LPOOJDFADDC_OFFSET UNITYSDK_OFFSET(0x159B19C0)
#define GDMONJOAKHD_MAODCOADFMB_OFFSET UNITYSDK_OFFSET(0x159B43F0)
#define GDMONJOAKHD_MDEABOMOHED_OFFSET UNITYSDK_OFFSET(0x159AB820)
#define GDMONJOAKHD_MLMKLHFECNO_OFFSET UNITYSDK_OFFSET(0x159AE700)
#define GDMONJOAKHD_MOHFMMPAMGD_OFFSET UNITYSDK_OFFSET(0x159B60C0)
#define GDMONJOAKHD_NGOBMJIHPGF_OFFSET UNITYSDK_OFFSET(0x159B0640)
#define GDMONJOAKHD_NNEEKPGDKMF_OFFSET UNITYSDK_OFFSET(0x159AF710)
#define GDMONJOAKHD_NPAGEPHDKOH_OFFSET UNITYSDK_OFFSET(0x159AE8C0)
#define GDMONJOAKHD_OAACFOEGNAM_OFFSET UNITYSDK_OFFSET(0x159AE0B0)
#define GDMONJOAKHD_OBNHACKCJBH_OFFSET UNITYSDK_OFFSET(0x159AF150)
#define GDMONJOAKHD_OCELGEGCHLH_OFFSET UNITYSDK_OFFSET(0x159AE020)
#define GDMONJOAKHD_ODJOCEHDAEH_OFFSET UNITYSDK_OFFSET(0x159B5AC0)
#define GDMONJOAKHD_ODOAKNFGNAJ_OFFSET UNITYSDK_OFFSET(0x159A8980)
#define GDMONJOAKHD_OIIHIGEDHHD_OFFSET UNITYSDK_OFFSET(0x159B4070)
#define GDMONJOAKHD_OJGKFPAAFAG_OFFSET UNITYSDK_OFFSET(0x159B5C10)
#define GDMONJOAKHD_ONHGGNCHHHC_OFFSET UNITYSDK_OFFSET(0x159B64C0)
#define GDMONJOAKHD_OOHLACLDFMM_OFFSET UNITYSDK_OFFSET(0x159AABD0)
#define GDMONJOAKHD_OPNNCMHGNLA_OFFSET UNITYSDK_OFFSET(0x159B4D50)
#define GDMONJOAKHD_PBHKLJPCKPD_OFFSET UNITYSDK_OFFSET(0x159B3B00)
#define GDMONJOAKHD_PHHADFLFJHG_OFFSET UNITYSDK_OFFSET(0x159AE9F0)
#define GDMONJOAKHD_PLBHEKGOBKA_OFFSET UNITYSDK_OFFSET(0x159A8E90)
#define GDMONJOAKHD_PNAICDAOIDH_OFFSET UNITYSDK_OFFSET(0x159AD430)
#define GDMONJOAKHD_QUADTREEOP_OFFSET UNITYSDK_OFFSET(0x159ACD90)
#define GDMONJOAKHD_REMOVEFROMAOI_OFFSET UNITYSDK_OFFSET(0x159AD110)
#define GDMONJOAKHD_SET_CANLOADSTREAMINGRESOURCE_OFFSET UNITYSDK_OFFSET(0x159AE990)
#define GDMONJOAKHD_SET_ISFOCUS_OFFSET UNITYSDK_OFFSET(0x159B5840)
#define GDMONJOAKHD_SET_ISPERSISTENTLOADED_OFFSET UNITYSDK_OFFSET(0x159B0DE0)
#define GDMONJOAKHD_SET_JOBDATASTREAMING_OFFSET UNITYSDK_OFFSET(0x159AAC80)
#define GDMONJOAKHD_SET_LAYERSOURCEEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x159B0E10)
#define GDMONJOAKHD_SOLVECALCULATESTREAMINGTASK_OFFSET UNITYSDK_OFFSET(0x159A94F0)
#define GDMONJOAKHD_SOLVEFOCUSSTATUS_OFFSET UNITYSDK_OFFSET(0x159B2B40)
#define GDMONJOAKHD_TOHLOD_OFFSET UNITYSDK_OFFSET(0x159AFE30)
#define GDMONJOAKHD__BNEEDCHECKSTREAMING_OFFSET UNITYSDK_OFFSET(0x159B08E0)
#define GDMONJOAKHD__REGISTERINSTANCETOCULLINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x159B18E0)
#define GDMONJOAKHD__SOLVEINSTANCELODCALC_OFFSET UNITYSDK_OFFSET(0x159AA440)
#define GDMONJOAKHD__UNREGISTERINSTANCEFROMCULLINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x159B1950)

	class GDMONJOAKHD : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::HPKACEPPPCA*>* NHECFHIDCPG; // 0x10
		::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* PONGCJLLEOI; // 0x18
		::KLEFGGIHGMI* CFMJHJILEMA; // 0x20
		::System::Collections::Concurrent::ConcurrentDictionary_2<::HPKACEPPPCA*, ::System::Int32>* BECMKFHNHKK; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* BOFCDAGFKJC; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* MKNLNDEOCEE; // 0x38
		::Collections::Pooled::PooledDictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::HPKACEPPPCA*>* NAEKEECDHNB; // 0x40
		::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>* BBFLHKMCLFM; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* NFFPHIPJEGA; // 0x50
		::System::Action* JILMNFCFMOI; // 0x58
		::System::Action* PIBCMNAFAME; // 0x60
		::System::Collections::Concurrent::ConcurrentQueue_1<::System::Tuple*>* PCILCIFFFOI; // 0x68
		::System::Collections::Generic::HashSet_1<::HPKACEPPPCA*>* OIDDKKBOEKD; // 0x70
		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* NCNHHAMBINO; // 0x78
		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* BMICLMBHFGF; // 0x80
		::System::Collections::Generic::HashSet_1<::System::Int32>* CCIEEKNBHKI; // 0x88
		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* LLBALBGMDGE; // 0x90
		::System::Collections::Generic::List_1<::System::Action*>* NFBNLDIFCGC; // 0x98
		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* KAIBMIPGFMM; // 0xA0
		::System::Collections::Generic::List_1<::System::Tuple*>* CNMJMNNDLIF; // 0xA8
		::RPG::Client::OpenWorld::StreamingLayerDetail* CDJGDNCOFOD; // 0xB0
		::UnityEngine::GameObject* KMNJGLJLCBM; // 0xB8
		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* HIKMPLOHEHI; // 0xC0
		::System::Collections::Concurrent::ConcurrentQueue_1<::HPKACEPPPCA*>* GMHOBOLANCK; // 0xC8
		::System::Collections::Generic::List_1<::System::Int32>* NBKIFKIHJDA; // 0xD0
		::INCHEAIJPMD* BKLGGOPFBCB; // 0xD8
		::LJFHKAJPFNE* PBHJFGPNGPA; // 0xE0
		::PMLOPPBCMKB* EONEEIDNGEP; // 0xE8
		::System::Collections::Generic::List_1<::HPKACEPPPCA*>* FOIIDGHBLLK; // 0xF0
		::NNGLODINPCK* HMKEHDIJNCK; // 0xF8
		::System::Collections::Generic::HashSet_1<::HPKACEPPPCA*>* IGMIHCMBLDD; // 0x100
		::UnityEngine::Vector3 BHOIIEFALGA; // 0x108
		::UnityEngine::Vector3 IGCBHABGNNA; // 0x114
		::System::Single FBEBPBHALIO; // 0x120
		::System::Boolean LOLIAKJPMLH; // 0x124
		::System::Boolean GBDHMMGEMGF; // 0x125
		::System::Boolean CAFNNMAOOFL; // 0x126
		::System::Boolean ICCMOIBEPOG; // 0x127
		::System::Single CFLFAKIBIJI; // 0x128
		::System::Int32 _LayerSourceEffectType_k__BackingField; // 0x12C
		::UnityEngine::Rect NNCPJGDOADD; // 0x130
		::PJPIEKNGCMC _JobDataStreaming_k__BackingField; // 0x140
		::System::Boolean OCEIENMCDEH; // 0x154
		::System::Boolean _CanLoadStreamingResource_k__BackingField; // 0x155
		::System::Boolean _IsFocus_k__BackingField; // 0x156
		::System::Boolean FBAFNHFONFK; // 0x157
		::System::Single KKEEOPFCLMF; // 0x158
		::System::Int32 ENPGCDGPFHG; // 0x15C
		::System::Int32 FDDBINCOHNP; // 0x160
		::System::Single DHNJAEIMIIE; // 0x164
		::System::Boolean HDALCKNKHIG; // 0x168
		::System::Boolean LLCPMGGEHDN; // 0x169
		::System::Boolean OHPJMEEPHBJ; // 0x16A
		::System::Boolean OPCBGCHKBAP; // 0x16B
		::System::Boolean _IsPersistentLoaded_k__BackingField; // 0x16C
		::System::Boolean LNFGPCMPLHE; // 0x16D
		::System::Boolean DPDGOFIGCFB; // 0x16E
		::System::Boolean CLACOLPACFK; // 0x16F
		static ::RPG::Client::RPGProfilerMarker** StaticGet_AEOPGOEAJAF()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "GDMONJOAKHD")->GetStaticField(0x564E0);
		}

		static ::System::String** StaticGet_FKODHMAJOAB()
		{
			return (::System::String**)UnitySDK::FromName("", "GDMONJOAKHD")->GetStaticField(0x564E8);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_ODGGMLDNFDJ()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "GDMONJOAKHD")->GetStaticField(0x564F0);
		}

		static ::System::Boolean* StaticGet_LIODEMHCAOF()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GDMONJOAKHD")->GetStaticField(0x13150);
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

		::System::Void FONPNGPBJON(::OIDDJJLHGKO* a1, ::APLEMBNFLAA* a2, ::System::Boolean a3, ::HPKACEPPPCA* a4, ::RPG::Client::OpenWorld::StreamingItemData* a5, ::System::Collections::Generic::KeyValuePair* a6)
		{
			return ((::System::Void(*)(::PVOID, ::OIDDJJLHGKO*, ::APLEMBNFLAA*, ::System::Boolean, ::HPKACEPPPCA*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + GDMONJOAKHD_FONPNGPBJON_OFFSET))(this, a1, a2, a3, a4, a5, a6);
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

		::System::Void BENMJGHMHDF(::System::Action* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Object*))((::PBYTE)hIl2Cpp + GDMONJOAKHD_BENMJGHMHDF_OFFSET))(this, a1, a2);
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
