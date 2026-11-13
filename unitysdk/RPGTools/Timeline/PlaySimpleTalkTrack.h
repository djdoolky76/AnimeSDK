#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1C758100)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1C7584A0)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKTRACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7591B0)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKTRACK_FDEIKACGJPF_OFFSET UNITYSDK_OFFSET(0x1C758B50)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKTRACK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C759170)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int PlaySimpleTalkTrack_TypeDefinitionIndex = 49267;

	class PlaySimpleTalkTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Boolean AutoEnd; // 0xC8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKTRACK_CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKTRACK_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::UnityEngine::Timeline::TimelineClip*>* FDEIKACGJPF()
		{
			return ((::Il2CppArray<::UnityEngine::Timeline::TimelineClip*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKTRACK_FDEIKACGJPF_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKTRACK_ONENABLE_OFFSET))(this);
		}

	};
}
