#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

class LOGBFCNIJIE;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_WWISEAUDIOTRACK_BPMKEKLABAP_OFFSET UNITYSDK_OFFSET(0x1C0E5700)
#define MOLEMOLE_TIMELINE_WWISEAUDIOTRACK_CNHKBNFDLAN_OFFSET UNITYSDK_OFFSET(0x1C0E5740)
#define MOLEMOLE_TIMELINE_WWISEAUDIOTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1C0E4C60)
#define MOLEMOLE_TIMELINE_WWISEAUDIOTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1C0E4EB0)
#define MOLEMOLE_TIMELINE_WWISEAUDIOTRACK_DFBHNIGIMPO_OFFSET UNITYSDK_OFFSET(0x1C0E50D0)
#define MOLEMOLE_TIMELINE_WWISEAUDIOTRACK_FANCAMJCNEA_OFFSET UNITYSDK_OFFSET(0x1C0E6070)
#define MOLEMOLE_TIMELINE_WWISEAUDIOTRACK_JGJPMNIKFEB_OFFSET UNITYSDK_OFFSET(0x1C0E5540)
#define MOLEMOLE_TIMELINE_WWISEAUDIOTRACK_LGAGFNHGIGH_OFFSET UNITYSDK_OFFSET(0x1C0E63D0)
#define MOLEMOLE_TIMELINE_WWISEAUDIOTRACK_POPHHMGOCGN_OFFSET UNITYSDK_OFFSET(0x1C0E5820)
#define MOLEMOLE_TIMELINE_WWISEAUDIOTRACK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C0E50C0)
#define MOLEMOLE_TIMELINE_WWISEAUDIOTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0E5010)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int WwiseAudioTrack_TypeDefinitionIndex = 58220;

	class WwiseAudioTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		static ::System::Boolean* StaticGet_overRide_DisplayName()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(WwiseAudioTrack_TypeDefinitionIndex)->GetStaticField(0x143E0);
		}
		static ::System::Boolean* StaticGet_hasLoadAudio()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(WwiseAudioTrack_TypeDefinitionIndex)->GetStaticField(0x143E1);
		}
		::System::Collections::Generic::List_1<::LOGBFCNIJIE*>* paramList; // 0xB0
		::Il2CppArray<::System::Int32>* disableInVoiceLanguages; // 0xB8
		::System::Boolean disableMale; // 0xC0
		::System::Boolean disableFamale; // 0xC1

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOTRACK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOTRACK__CCTOR_OFFSET))();
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* JEIDPPCEHLD, ::UnityEngine::Timeline::TimelineClip* PHGBOCIDLEI)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOTRACK_CREATEPLAYABLE_OFFSET))(this, MHPNGBGGMMN, JEIDPPCEHLD, PHGBOCIDLEI);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* NJOAJLDJCCJ, ::System::Int32 BMHCCJPEFPI)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOTRACK_CREATETRACKMIXER_OFFSET))(this, MHPNGBGGMMN, NJOAJLDJCCJ, BMHCCJPEFPI);
		}

		::System::Void DFBHNIGIMPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOTRACK_DFBHNIGIMPO_OFFSET))(this);
		}

		::System::Void JGJPMNIKFEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOTRACK_JGJPMNIKFEB_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable BPMKEKLABAP(::UnityEngine::Playables::PlayableGraph MIALFKCCCPI, ::UnityEngine::GameObject* KMGKAIDEIBA, ::UnityEngine::Timeline::TimelineClip* FDHMCIFPNCK)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOTRACK_BPMKEKLABAP_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}

		::System::Void CNHKBNFDLAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOTRACK_CNHKBNFDLAN_OFFSET))(this);
		}

		::System::Boolean POPHHMGOCGN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOTRACK_POPHHMGOCGN_OFFSET))(this);
		}

		::System::Void FANCAMJCNEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOTRACK_FANCAMJCNEA_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable LGAGFNHGIGH(::UnityEngine::Playables::PlayableGraph MIALFKCCCPI, ::UnityEngine::GameObject* KMGKAIDEIBA, ::System::Int32 FDHMCIFPNCK)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOTRACK_LGAGFNHGIGH_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}
	};
}
