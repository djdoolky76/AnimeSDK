#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EPHNKOEJNFB.h"
#include "unitysdk/HOAKPIIOFPG.h"
#include "unitysdk/RPG/Client/MonoEmoPlayableGraph_EyeState.h"
#include "unitysdk/RPGTools/Timeline/Emotion/EmoTrackType.h"
#include "unitysdk/System/ValueTuple.h"
#include "unitysdk/UnityEngine/Animations/AnimationMixerPlayable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/AnimationBlendMode.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPG::Client { class MonoEmoPlayableGraph; }
namespace RPGTools::Timeline::Emotion { class EmoTimelineClip; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define PGLFBJPOBEJ_ACHECCIHIGA_OFFSET UNITYSDK_OFFSET(0xC227740)
#define PGLFBJPOBEJ_AMGAMLHNJEL_OFFSET UNITYSDK_OFFSET(0xC224E70)
#define PGLFBJPOBEJ_BKPGOFAOBIA_OFFSET UNITYSDK_OFFSET(0xC2252F0)
#define PGLFBJPOBEJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC228120)
#define PGLFBJPOBEJ_DACNGFAILDK_OFFSET UNITYSDK_OFFSET(0xC224850)
#define PGLFBJPOBEJ_ECKKGIIEPNM_OFFSET UNITYSDK_OFFSET(0xC227FD0)
#define PGLFBJPOBEJ_FIABLKFJCBF_OFFSET UNITYSDK_OFFSET(0xC2247B0)
#define PGLFBJPOBEJ_GHBBBIDHLGI_OFFSET UNITYSDK_OFFSET(0xC224950)
#define PGLFBJPOBEJ_GPEDAMBMBJA_OFFSET UNITYSDK_OFFSET(0xC2240C0)
#define PGLFBJPOBEJ_IAABEBFCMBA_OFFSET UNITYSDK_OFFSET(0xC226A70)
#define PGLFBJPOBEJ_JEELDDHHDMJ_OFFSET UNITYSDK_OFFSET(0xC2240E0)
#define PGLFBJPOBEJ_LLAOHPIKAKO_OFFSET UNITYSDK_OFFSET(0xC2278B0)
#define PGLFBJPOBEJ_MBLDOKEJHDK_OFFSET UNITYSDK_OFFSET(0xC2240D0)
#define PGLFBJPOBEJ_NKHOLHDIDIC_OFFSET UNITYSDK_OFFSET(0xC2248F0)
#define PGLFBJPOBEJ_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0xC225080)
#define PGLFBJPOBEJ_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xC2250F0)
#define PGLFBJPOBEJ_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xC225160)

inline static constexpr unsigned int PGLFBJPOBEJ_TypeDefinitionIndex = 48775;

	class PGLFBJPOBEJ : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>* BCPHFKOEPGK; // 0x10
		::RPG::Client::MonoEmoPlayableGraph* IPKADGBKLEK; // 0x18
		::HOAKPIIOFPG ACDJEMJDEFE; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* ELHLFCJHMFN; // 0x38
		::System::Collections::Generic::List_1<::EPHNKOEJNFB>* EEPPHHAPFGM; // 0x40
		::System::Collections::Generic::List_1<::System::ValueTuple>* KLJAIMDINMG; // 0x48
		::UnityEngine::Animations::AnimationMixerPlayable PJFFKDHKKCE; // 0x50
		::System::Boolean FOKJJHOCCNK; // 0x60
		::System::Boolean GBJMFEKOCGO; // 0x61
		::System::Byte _padding0[0x2];
		::UnityEngine::AnimationBlendMode LABKKJGFKGB; // 0x64
		::System::Single JLDBMPIOAED; // 0x68
		::RPGTools::Timeline::Emotion::EmoTrackType LHOGNPFFLMB; // 0x6C
		// static const ::System::Object JFJFPDHILBB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLFBJPOBEJ_CTOR_OFFSET))(this);
		}

		::System::Boolean GPEDAMBMBJA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLFBJPOBEJ_GPEDAMBMBJA_OFFSET))(this);
		}

		::System::Boolean MBLDOKEJHDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLFBJPOBEJ_MBLDOKEJHDK_OFFSET))(this);
		}

		::System::Void JEELDDHHDMJ(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>*))((::PBYTE)hIl2Cpp + PGLFBJPOBEJ_JEELDDHHDMJ_OFFSET))(this, a1);
		}

		::System::Void FIABLKFJCBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLFBJPOBEJ_FIABLKFJCBF_OFFSET))(this);
		}

		::System::Void DACNGFAILDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLFBJPOBEJ_DACNGFAILDK_OFFSET))(this);
		}

		::System::Void NKHOLHDIDIC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PGLFBJPOBEJ_NKHOLHDIDIC_OFFSET))(this, a1);
		}

		::System::Void AMGAMLHNJEL(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + PGLFBJPOBEJ_AMGAMLHNJEL_OFFSET))(this, a1);
		}

		::System::Void GHBBBIDHLGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLFBJPOBEJ_GHBBBIDHLGI_OFFSET))(this);
		}

		::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + PGLFBJPOBEJ_ONPLAYABLECREATE_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + PGLFBJPOBEJ_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + PGLFBJPOBEJ_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IAABEBFCMBA(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + PGLFBJPOBEJ_IAABEBFCMBA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BKPGOFAOBIA(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + PGLFBJPOBEJ_BKPGOFAOBIA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LLAOHPIKAKO(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>*))((::PBYTE)hIl2Cpp + PGLFBJPOBEJ_LLAOHPIKAKO_OFFSET))(this, a1);
		}

		::System::Void ACHECCIHIGA(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + PGLFBJPOBEJ_ACHECCIHIGA_OFFSET))(this, a1);
		}

		::RPG::Client::MonoEmoPlayableGraph_EyeState ECKKGIIEPNM(::RPGTools::Timeline::Emotion::EmoTimelineClip* a1)
		{
			return ((::RPG::Client::MonoEmoPlayableGraph_EyeState(*)(::PVOID, ::RPGTools::Timeline::Emotion::EmoTimelineClip*))((::PBYTE)hIl2Cpp + PGLFBJPOBEJ_ECKKGIIEPNM_OFFSET))(this, a1);
		}

	};
