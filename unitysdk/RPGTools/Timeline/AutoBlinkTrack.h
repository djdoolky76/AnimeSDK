#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CharacterTrack.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_AUTOBLINKTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1E3D7EF0)
#define RPGTOOLS_TIMELINE_AUTOBLINKTRACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3D8060)
#define RPGTOOLS_TIMELINE_AUTOBLINKTRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0x1E3D7EA0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int AutoBlinkTrack_TypeDefinitionIndex = 48898;

	class AutoBlinkTrack : public ::RPGTools::Timeline::CharacterTrack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUTOBLINKTRACK_CTOR_OFFSET))(this);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUTOBLINKTRACK_ONCREATECLIP_OFFSET))(this, a1);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUTOBLINKTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

	};
}
