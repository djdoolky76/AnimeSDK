#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/TimelineType.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/RPG/Client/TextID.h"
class BEGFNBKEBPK;
class EBMMGODFEEO;
class EKAFJOGBCFA;
class EKFMIDBJDIA;
class FIFFPFPIEDN;
class GELIALJDFBL;
class HIIFJAIAHJN;
class HNIJBNICJFI;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class CutSceneConfigRow; }
namespace RPG::GameCore { class CutSceneSFXConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class PlayTimeline; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class VideoCaptionConfig; }
namespace RPGTools::Timeline { class BindingData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableAsset; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TimelineAsset; }
namespace UnityEngine::Timeline { class TimelineClip; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define OKKFJLFMPFK_AGGEHMEPKPP_OFFSET UNITYSDK_OFFSET(0xBEDD6F0)
#define OKKFJLFMPFK_APLNCAIMHHN_OFFSET UNITYSDK_OFFSET(0xBEDFDD0)
#define OKKFJLFMPFK_BALBJPKHBNE_OFFSET UNITYSDK_OFFSET(0xBEE0C30)
#define OKKFJLFMPFK_BFEBELLMNPP_OFFSET UNITYSDK_OFFSET(0xBEE15C0)
#define OKKFJLFMPFK_BPJIKLKMICG_OFFSET UNITYSDK_OFFSET(0xBED8C00)
#define OKKFJLFMPFK_CCTOR_OFFSET UNITYSDK_OFFSET(0xBEE16A0)
#define OKKFJLFMPFK_CDPPOHBFDHC_OFFSET UNITYSDK_OFFSET(0xBED7600)
#define OKKFJLFMPFK_CEFHFMLGNCI_OFFSET UNITYSDK_OFFSET(0xBEDC640)
#define OKKFJLFMPFK_CLBJMGONHNJ_OFFSET UNITYSDK_OFFSET(0xBEDFC30)
#define OKKFJLFMPFK_CLCMGFMIFCH_OFFSET UNITYSDK_OFFSET(0xBEDB1F0)
#define OKKFJLFMPFK_CNOIMDMCMLD_OFFSET UNITYSDK_OFFSET(0xBEE1010)
#define OKKFJLFMPFK_CTOR_OFFSET UNITYSDK_OFFSET(0xBED75A0)
#define OKKFJLFMPFK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBEDEE30)
#define OKKFJLFMPFK_DLDIKBJPLPJ_OFFSET UNITYSDK_OFFSET(0xBEE0720)
#define OKKFJLFMPFK_DOMMOEHFMOI_OFFSET UNITYSDK_OFFSET(0xBEE09E0)
#define OKKFJLFMPFK_DPPNJKKJKLM_OFFSET UNITYSDK_OFFSET(0xBEDBCD0)
#define OKKFJLFMPFK_EFOCNHBLIJF_OFFSET UNITYSDK_OFFSET(0xBEE01A0)
#define OKKFJLFMPFK_EGBDDDMLDPD_OFFSET UNITYSDK_OFFSET(0xBEE0DC0)
#define OKKFJLFMPFK_EMNIADKCHNF_OFFSET UNITYSDK_OFFSET(0xBEDD980)
#define OKKFJLFMPFK_FCOFJNPEBEF_OFFSET UNITYSDK_OFFSET(0xBED9190)
#define OKKFJLFMPFK_FMFJJHIHGMA_OFFSET UNITYSDK_OFFSET(0xBEDFEC0)
#define OKKFJLFMPFK_FPHONGHAAJA_OFFSET UNITYSDK_OFFSET(0xBEDDD90)
#define OKKFJLFMPFK_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xBED7870)
#define OKKFJLFMPFK_GNHOFHGFFAD_OFFSET UNITYSDK_OFFSET(0xBEE0330)
#define OKKFJLFMPFK_HDABJHDKFGA_OFFSET UNITYSDK_OFFSET(0xBEE1690)
#define OKKFJLFMPFK_HEEMIIICLPK_OFFSET UNITYSDK_OFFSET(0xBEE0A50)
#define OKKFJLFMPFK_HEKHNDADHFM_OFFSET UNITYSDK_OFFSET(0xBEDF5C0)
#define OKKFJLFMPFK_HGHLOJMBDDH_OFFSET UNITYSDK_OFFSET(0xBEDA470)
#define OKKFJLFMPFK_HOLHNDLIMGE_OFFSET UNITYSDK_OFFSET(0xBEDD830)
#define OKKFJLFMPFK_ICFINLHOPDB_OFFSET UNITYSDK_OFFSET(0xBEE03A0)
#define OKKFJLFMPFK_IHEHDLFOIDH_OFFSET UNITYSDK_OFFSET(0xBEE0120)
#define OKKFJLFMPFK_IHPBOMPNKED_OFFSET UNITYSDK_OFFSET(0xBED9C60)
#define OKKFJLFMPFK_IJOODEBFPCB_OFFSET UNITYSDK_OFFSET(0xBEDAAF0)
#define OKKFJLFMPFK_JMJCNNOIAKK_OFFSET UNITYSDK_OFFSET(0xBEDEF90)
#define OKKFJLFMPFK_JPKPBFDEHKB_OFFSET UNITYSDK_OFFSET(0xBEDF460)
#define OKKFJLFMPFK_KIGKKADGFCC_OFFSET UNITYSDK_OFFSET(0xBEE14D0)
#define OKKFJLFMPFK_KJMBIPABPOM_OFFSET UNITYSDK_OFFSET(0xBEE1610)
#define OKKFJLFMPFK_KLCINGHNNCA_OFFSET UNITYSDK_OFFSET(0xBED8BC0)
#define OKKFJLFMPFK_LACCFEOFLIH_OFFSET UNITYSDK_OFFSET(0xBEDDA80)
#define OKKFJLFMPFK_LCCJKFKJGKM_OFFSET UNITYSDK_OFFSET(0xBEDD320)
#define OKKFJLFMPFK_LDIDIJCOCLP_OFFSET UNITYSDK_OFFSET(0xBEDF1A0)
#define OKKFJLFMPFK_MDLJAPOOHEI_OFFSET UNITYSDK_OFFSET(0xBEDF700)
#define OKKFJLFMPFK_MOHDFHCBDPJ_OFFSET UNITYSDK_OFFSET(0xBEDA810)
#define OKKFJLFMPFK_NEABAMILBMH_OFFSET UNITYSDK_OFFSET(0xBEDF0D0)
#define OKKFJLFMPFK_NKCDHFMHFAC_OFFSET UNITYSDK_OFFSET(0xBEDBB80)
#define OKKFJLFMPFK_NLPLBPDFFHB_OFFSET UNITYSDK_OFFSET(0xBEDAB50)
#define OKKFJLFMPFK_NOOEPEBPNAA_OFFSET UNITYSDK_OFFSET(0xBEDA3D0)
#define OKKFJLFMPFK_OAOFCLBNCDG_OFFSET UNITYSDK_OFFSET(0xBEE1260)
#define OKKFJLFMPFK_OGCPOBGADGC_OFFSET UNITYSDK_OFFSET(0xBEDA1A0)
#define OKKFJLFMPFK_OMPOBMMFJLB_OFFSET UNITYSDK_OFFSET(0xBED8C90)
#define OKKFJLFMPFK_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xBEDDCE0)
#define OKKFJLFMPFK_ONSKIP_OFFSET UNITYSDK_OFFSET(0xBEDD920)
#define OKKFJLFMPFK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBED78F0)
#define OKKFJLFMPFK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBEDD190)
#define OKKFJLFMPFK_PBPODJKKHNB_OFFSET UNITYSDK_OFFSET(0xBEDB2B0)
#define OKKFJLFMPFK_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0xBED7880)
#define OKKFJLFMPFK_TICK_OFFSET UNITYSDK_OFFSET(0xBEDD1F0)
#define OKKFJLFMPFK___CUTSCENEAUDIOBEGIN_B__30_1_OFFSET UNITYSDK_OFFSET(0xBEE16C0)

inline static constexpr unsigned int OKKFJLFMPFK_TypeDefinitionIndex = 56369;

	class OKKFJLFMPFK : public ::GELIALJDFBL
	{
	public:
		::GELIALJDFBL* CJHJNLGOJLA; // 0x18
		::EBMMGODFEEO* PDOJELJJHCO; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset*>* OKPEAPOAJGJ; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Animator*>* KHONMKGFOOB; // 0x30
		::BEGFNBKEBPK* AFADKMBJPIJ; // 0x38
		::RPG::GameCore::CutSceneConfigRow* NBMDGPCGIOJ; // 0x40
		::RPG::GameCore::PlayTimeline* OFKGLJOAMLD; // 0x48
		::RPG::GameCore::VideoCaptionConfig* OLHBEFCLGLA; // 0x50
		::RPG::GameCore::CutSceneSFXConfig* GIAOLLLLBHP; // 0x58
		::RPG::GameCore::GameWorld* GNPJIAHJGIG; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>* NDDKNNEOHNO; // 0x68
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* KMOIJHMMBMP; // 0x70
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x78
		::UnityEngine::Playables::PlayableDirector* JOPCGEFEJAM; // 0x80
		::System::Single KDBGMBINNAP; // 0x88
		::System::Boolean KINCHLFNOIH; // 0x8C
		::System::Boolean BLADJCPPMDL; // 0x8D
		::System::Boolean HLFEBPNBOJJ; // 0x8E
		::System::Boolean OOEEIFJPGLB; // 0x8F
		::System::Int32 FMJHGJLOGPG; // 0x90
		::System::Int32 PEIFBPAMNCH; // 0x94
		::System::Single AHHCMLEEFLC; // 0x98
		::System::Guid GFAKDLGDHHF; // 0x9C
		::System::Single CIJLBPIBKAO; // 0xAC
		::System::UInt32 EPDNBCDDIIG; // 0xB0
		::System::Byte _padding0[0x4];
		::System::Double KPKIDIHJIIK; // 0xB8
		::System::UInt32 AGKGHDACNAF; // 0xC0
		static ::RPG::Client::RPGProfilerMarker** StaticGet_JIAGPNMOEOI()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "OKKFJLFMPFK")->GetStaticField(0x5C440);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_CCADAHPDEAM()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "OKKFJLFMPFK")->GetStaticField(0x5C448);
		}

		// static const ::System::Object OIGCDPAKDON; // 0x0
		// static const ::System::Object PDMBOBLFJPC; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayTimeline* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayTimeline*))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKKFJLFMPFK_CCTOR_OFFSET))();
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_GET_FORCESKIP_OFFSET))(this);
		}

		::GELIALJDFBL* SetNextTask(::GELIALJDFBL* a1)
		{
			return ((::GELIALJDFBL*(*)(::PVOID, ::GELIALJDFBL*))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_SETNEXTTASK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void IJOODEBFPCB(::UnityEngine::Playables::PlayableDirector* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_IJOODEBFPCB_OFFSET))(this, a1);
		}

		::System::Void KLCINGHNNCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_KLCINGHNNCA_OFFSET))(this);
		}

		::System::Void NLPLBPDFFHB(::UnityEngine::Playables::PlayableAsset* a1, ::UnityEngine::Playables::PlayableDirector* a2, ::System::Collections::Generic::List_1<::EKAFJOGBCFA*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableAsset*, ::UnityEngine::Playables::PlayableDirector*, ::System::Collections::Generic::List_1<::EKAFJOGBCFA*>*))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_NLPLBPDFFHB_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean CLCMGFMIFCH(::UnityEngine::Timeline::TimelineAsset* a1, ::RPGTools::Timeline::BindingData* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TimelineAsset*, ::RPGTools::Timeline::BindingData*))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_CLCMGFMIFCH_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::EKAFJOGBCFA*>* OMPOBMMFJLB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Collections::Generic::List_1<::EKAFJOGBCFA*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_OMPOBMMFJLB_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::EKAFJOGBCFA*>* PBPODJKKHNB(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::EKAFJOGBCFA*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_PBPODJKKHNB_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::EKAFJOGBCFA*>* DPPNJKKJKLM(::UnityEngine::Timeline::TimelineAsset* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* a2)
		{
			return ((::System::Collections::Generic::List_1<::EKAFJOGBCFA*>*(*)(::PVOID, ::UnityEngine::Timeline::TimelineAsset*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_DPPNJKKJKLM_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_TICK_OFFSET))(this, a1);
		}

		::System::Void AGGEHMEPKPP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_AGGEHMEPKPP_OFFSET))(this, a1);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_ONSKIP_OFFSET))(this);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_DISPOSE_OFFSET))(this);
		}

		::System::Void FPHONGHAAJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_FPHONGHAAJA_OFFSET))(this);
		}

		::System::Int32 NEABAMILBMH(::UnityEngine::Timeline::TimelineClip* a1, ::UnityEngine::Timeline::TimelineClip* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_NEABAMILBMH_OFFSET))(this, a1, a2);
		}

		::System::Void FCOFJNPEBEF(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_FCOFJNPEBEF_OFFSET))(this, a1);
		}

		::System::Void JMJCNNOIAKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_JMJCNNOIAKK_OFFSET))(this);
		}

		::System::Void IHPBOMPNKED(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_IHPBOMPNKED_OFFSET))(this, a1);
		}

		::System::Void LDIDIJCOCLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_LDIDIJCOCLP_OFFSET))(this);
		}

		::System::Void JPKPBFDEHKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_JPKPBFDEHKB_OFFSET))(this);
		}

		::System::Void HEKHNDADHFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_HEKHNDADHFM_OFFSET))(this);
		}

		::System::Void MDLJAPOOHEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_MDLJAPOOHEI_OFFSET))(this);
		}

		::System::Void IHEHDLFOIDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_IHEHDLFOIDH_OFFSET))(this);
		}

		::System::Void OGCPOBGADGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_OGCPOBGADGC_OFFSET))(this);
		}

		::System::Void FMFJJHIHGMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_FMFJJHIHGMA_OFFSET))(this);
		}

		::System::Void HGHLOJMBDDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_HGHLOJMBDDH_OFFSET))(this);
		}

		::System::Void LACCFEOFLIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_LACCFEOFLIH_OFFSET))(this);
		}

		::System::Void GNHOFHGFFAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_GNHOFHGFFAD_OFFSET))(this);
		}

		::System::Void DOMMOEHFMOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_DOMMOEHFMOI_OFFSET))(this);
		}

		::System::Void HEEMIIICLPK(::Il2CppArray<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_HEEMIIICLPK_OFFSET))(this, a1, a2);
		}

		::System::Void CEFHFMLGNCI(::UnityEngine::Timeline::TimelineAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineAsset*))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_CEFHFMLGNCI_OFFSET))(this, a1);
		}

		::FIFFPFPIEDN* EFOCNHBLIJF()
		{
			return ((::FIFFPFPIEDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_EFOCNHBLIJF_OFFSET))(this);
		}

		::HIIFJAIAHJN* NOOEPEBPNAA(::System::String* a1)
		{
			return ((::HIIFJAIAHJN*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_NOOEPEBPNAA_OFFSET))(this, a1);
		}

		::System::Void BPJIKLKMICG(::RPG::GameCore::TimelineType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimelineType))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_BPJIKLKMICG_OFFSET))(this, a1);
		}

		::HNIJBNICJFI* BALBJPKHBNE()
		{
			return ((::HNIJBNICJFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_BALBJPKHBNE_OFFSET))(this);
		}

		::System::Void MOHDFHCBDPJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_MOHDFHCBDPJ_OFFSET))(this, a1);
		}

		::System::Void CLBJMGONHNJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_CLBJMGONHNJ_OFFSET))(this, a1);
		}

		::System::Void APLNCAIMHHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_APLNCAIMHHN_OFFSET))(this);
		}

		::System::Void NKCDHFMHFAC(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_NKCDHFMHFAC_OFFSET))(this, a1);
		}

		::System::Void EGBDDDMLDPD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_EGBDDDMLDPD_OFFSET))(this, a1);
		}

		::System::Void EMNIADKCHNF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_EMNIADKCHNF_OFFSET))(this);
		}

		::System::Void CNOIMDMCMLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_CNOIMDMCMLD_OFFSET))(this);
		}

		::System::Void HOLHNDLIMGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_HOLHNDLIMGE_OFFSET))(this);
		}

		::System::Void DLDIKBJPLPJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_DLDIKBJPLPJ_OFFSET))(this);
		}

		::System::Void OAOFCLBNCDG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_OAOFCLBNCDG_OFFSET))(this, a1);
		}

		::System::Void KIGKKADGFCC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_KIGKKADGFCC_OFFSET))(this, a1);
		}

		::System::Void ICFINLHOPDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_ICFINLHOPDB_OFFSET))(this);
		}

		::System::Void LCCJKFKJGKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_LCCJKFKJGKM_OFFSET))(this);
		}

		::System::Void BFEBELLMNPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_BFEBELLMNPP_OFFSET))(this);
		}

		::System::Void CDPPOHBFDHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_CDPPOHBFDHC_OFFSET))(this);
		}

		::System::Void KJMBIPABPOM(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_KJMBIPABPOM_OFFSET))(this, a1);
		}

		::System::Int32 HDABJHDKFGA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKFJLFMPFK_HDABJHDKFGA_OFFSET))(this);
		}

		::System::Void __CutsceneAudioBegin_b__30_1(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OKKFJLFMPFK___CUTSCENEAUDIOBEGIN_B__30_1_OFFSET))(this, a1);
		}

	};
