#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_CUTSCENECAMERATRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xE8CCD10)
#define RPGTOOLS_TIMELINE_CUTSCENECAMERATRACK_CTOR_OFFSET UNITYSDK_OFFSET(0xE8CD620)
#define RPGTOOLS_TIMELINE_CUTSCENECAMERATRACK_GET_USEUNIQUECHARACTERNAME_OFFSET UNITYSDK_OFFSET(0xE8CD610)
#define RPGTOOLS_TIMELINE_CUTSCENECAMERATRACK_HDEDIFMNMGI_OFFSET UNITYSDK_OFFSET(0xE8CD4E0)
#define RPGTOOLS_TIMELINE_CUTSCENECAMERATRACK_JMNKIDIFMOO_OFFSET UNITYSDK_OFFSET(0xE8CD400)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CutsceneCameraTrack_TypeDefinitionIndex = 48059;

	class CutsceneCameraTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::UnityEngine::Vector3 Position; // 0xC8
		::System::Boolean UseUI3DCamera; // 0xD4
		::System::Byte _padding0[0x3];
		::System::Single NearClipPlane; // 0xD8
		::System::Single FarClipPlane; // 0xDC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CUTSCENECAMERATRACK_CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CUTSCENECAMERATRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Timeline::TimelineClip* JMNKIDIFMOO(::UnityEngine::AnimationClip* a1)
		{
			return ((::UnityEngine::Timeline::TimelineClip*(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CUTSCENECAMERATRACK_JMNKIDIFMOO_OFFSET))(this, a1);
		}

		::System::Void HDEDIFMNMGI(::UnityEngine::Timeline::TimelineClip* a1, ::UnityEngine::AnimationClip* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CUTSCENECAMERATRACK_HDEDIFMNMGI_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_UseUniqueCharacterName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CUTSCENECAMERATRACK_GET_USEUNIQUECHARACTERNAME_OFFSET))(this);
		}

	};
}
