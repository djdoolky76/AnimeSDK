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

#define OKKFJLFMPFK_AGGEHMEPKPP_OFFSET UNITYSDK_OFFSET(0xC7DE240)
#define OKKFJLFMPFK_APLNCAIMHHN_OFFSET UNITYSDK_OFFSET(0xC7E08E0)
#define OKKFJLFMPFK_BALBJPKHBNE_OFFSET UNITYSDK_OFFSET(0xC7E1740)
#define OKKFJLFMPFK_BFEBELLMNPP_OFFSET UNITYSDK_OFFSET(0xC7E20E0)
#define OKKFJLFMPFK_BPJIKLKMICG_OFFSET UNITYSDK_OFFSET(0xC7D96C0)
#define OKKFJLFMPFK_CCTOR_OFFSET UNITYSDK_OFFSET(0xC7E21C0)
#define OKKFJLFMPFK_CDPPOHBFDHC_OFFSET UNITYSDK_OFFSET(0xC7D80B0)
#define OKKFJLFMPFK_CEFHFMLGNCI_OFFSET UNITYSDK_OFFSET(0xC7DD190)
#define OKKFJLFMPFK_CLBJMGONHNJ_OFFSET UNITYSDK_OFFSET(0xC7E0730)
#define OKKFJLFMPFK_CLCMGFMIFCH_OFFSET UNITYSDK_OFFSET(0xC7DBCE0)
#define OKKFJLFMPFK_CNOIMDMCMLD_OFFSET UNITYSDK_OFFSET(0xC7E1B20)
#define OKKFJLFMPFK_CTOR_OFFSET UNITYSDK_OFFSET(0xC7D8040)
#define OKKFJLFMPFK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC7DF930)
#define OKKFJLFMPFK_DLDIKBJPLPJ_OFFSET UNITYSDK_OFFSET(0xC7E1220)
#define OKKFJLFMPFK_DOMMOEHFMOI_OFFSET UNITYSDK_OFFSET(0xC7E14E0)
#define OKKFJLFMPFK_DPPNJKKJKLM_OFFSET UNITYSDK_OFFSET(0xC7DC810)
#define OKKFJLFMPFK_EFOCNHBLIJF_OFFSET UNITYSDK_OFFSET(0xC7E0CA0)
#define OKKFJLFMPFK_EGBDDDMLDPD_OFFSET UNITYSDK_OFFSET(0xC7E18D0)
#define OKKFJLFMPFK_EMNIADKCHNF_OFFSET UNITYSDK_OFFSET(0xC7DE500)
#define OKKFJLFMPFK_FCOFJNPEBEF_OFFSET UNITYSDK_OFFSET(0xC7D9C80)
#define OKKFJLFMPFK_FMFJJHIHGMA_OFFSET UNITYSDK_OFFSET(0xC7E09D0)
#define OKKFJLFMPFK_FPHONGHAAJA_OFFSET UNITYSDK_OFFSET(0xC7DE8B0)
#define OKKFJLFMPFK_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xC7D8330)
#define OKKFJLFMPFK_GNHOFHGFFAD_OFFSET UNITYSDK_OFFSET(0xC7E0E30)
#define OKKFJLFMPFK_HDABJHDKFGA_OFFSET UNITYSDK_OFFSET(0xC7E21B0)
#define OKKFJLFMPFK_HEEMIIICLPK_OFFSET UNITYSDK_OFFSET(0xC7E1550)
#define OKKFJLFMPFK_HEKHNDADHFM_OFFSET UNITYSDK_OFFSET(0xC7E00C0)
#define OKKFJLFMPFK_HGHLOJMBDDH_OFFSET UNITYSDK_OFFSET(0xC7DAF60)
#define OKKFJLFMPFK_HOLHNDLIMGE_OFFSET UNITYSDK_OFFSET(0xC7DE380)
#define OKKFJLFMPFK_ICFINLHOPDB_OFFSET UNITYSDK_OFFSET(0xC7E0EA0)
#define OKKFJLFMPFK_IHEHDLFOIDH_OFFSET UNITYSDK_OFFSET(0xC7E0C30)
#define OKKFJLFMPFK_IHPBOMPNKED_OFFSET UNITYSDK_OFFSET(0xC7DA750)
#define OKKFJLFMPFK_IJOODEBFPCB_OFFSET UNITYSDK_OFFSET(0xC7DB5E0)
#define OKKFJLFMPFK_JMJCNNOIAKK_OFFSET UNITYSDK_OFFSET(0xC7DFA90)
#define OKKFJLFMPFK_JPKPBFDEHKB_OFFSET UNITYSDK_OFFSET(0xC7DFF60)
#define OKKFJLFMPFK_KIGKKADGFCC_OFFSET UNITYSDK_OFFSET(0xC7E1FF0)
#define OKKFJLFMPFK_KJMBIPABPOM_OFFSET UNITYSDK_OFFSET(0xC7E2130)
#define OKKFJLFMPFK_KLCINGHNNCA_OFFSET UNITYSDK_OFFSET(0xC7D9680)
#define OKKFJLFMPFK_LACCFEOFLIH_OFFSET UNITYSDK_OFFSET(0xC7DE5F0)
#define OKKFJLFMPFK_LCCJKFKJGKM_OFFSET UNITYSDK_OFFSET(0xC7DDE70)
#define OKKFJLFMPFK_LDIDIJCOCLP_OFFSET UNITYSDK_OFFSET(0xC7DFCA0)
#define OKKFJLFMPFK_MDLJAPOOHEI_OFFSET UNITYSDK_OFFSET(0xC7E0200)
#define OKKFJLFMPFK_MOHDFHCBDPJ_OFFSET UNITYSDK_OFFSET(0xC7DB300)
#define OKKFJLFMPFK_NEABAMILBMH_OFFSET UNITYSDK_OFFSET(0xC7DFBD0)
#define OKKFJLFMPFK_NKCDHFMHFAC_OFFSET UNITYSDK_OFFSET(0xC7DC6C0)
#define OKKFJLFMPFK_NLPLBPDFFHB_OFFSET UNITYSDK_OFFSET(0xC7DB640)
#define OKKFJLFMPFK_NOOEPEBPNAA_OFFSET UNITYSDK_OFFSET(0xC7DAEC0)
#define OKKFJLFMPFK_OAOFCLBNCDG_OFFSET UNITYSDK_OFFSET(0xC7E1D70)
#define OKKFJLFMPFK_OGCPOBGADGC_OFFSET UNITYSDK_OFFSET(0xC7DAC90)
#define OKKFJLFMPFK_OMPOBMMFJLB_OFFSET UNITYSDK_OFFSET(0xC7D9750)
#define OKKFJLFMPFK_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xC7DE850)
#define OKKFJLFMPFK_ONSKIP_OFFSET UNITYSDK_OFFSET(0xC7DE470)
#define OKKFJLFMPFK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC7D83B0)
#define OKKFJLFMPFK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC7DDCE0)
#define OKKFJLFMPFK_PBPODJKKHNB_OFFSET UNITYSDK_OFFSET(0xC7DBDA0)
#define OKKFJLFMPFK_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0xC7D8340)
#define OKKFJLFMPFK_TICK_OFFSET UNITYSDK_OFFSET(0xC7DDD40)
#define OKKFJLFMPFK___CUTSCENEAUDIOBEGIN_B__30_1_OFFSET UNITYSDK_OFFSET(0xC7E21E0)

inline static constexpr unsigned int OKKFJLFMPFK_TypeDefinitionIndex = 57583;

	class OKKFJLFMPFK : public ::GELIALJDFBL
	{
	public:
		::System::String* BBMILNDGBFP; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Animator*>* KHONMKGFOOB; // 0x20
		::EBMMGODFEEO* PDOJELJJHCO; // 0x28
		::RPG::GameCore::GameWorld* GNPJIAHJGIG; // 0x30
		::BEGFNBKEBPK* AFADKMBJPIJ; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>* NDDKNNEOHNO; // 0x40
		::RPG::GameCore::VideoCaptionConfig* OLHBEFCLGLA; // 0x48
		::RPG::GameCore::PlayTimeline* OFKGLJOAMLD; // 0x50
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* KMOIJHMMBMP; // 0x58
		::RPG::GameCore::CutSceneConfigRow* NBMDGPCGIOJ; // 0x60
		::UnityEngine::Playables::PlayableDirector* JOPCGEFEJAM; // 0x68
		::GELIALJDFBL* CJHJNLGOJLA; // 0x70
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset*>* OKPEAPOAJGJ; // 0x78
		::RPG::GameCore::CutSceneSFXConfig* GIAOLLLLBHP; // 0x80
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x88
		::System::Int32 PEIFBPAMNCH; // 0x90
		::System::Single AHHCMLEEFLC; // 0x94
		::System::UInt32 EPDNBCDDIIG; // 0x98
		::System::Guid GFAKDLGDHHF; // 0x9C
		::System::UInt32 AGKGHDACNAF; // 0xAC
		::System::Boolean HLFEBPNBOJJ; // 0xB0
		::System::Boolean BLADJCPPMDL; // 0xB1
		::System::Boolean KINCHLFNOIH; // 0xB2
		::System::Boolean OOEEIFJPGLB; // 0xB3
		::System::Byte _padding0[0x4];
		::System::Double KPKIDIHJIIK; // 0xB8
		::System::Int32 FMJHGJLOGPG; // 0xC0
		::System::Single CIJLBPIBKAO; // 0xC4
		::System::Single KDBGMBINNAP; // 0xC8
		static ::RPG::Client::RPGProfilerMarker** StaticGet_CCADAHPDEAM()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "OKKFJLFMPFK")->GetStaticField(0x56280);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_JIAGPNMOEOI()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "OKKFJLFMPFK")->GetStaticField(0x56288);
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
