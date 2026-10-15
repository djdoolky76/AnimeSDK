#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EPHNKOEJNFB.h"
#include "unitysdk/HOAKPIIOFPG.h"
#include "unitysdk/RPG/Client/MonoEmoPlayableGraph_EyeState.h"
#include "unitysdk/RPGTools/Timeline/Emotion/EmoTrackType.h"
#include "unitysdk/System/ValueTuple_2.h"
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

#define PGLFBJPOBEJ_ACHECCIHIGA_OFFSET UNITYSDK_OFFSET(0xC220170)
#define PGLFBJPOBEJ_AMGAMLHNJEL_OFFSET UNITYSDK_OFFSET(0xC21D890)
#define PGLFBJPOBEJ_BKPGOFAOBIA_OFFSET UNITYSDK_OFFSET(0xC21DD10)
#define PGLFBJPOBEJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC220B50)
#define PGLFBJPOBEJ_DACNGFAILDK_OFFSET UNITYSDK_OFFSET(0xC21D270)
#define PGLFBJPOBEJ_ECKKGIIEPNM_OFFSET UNITYSDK_OFFSET(0xC220A00)
#define PGLFBJPOBEJ_FIABLKFJCBF_OFFSET UNITYSDK_OFFSET(0xC21D1D0)
#define PGLFBJPOBEJ_GHBBBIDHLGI_OFFSET UNITYSDK_OFFSET(0xC21D370)
#define PGLFBJPOBEJ_GPEDAMBMBJA_OFFSET UNITYSDK_OFFSET(0xC21CAE0)
#define PGLFBJPOBEJ_IAABEBFCMBA_OFFSET UNITYSDK_OFFSET(0xC21F4A0)
#define PGLFBJPOBEJ_JEELDDHHDMJ_OFFSET UNITYSDK_OFFSET(0xC21CB00)
#define PGLFBJPOBEJ_LLAOHPIKAKO_OFFSET UNITYSDK_OFFSET(0xC2202E0)
#define PGLFBJPOBEJ_MBLDOKEJHDK_OFFSET UNITYSDK_OFFSET(0xC21CAF0)
#define PGLFBJPOBEJ_NKHOLHDIDIC_OFFSET UNITYSDK_OFFSET(0xC21D310)
#define PGLFBJPOBEJ_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0xC21DAA0)
#define PGLFBJPOBEJ_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xC21DB10)
#define PGLFBJPOBEJ_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xC21DB80)

inline static constexpr unsigned int PGLFBJPOBEJ_TypeDefinitionIndex = 48775;

	class PGLFBJPOBEJ : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::EPHNKOEJNFB>* EEPPHHAPFGM; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* ELHLFCJHMFN; // 0x18
		::RPG::Client::MonoEmoPlayableGraph* IPKADGBKLEK; // 0x20
		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>* BCPHFKOEPGK; // 0x28
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Single>>* KLJAIMDINMG; // 0x30
		::HOAKPIIOFPG ACDJEMJDEFE; // 0x38
		::RPGTools::Timeline::Emotion::EmoTrackType LHOGNPFFLMB; // 0x50
		::System::Boolean GBJMFEKOCGO; // 0x54
		::System::Boolean FOKJJHOCCNK; // 0x55
		::System::Byte _padding0[0x2];
		::UnityEngine::Animations::AnimationMixerPlayable PJFFKDHKKCE; // 0x58
		::UnityEngine::AnimationBlendMode LABKKJGFKGB; // 0x68
		::System::Single JLDBMPIOAED; // 0x6C
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
