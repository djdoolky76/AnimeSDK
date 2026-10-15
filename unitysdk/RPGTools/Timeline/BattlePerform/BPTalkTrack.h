#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xE8BADD0)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKTRACK_CTOR_OFFSET UNITYSDK_OFFSET(0xE8BB2D0)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKTRACK_OKMIOBDFONC_OFFSET UNITYSDK_OFFSET(0xE8BAF80)

namespace RPGTools::Timeline::BattlePerform
{
	inline static constexpr unsigned int BPTalkTrack_TypeDefinitionIndex = 48832;

	class BPTalkTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKTRACK_CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>* OKMIOBDFONC()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKTRACK_OKMIOBDFONC_OFFSET))(this);
		}

	};
}
